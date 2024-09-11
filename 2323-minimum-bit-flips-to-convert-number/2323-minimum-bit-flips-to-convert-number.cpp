class Solution {
public:
    int minBitFlips(int start, int goal) {
        int count = 0;
        while(start >0 || goal > 0){
            auto bits_of_start = (1 & start);
            auto bits_of_goal = (1 & goal);

            if(bits_of_start != bits_of_goal){
                count++;
            }
            start >>= 1;
            goal >>= 1;
        }
        return count;
    }
};