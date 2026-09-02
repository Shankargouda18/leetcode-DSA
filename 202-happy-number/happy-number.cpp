class Solution {
public:
// Helper function to calculate the sum of the squares of the digits
int getNext(int num) {
    int totalSum = 0;
    while (num > 0) {
        int digit = num % 10;
        totalSum += digit * digit;
        num /= 10;
    }
    return totalSum;
}

bool isHappy(int n) {
    int slow = n;
    int fast = n;
    
    // Move pointers until they meet or fast hits 1
    do {
        slow = getNext(slow);
        fast = getNext(getNext(fast));
    } while (slow != fast);
    
    // If they meet at 1, it is a happy number
    return slow == 1;
}
};