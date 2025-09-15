class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        bool found=false;
        int n=nums.size();
        for(int i=0;i<n-1;i++){
            for(int j=i+1;j<n;j++){
             if(nums[i]==nums[j]){
                found=true;
                break;
             }

            }
        }
      return found;  
    }
};
