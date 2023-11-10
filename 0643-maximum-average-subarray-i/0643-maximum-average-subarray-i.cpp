class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double avg = 0;
        double m = INT_MIN;
        int i=0 , j=0;

    while(j<nums.size()){
        avg = avg + (double)nums[j]/k;
        if(j-i+1 < k){
            j++;
        }

        else if(j-i+1 == k){
            m = max(m,avg);
            avg = avg - (double)nums[i]/k;
            i++;
            j++;

        }
    }

        return m;
    }
};