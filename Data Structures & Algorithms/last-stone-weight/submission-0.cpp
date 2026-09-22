class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        // we initialize a max heap
        priority_queue<int> pq(stones.begin(), stones.end());

        // while it has a length >= 2 we do the following
        while(pq.size() >= 2){
            // take the two max stones
            int max1 = pq.top();
            pq.pop();
            int max2 = pq.top();
            pq.pop();

            // if they are not equal we do something, otherwise nothing
            if(max1 != max2){
                pq.push(abs(max1 - max2));
            }
        }

        // simple check to get our answer
        if(pq.empty()) return 0;

        return pq.top();
    }
};
