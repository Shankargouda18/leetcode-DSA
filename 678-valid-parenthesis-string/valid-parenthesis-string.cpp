class Solution {
public:
    bool checkValidString(string s) {
        int minOpen = 0; // Minimum possible open '(' brackets
        int maxOpen = 0; // Maximum possible open '(' brackets

        for (char c : s) {
            if (c == '(') {
                minOpen++;
                maxOpen++;
            } else if (c == ')') {
                minOpen--;
                maxOpen--;
            } else { // c == '*'
                minOpen--; // If '*' acts as ')'
                maxOpen++; // If '*' acts as '('
                // Note: If '*' acts as empty string, minOpen and maxOpen remain unchanged relatively (accounted for by the range)
            }

            // If maxOpen falls below 0, it means we have too many ')' and no combinations of '(' or '*' can save it.
            if (maxOpen < 0) return false;

            // minOpen cannot be negative because we can't have "negative" open brackets required. 
            // If it dips below 0, it just means we utilized some '*' as ')' when we didn't actually need to.
            if (minOpen < 0) minOpen = 0;
        }

        // The string is valid if it's possible to have exactly 0 open brackets left over.
        return minOpen == 0;
    }
};
