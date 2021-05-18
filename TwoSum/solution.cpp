// Coded for O(1) space complexity, maybe try hash maps for O(n) time and space complexity???
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        for(int i = 0; i<nums.size(); i++){
            for(int j = 0; j<nums.size(); j++){
                if (nums.at(i) + nums.at(j) == target && i!=j)return vector<int>{i,j};
            }
        }
    return vector<int>();}
};