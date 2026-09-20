class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        // first we create a map for the frequencies
        unordered_map<int,int> freq;

        // fill it up
        for(int& num : nums){
            freq[num]++;
        }

        // now we create a priority queue of pairs
        priority_queue<pair<int,int>> pq;

        // store the items of the map in the queue
        for(auto& [key,value] : freq){
            pq.push({value,key});
        }

        // now we create the result array of size k, and assign the highest.
        vector<int> result(k);

        for(int i = 0; i < k; ++i){
            result[i] = pq.top().second;
            pq.pop();
        }

        // return the result
        return result;
    }
};
