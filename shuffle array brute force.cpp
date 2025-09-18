class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int> shuf;
        int l=0;
        int index=0;
        for(int i=0;i<n;i++){
            int r=l+n;
            shuf.push_back(nums[l]);
            shuf.push_back(nums[r]);
            l++;
        }
       return shuf; 
    }
};
