class Solution {
public:
    int maxArea(vector<int>& height) {
        auto l = height.begin(), r = height.end() -1;
        int _max = 0;
        while (l != r){
            _max = std::max(_max, static_cast<int>(min(*l, *r) * std::distance(l,r)));
            if (*l < *r) l++;
            else r--;
        }
        return _max;
    }
};