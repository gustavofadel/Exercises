class Solution {
public:
    int fib (int n) {
        return round((pow((1 + sqrt(5)) / 2, n) - pow((1 - sqrt(5)) / 2, n)) / sqrt(5));
    }
};