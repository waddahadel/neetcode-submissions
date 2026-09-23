class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        // simple two pointer solution
        int l = 0;
        int r = numbers.size() - 1;

        while(l < r){
            int sum = numbers[l] + numbers[r];

            // if they sum up to the target, return them
            if(sum == target) return {l+1,r+1};
            
            // if they are bigger we decrement the right pointer
            else if(sum > target) r--;
            
            // else we increase the l pointer
            else{ l++;}
        }
    }
};
