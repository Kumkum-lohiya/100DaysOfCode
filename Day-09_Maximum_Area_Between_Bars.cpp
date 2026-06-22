// Problem: Maximum Area Between Bars
// Platform: GeeksforGeeks
// Link: https://www.geeksforgeeks.org/problems/dam-of-candies--141631/1?_gl=1*1du31oq*_up*MQ..*_gs*MQ..&gclid=CjwKCAjwuuPRBhAnEiwA2Ji8eloYHFWNnvl2VnWdVPhnovFjKLGOCMp7Qqt7p007VRXHUuXnoCGqJRoCCtwQAvD_BwE&gbraid=0AAAAAC9yBkC_0dNvUbHaV5Ncg6zUX5OTc

class Solution {
  public:
    int maxArea(vector<int> &height) {
        
        int n = height.size();
        int left = 0;
        int right = n-1;
        int res = 0;
        
        while(left < right){
            int width = right - left - 1;
            
            if(height[left] < height[right]){
                res = max(res,width * height[left]);
                left++;
            }
            else if(height[right] < height[left]){
                res = max(res, width * height[right]);
                right--;
            }
            else{
                res = max(res,width * height[left]);
                left++;
                right--;
            }
            
        }
        return res;
    }
};
