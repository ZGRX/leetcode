//做法1
class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n = matrix.size();
        vector<int> nums(n*n);
        int m = 0;
        //把想要的数组次序按照顺序在一维数组中排好
        for(int i = 0 ; i < n ; i++){
            for(int j = n-1 ; j >= 0 ; j--){
                nums[m] = matrix[j][i];
                m++;
            }
        }
        m = 0;
        //然后还值就行了
        for(int i = 0 ; i < n ; i++){
            for(int j = 0 ; j < n  ; j++){
                matrix[i][j] = nums[m];
                m++;
            }
        }        
    }
};
//做法2
void rotate(vector<vector<int>>& matrix) {
    int n = matrix.size();

    // 1. 上下翻转
    for (int i = 0; i < n / 2; i++) {
        swap(matrix[i], matrix[n - 1 - i]);
    }

    // 2. 对角线翻转
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            swap(matrix[i][j], matrix[j][i]);
        }
    }
}