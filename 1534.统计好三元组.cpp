class Solution {
public:
    int countGoodTriplets(vector<int>& arr, int a, int b, int c) {
        int res = 0;
        for(int i = 0; i < arr.size(); i++){
            for(int j = i+1; j < arr.size();j++){
                for(int l = j+1 ; l < arr.size();l++){
                    if(abs(arr[i]-arr[j]) <= a && abs(arr[j]-arr[l]) <= b && abs(arr[i]-arr[l]) <= c){
                        res++;
                    }
                }
            }
        }
        return res;
    }
};