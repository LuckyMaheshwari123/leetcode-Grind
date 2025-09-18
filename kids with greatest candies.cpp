class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int max=candies[0];
        vector<bool> result;
        int n=candies.size();
        for(int i=0;i<n;i++){
         if(candies[i]>max){
            max=candies[i];
         }
        }
        int temp;
        for(int i=0;i<n;i++){
            temp=candies[i]+extraCandies;
            if(temp>=max){
        
                result.push_back(true);
            }
            else{
                result.push_back(false);
            }
        }
        return result;
    }
};
