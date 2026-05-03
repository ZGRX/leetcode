class Solution {
public:
    int maxScore(string s) {
        int sum = 0;
        int max = 0;
        int counter = 0;
        int counter1 = 0;
        for(int i = 0; i < s.length() - 1;i++){
            if(s[i] == '1') counter++;
        }
        // for(char i : s){
        //     if(i == '0') counter1++;
        //     else counter--;
        //     sum = counter+ counter1;
        //     if(sum>max ) max = sum;
        // }
        for(int i = 0; i < s.length() - 1;i++){
            if(s[i] == '0') counter1++;
            else counter--;
            sum = counter + counter1;
            if(sum > max) max = sum;
        }
        if(s[s.length()-1] == '0') return max; 
        else return max+1;
    }
};