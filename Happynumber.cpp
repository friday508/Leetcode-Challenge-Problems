class Solution {
public:
    int squaredSum(int n) {
        int sum = 0;
        while (n > 0) {
            int digit = n % 10;
            sum += digit * digit;
            n /= 10;
        }
        return sum;
    }

    bool isHappy(int n) {
        int slow = squaredSum(n);
        int fast = squaredSum(squaredSum(n));

        while (slow != fast) {
            slow = squaredSum(slow);
            fast = squaredSum(squaredSum(fast));
        }

        return slow == 1;
    }
};
