//hashmap - put 1 value in it, then next then check if the next value exists if yes return true else false.
class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set<int> checker;
        for(int i = 0; i< nums.size(); i++)
        if(checker.count(nums[i])){
        return true;
        }
        else {
            checker.insert(nums[i]);
        }
        return false;
    }
};