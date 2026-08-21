//array nums length n 
//ans 1 2 3 -> 1 + 2 = 1 2 3 1 2 3
class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        int n = nums.size();
        vector<int> newArray(2*n); 

        
        for(int i = 0; i< n; i++){
            newArray[i] = nums[i];
            newArray[i+n] = nums[i];
        }
        return newArray;
    }
};