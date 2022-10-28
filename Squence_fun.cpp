class Solution {
	public:
	    int NthTerm(int n){
		    long mod=1000000007;
		    long a=1;
		    for(int i=1;i<=n;i++)
		    {
		        a=(a*i)%mod+1;
		    }
		    return a;
		}

};
