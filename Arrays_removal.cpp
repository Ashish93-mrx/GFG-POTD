int removals(vector<int>& arr, int k){
        //Code here
        int n=arr.size();
        sort(arr.begin(),arr.end());
        int i=0,j=0;
        int maxi=0;
        while(j<n)
        {
            if(arr[j]-arr[i]<=k)j++;
            else if(i<j)i++;
            maxi=max(maxi,j-i);
        }
        return n-maxi;
    }
