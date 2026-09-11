class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        // Traverse the vector from the least significant digit (right to left)
        for (int i = digits.size() - 1; i >= 0; --i) {
            // If the current digit is less than 9, increment it and return
            if (digits[i] < 9) {
                digits[i]++;
                return digits;
            }
            // If the digit is 9, it becomes 0 due to carry-over
            digits[i] = 0;
        }
        
        // If the loop finishes, it means all digits were 9 (e.g., 999 -> 1000)
        // We overwrite the first digit to 1 and push a 0 to the end
        digits[0] = 1;
        digits.push_back(0);
        
        return digits;

    }
};