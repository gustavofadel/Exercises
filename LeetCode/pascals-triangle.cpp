class Solution {
public:
    vector<vector<int>> generate (int numRows) {
        vector<vector<int>> triangle(numRows);
        for (int i = 0; i < numRows; i++) {
            triangle[i] = vector<int>(i + 1);
            for (int j = 0; j <= i; triangle[i][j] = (j == 0 || j == i ? 1 : triangle[i - 1][j - 1] + triangle[i - 1][j]), j++);
        }
        return triangle;
    }
};