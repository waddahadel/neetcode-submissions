class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        // we first create a set from the vector
        unordered_set<int> nums_set(nums.begin(),nums.end());

        // our result
        int result = 0;

        // now iterate over the vector
        for(int num : nums){
            // check if the element is a start of a set
            if(nums_set.find(num - 1) == nums_set.end()){
                // initialize the length of the current subsequence
                int length = 1;

                // count
                while(nums_set.find(num + length) != nums_set.end()){
                    length++;
                }

                result = max(result, length);
            }
        }
        return result;
    }
};
