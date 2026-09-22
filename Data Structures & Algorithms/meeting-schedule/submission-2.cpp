/**
 * Definition of Interval:
 * class Interval {
 * public:
 *     int start, end;
 *     Interval(int start, int end) {
 *         this->start = start;
 *         this->end = end;
 *     }
 * }
 */

class Solution {
public:
    bool canAttendMeetings(vector<Interval>& intervals) {
        // we sort the intervals array
        sort(intervals.begin(), intervals.end(), [](auto& x, auto&y){
            return x.start < y.start;
        });

        // now we just loop and compare
        for(int i = 1; i < intervals.size(); ++i){
            if(intervals[i].start < intervals[i - 1].end) return false;
        }

        return true;
    }
};
