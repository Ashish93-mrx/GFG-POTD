class Solution{
public:
    int findMin(int n, char a[]){
        // code here
        int i=0,r=0,g=0,b=0;
        while(i<n)
        {
           if(a[i]=='R') 
           {
               r++;
           }
           else if(a[i]=='B')
           {
               b++;
           }
           else{
               g++;
           }
            
           i++;
        }
        if((r==n) || (b==n) || (g==n))
           return n;
        if((r%2==0 && b%2==0 && g%2==0) || (r%2!=0 && g%2!=0 && b%2!=0)) 
           return 2;
           
        return 1;
    }
};
