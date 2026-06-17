// Problem: Cut Rope to Maximise Product
// Platform: GeeksforGeeks
// Link: https://www.geeksforgeeks.org/problems/max-rope-cutting1312/1?_gl=1*mc9e85*_up*MQ..*_gs*MQ..&gclid=Cj0KCQjwi8nRBhDhARIsAHZf_pbiIy2hHgWK1802ixgzLi30DW9sSuRnMzoOcwMJ8X8id17oFOrS0E0aAr4iEALw_wcB&gbraid=0AAAAAC9yBkAEew55dsACuMiEDx3JuFPik

class Solution {
public:
    int maxProduct(int n) {
        if (n == 2) return 1;
        if (n == 3) return 2;

        int product = 1;

        while (n > 4) {
            product *= 3;
            n -= 3;
        }

        return product * n;
    }
};
