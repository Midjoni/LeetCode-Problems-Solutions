//looking back at this, it has awful space and time complexity, at least the code itself doesn't look bad lol
class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> v = nums1;
        v.insert(v.end(), nums2.begin(), nums2.end());
        std::sort(v.begin(), v.end());
        return (v.size()%2==0) ? (v.at(v.size()/2) + v.at(v.size()/2-1)) / 2. : v.at(size_t(v.size() / 2));
    }
};