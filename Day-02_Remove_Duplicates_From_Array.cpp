// Problem: Remove Duplicates from Array
// Platform: GeeksforGeeks
// Link: https://www.geeksforgeeks.org/problems/remove-duplicate-elements-from-sorted-array/1

class Solution {
public:
    vector<int> removeDuplicates(vector<int>& arr) {
        vector<int> ans;

        ans.push_back(arr[0]);

        for(int i = 1; i < arr.size(); i++) {
            if(arr[i] != arr[i-1]) {
                ans.push_back(arr[i]);
            }
        }

        return ans;
    }
};
