// Problem: Reverse an Array
// Platform: GeeksforGeeks
// Link: https://www.geeksforgeeks.org/problems/reverse-an-array/1

// Code
class Solution {
  public:
    void reverseArray(vector<int> &arr) {
        // code here
        int n = arr.size();
        int s = 0;
        int e = n-1;
        int temp;
        while(s<e){
            temp = arr[s];
            arr[s] = arr[e];
            arr[e] = temp;
            
            s++;
            e--;
        }
    }
};
