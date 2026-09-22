class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        // we use a min heap of tuple and vectors
        priority_queue< vector<int> , vector<vector<int>>, greater<vector<int>>> pq;

        // fill it up
        for(vector<int>& point : points){

            // 
            int distance = point[0]*point[0] + point[1]*point[1];
            // create a vector and push it to the heap
            vector<int> temp = {distance , point[0], point[1]};
            pq.push(temp);
        }

        // result vector
        vector<vector<int>> result;

        // get the top k closest to origin
        while(k > 0){
            result.push_back( {pq.top()[1] , pq.top()[2]} );
            pq.pop();
            k--;
        }

        return result;
    }
};

