int largestArea(int n,int m,int k,vector<vector<int>> &enemy)
        {
            //  code here
            if(k==0)return m*n;
            vector<int> row(n,0);
            vector<int> col(m,0);
            
            for(int i=0;i<enemy.size();i++)
            {
                row[enemy[i][0]-1]=-1;
                col[enemy[i][1]-1]=-1;
            }
            int maxiR=0;
            int cntR=0;
            for(int i=0;i<row.size();i++)
            {
                if(row[i]!=-1)
                {
                    cntR++;
                }
                //else
                //{
                    //maxiR=cntR;
                
                
                else
                {
                    cntR=0;
                //}
               // if(cntR>maxiR) maxiR=cntR;
                   // cntR=0;
                }
                maxiR=max(maxiR,cntR);
            }
            
            int maxiC=0;
            int cntC=0;
            for(int i=0;i<col.size();i++)
            {
                if(col[i]!=-1)
                {
                    cntC++;
                }
                else
                {
                    cntC=0;
                }
                 maxiC=max(maxiC,cntC);;
            }
            return maxiR*maxiC;
        }
