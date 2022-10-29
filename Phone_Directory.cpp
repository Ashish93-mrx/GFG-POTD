 vector<vector<string>> displayContacts(int n, string contact[], string s)
    {
        // code here
        map<string,int> m;
        for(int i=0;i<n;i++)
        {
            m[contact[i]]++;
        }
        
        vector<vector<string>>res;
        for(int i=0;i<s.size();i++)
        {
            vector<string>k;
            for(auto j:m)
            {
                if(j.first.substr(0,i+1)==s.substr(0,i+1))
                k.push_back(j.first);
            }
            if(k.size()==0)k.push_back("0");
            res.push_back(k);
        }
        return res;
    }
