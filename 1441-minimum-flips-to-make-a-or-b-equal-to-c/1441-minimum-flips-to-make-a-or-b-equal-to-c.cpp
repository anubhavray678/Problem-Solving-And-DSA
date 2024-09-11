class Solution {
public:
    int countFlips(int a, int b, int goal) {
        int count = 0;
        while (a > 0 || b>0 || goal > 0) {
            auto bits_of_a = (1 & a);
            auto bits_of_b = (1 & b);
            auto bits_of_goal = (1 & goal);

            if (bits_of_goal == 0) {
                // Both a and b bits should be 0, flip if either is 1
                if (bits_of_a == 1) count++;
                if (bits_of_b == 1) count++;
            } else {
                // At least one of a or b should be 1, flip if both are 0
                if (bits_of_a == 0 && bits_of_b == 0) count++;
            }
            a >>= 1;
            b >>= 1;
            goal >>= 1;
        }
        return count;
    }
    int minFlips(int a, int b, int c) {
        int count = countFlips(a, b, c);
        return count;
    }
};