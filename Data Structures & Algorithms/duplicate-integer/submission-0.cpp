class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_map<int,int> track;

        for(int num: nums){
            track[num]++;
            if(track[num] > 1){
                return true;
            }
        }

        return false;
    }
};