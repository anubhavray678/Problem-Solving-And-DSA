class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        vector<int> result;
        for(int i = 0; i<arr2.size(); ++i){
            int ele = arr2[i];
            for(int j = 0; j<arr1.size(); ++j){
                if(arr1[j] == ele){
                    result.push_back(arr1[j]);
                }
            }
        }
        vector<int> temp;
        for(int i = 0; i<arr1.size(); ++i){
            int ele = arr1[i];
            bool found = false;
            for(int j = 0; j<result.size(); ++j){
                if(result[j] == ele){
                    found = true;
                    break;
                }
                else{
                    found = false;
                }
            }
            if(found == false){
                temp.push_back(arr1[i]);
               
            }
        }
        sort(temp.begin(), temp.end());
        for(auto x: temp) result.push_back(x);
        
        return result;

    }
};