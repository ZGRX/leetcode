class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
    return std::distance(arr.begin(), std::max_element(arr.begin(), arr.end()));
    }
};
//std::max_element()返回最大值

//std::distance(数组.begin(),要返回的值）回给定索引
//std::distance 要求两个参数都必须是迭代器。