class Solution {
public:
    long long maximumTotalSum(vector<int>& maximumHeight) {
        int n = maximumHeight.size();
        // [2,3,4,3, 3]
        sort(maximumHeight.begin(), maximumHeight.end(), greater<int>());
        // [4,3,3, 3 ,2]
        long long sum = 0;
        int now = maximumHeight[0];
        for (int num : maximumHeight) {
            if (now > num) {
                now = num;
            }
            if (now <= 0) {
                return -1;
            }
            sum += now;
            now -= 1;
        }
        return sum;
    }
};