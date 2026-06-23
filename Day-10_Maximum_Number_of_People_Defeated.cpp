// Problem: Maximum Number of People Defeated
// Platform: GeeksforGeeks
// Link:https://www.geeksforgeeks.org/problems/killing-spree3020/1?_gl=1*15ghp08*_up*MQ..*_gs*MQ..&gclid=CjwKCAjw3ejRBhAdEiwADkqPn12w1y-ewP5k2j-PwnCm3C4DLc73TFYviyEfdsMAbzllhOp0_LmwSxoCRvAQAvD_BwE&gbraid=0AAAAAC9yBkBuqLHswgqDf6TT_6T8srrjf

class Solution {
  public:
    int maxPeopleDefeated(int p) {
        // Code Here
        int i = 1;
        int count = 0;
        while(i*i <= p){
            p = p - (i*i);
            count++;
            i++;
            
        }
        
        return count;
    }
};
