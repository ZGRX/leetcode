class Solution {
public:
    int maxVowels(string s, int k) {
        int counter= 0;//元音字母数量
        int cur = 0;
        int max = 0;
        for(int i = 0 ; i < s.length(); i++){
            //如果字母是元音，那么元音数+1
            if(s[i] == 'a'|| s[i] == 'e'||s[i] == 'o' || s[i] == 'i' || s[i] == 'u'){
                counter++;
            }
            if(counter>max) max = counter;
            cur++;//每次增加，代表窗口目前的长度
            if(cur == k ){
                cur--;//窗口满了减掉最前面的数字，如果最前面是元音，减掉元音字母数
                if(s[i-k+1] == 'a'|| s[i-k+1] == 'e'||s[i-k+1] == 'o' || s[i-k+1] == 'i' || s[i-k+1] == 'u'){
                    counter--;
                }
            }
        }
        return max;
    }
};