class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        set<vector<int>> s;
        vector<vector<int>> v;
        sort(nums.begin(), nums.end());
        int i = 0;
        int k = nums.size()-1;
        while( i < k ){
            int j = i + 1;
            int sum = 0;
            while( j < k){
                sum = nums[i]+ nums[j]+nums[k];
                if(sum<0){
                    j++;
                }
                else if(sum>0){
                    k--;
                }
                else{
                    if(s.find({ nums[i],nums[j],nums[k]})==s.end()){
                        s.insert({ nums[i],nums[j],nums[k]});
                        v.push_back({ nums[i],nums[j],nums[k]});
                    }
                    j++;
                }
            }
            k = nums.size()-1;
            i++;
        }
        return v;
    }
};
