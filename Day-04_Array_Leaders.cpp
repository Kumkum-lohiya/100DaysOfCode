// Problem: Array Leaders
// Platform: GeeksforGeeks
// Link:https://www.geeksforgeeks.org/problems/leaders-in-an-array-1587115620/1

class Solution {
  public:
    vector<int> leaders(vector<int>& arr) {
        // code here
        int n = arr.size();
        
        vector<int> res;
        
        int max = arr[n-1];
        res.push_back(max);
        
        for(int i = n-2;i>=0; i--){
            if(arr[i] >= max){
                max = arr[i];
                res.push_back(max);
            }
        }
        
        reverse(res.begin(),res.end());
        return res;
    }
};
