// Problem: Majority Element
// Platform: GeeksforGeeks
// Link: https://www.geeksforgeeks.org/problems/majority-element-1587115620/1

class Solution {
public:
    int majorityElement(vector<int>& arr) {
        int count = 0;
        int candidate = 0;

        // Step 1: Find candidate
        for (int num : arr) {
            if (count == 0) {
                candidate = num;
            }

            if (num == candidate)
                count++;
            else
                count--;
        }

        // Step 2: Verify candidate
        count = 0;
        for (int num : arr) {
            if (num == candidate)
                count++;
        }

        // Step 3: Check if candidate is majority
        if (count > arr.size() / 2)
            return candidate;

        return -1;
    }
};
