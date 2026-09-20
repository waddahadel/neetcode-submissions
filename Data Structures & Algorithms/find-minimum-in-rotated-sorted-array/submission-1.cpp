class Solution {
public:
    int findMin(vector<int> &nums) {
        int l = 0;
        int r = nums.size() - 1;

        while(l < r){
            // get the pivot
            int m = l + (r - l)/2;

            // do the checks, first if the element we are looking for is on the right 
            if(nums[m] < nums[r]){
                r = m;
            }

            // else we search left
            else{
                l = m +1;;
            }
        }
        return nums[l];
    }
};
