class Solution {
public:
    vector<vector<char>> rotateTheBox(vector<vector<char>>& boxGrid) {
        vector<vector<char>> boxGrid2(boxGrid[0].size(),vector<char>(boxGrid.size(),0));
        //双指针模拟重力
        for(int i = 0; i < boxGrid.size();i++){
            int bottom = boxGrid[0].size()-1;
            for(int j = boxGrid[0].size()-1 ; j>=0;j--){
                if(boxGrid[i][j] == '.') continue;
                if(boxGrid[i][j] == '*') bottom = j-1;
                if(boxGrid[i][j] == '#') {
                    swap(boxGrid[i][j],boxGrid[i][bottom]);
                    bottom--;
                }
            }
        }
        //旋转
        for(int i = 0; i <boxGrid.size();i++){
            for(int j = 0 ; j <boxGrid2.size();j++){
                boxGrid2[j][boxGrid.size() - 1 - i] = boxGrid[i][j];
            }
        }
        return boxGrid2;


    }
};