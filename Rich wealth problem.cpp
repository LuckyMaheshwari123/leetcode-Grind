class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int n=accounts.size();
        int m=accounts[0].size();
        int fsum=0;
       
        for(int i=0;i<n;i++){
             int tempsum=0;
            for(int j=0;j<m;j++){
             tempsum+=accounts[i][j];
            }
            if(tempsum>fsum){
                fsum=tempsum;
            }
           
        }
      return fsum;  
    }
};
