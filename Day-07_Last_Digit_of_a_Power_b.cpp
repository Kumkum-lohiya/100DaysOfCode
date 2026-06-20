// Problem: Last Digit of a^b
// Platform: GeeksforGeeks
// Link: https://www.geeksforgeeks.org/problems/find-last-digit-of-ab-for-large-numbers1936/1?_gl=1*1s51lx8*_up*MQ..*_gs*MQ..&gclid=CjwKCAjw9NjRBhATEiwA_p2J8YnObfwFWEQpEtfUYTsjTQgDyf9FUCnFQ42MWrvmbWh8sGnY5ePC7hoC4AIQAvD_BwE&gbraid=0AAAAAC9yBkDeKv7IxLd8l_5n-xUVd6sHJ

class Solution {
	public:
	int getLastDigit(string& a, string& b) {
		
		if (b == "0")
			return 1;
		
		int last_digit = a.back() - '0';
		
		int exp = 0;
		for (char ch : b) {
			exp = (exp * 10 + (ch - '0')) % 4;
		}
		
		if (exp == 0)
			exp = 4;
		
		int ans = 1;
		for (int i = 0; i<exp; i++) {
			ans = (ans * last_digit) %10;
		}
		
		return ans;
		
	}
};
