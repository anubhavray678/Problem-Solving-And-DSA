class Solution {
public:
    int minElement(vector<int>& nums) {
        int minNum = INT_MAX;

        for(int n : nums){
            int sumDigit = sumDigits(n);
            minNum = min(minNum, sumDigit);
        }
        return minNum;
    }
private:
    int sumDigits(int num){
        int sum = 0;
        while(num){
            int digit = num % 10;
            sum += digit;
            num /=10;
        }
        return sum;
    }
};