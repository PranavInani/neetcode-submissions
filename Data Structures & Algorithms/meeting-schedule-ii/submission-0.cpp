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
    int minMeetingRooms(vector<Interval>& intervals) {
        map<int, int> mp;
        for (auto& i : intervals) {
            mp[i.start]++;
            mp[i.end]--;
        }
        int curr = 0, res = 0;
        for (auto& [key, value] : mp) {
            curr += value;
            res = max(res, curr);
        }
        return res;
    }
};