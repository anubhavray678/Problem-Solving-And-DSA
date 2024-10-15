class Solution {
public:
    long long minimumSteps(string s) {
        // 10100011
        long long blackBallcount = 0;
        long long totalSwaps = 0;
        int len = s.length();
        for (int i = 0; i < len; ++i) {
            if (s[i] == '0') {
                totalSwaps += blackBallcount;
            } else {
                blackBallcount++;
            }
        }
        return totalSwaps;
    }
};