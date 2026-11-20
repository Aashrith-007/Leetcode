class Solution {
public:
    int findCircleNum(vector<vector<int>>& isConnected) {
        int n=isConnected.size();
        vector<int> vis(n,0);
        int c=0;
        for (int i=0;i<n;i++){
            if (!vis[i]){
                c++;
                queue<int>q;
                q.push(i);
                vis[i]=1;
                while (!q.empty()){
                    int o=q.front();
                    q.pop();
                    for (int k=0;k<n;k++){
                        if (!vis[k] && isConnected[o][k]==1){
                            q.push(k);
                            vis[k]=1;
                        }
                    }
                }

            }
        }
        return c;


        
    }
};