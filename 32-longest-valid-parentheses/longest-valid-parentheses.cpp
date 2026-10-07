class Solution {
public:
    int longestValidParentheses(string s) {
        int left = 0, right = 0, maxLength = 0;
        int n = s.length();
        
        // 1. Left-to-right scan
        for (int i = 0; i < n; i++) {
            if (s[i] == '(') {
                left++;
            } else {
                right++;
            }
            
            if (left == right) {
                maxLength = max(maxLength, 2 * right);
            } else if (right > left) {
                // Invalid state: reset counters
                left = right = 0;
            }
        }
        
        // Reset counters for the reverse scan
        left = right = 0;
        
        // 2. Right-to-left scan
        for (int i = n - 1; i >= 0; i--) {
            if (s[i] == '(') {
                left++;
            } else {
                right++;
            }
            
            if (left == right) {
                maxLength = max(maxLength, 2 * left);
            } else if (left > right) {
                // Invalid state: reset counters
                left = right = 0;
            }
        }
        
        return maxLength;
    }
};
