//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution 
{
    public:
    //Function to find distance of nearest 1 in the grid for each cell.
	vector<vector<int>>nearest(vector<vector<int>>grid)
	{
	    // Code here
	    vector<vector<int>> temp=grid;
	    queue<pair<int,int>> que;
	    int row=grid.size();
	    int col=grid[0].size();
	    int lvl=0,rtmp,ctmp,size;
	    
	    for(int i=0;i<row;i++)
	    {
	        for(int j=0;j<col;j++)
	        {
	            if(grid[i][j]==1)
	            {
	              que.push({i,j}); 
	            }
	        }
	    }
	    
	    while(!que.empty())
	    {
	        ++lvl;
	        size=que.size();
	        while(size-->0)
	        {
	            rtmp=que.front().first;
	            ctmp=que.front().second;
	            que.pop();
	            if(rtmp>0 && grid[rtmp-1][ctmp]==0)
	            {
	                que.push({rtmp-1,ctmp});
                    grid[rtmp-1][ctmp]=lvl;
	                //lvl++;
	            }
	            
	            if(ctmp>0 && grid[rtmp][ctmp-1]==0)
	            {
	                que.push({rtmp,ctmp-1});
	                grid[rtmp][ctmp-1]=lvl;
	            }
	            
	            if(rtmp<row-1 && grid[rtmp+1][ctmp]==0){
                       que.push({rtmp+1,ctmp});
                       grid[rtmp+1][ctmp]=lvl;
                   }
                if(ctmp<col-1 && grid[rtmp][ctmp+1]==0){
                       que.push({rtmp,ctmp+1});
                       grid[rtmp][ctmp+1]=lvl;
                 }
	            
	        }
	    }
	    
	    for(int i=0;i<row;++i){
               for(int j=0;j<col;++j){
                   if(temp[i][j]==1){
                       grid[i][j]=0;
                   }
               }
           }
           return grid;
	}
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n, m;
		cin >> n >> m;
		vector<vector<int>>grid(n, vector<int>(m, -1));
		for(int i = 0; i < n; i++){
			for(int j = 0; j < m; j++){
				cin >> grid[i][j];
			}
		}
		Solution obj;
		vector<vector<int>> ans = obj.nearest(grid);
		for(auto i: ans){
			for(auto j: i){
				cout << j << " ";
			}
			cout << "\n";
		}
	}
	return 0;
}
// } Driver Code Ends
