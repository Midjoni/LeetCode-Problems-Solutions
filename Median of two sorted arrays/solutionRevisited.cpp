//much better :D
class Solution {
public:
    double findNth (const int& n, const vector<int>& nums1, const vector<int>& nums2) {
        if(nums1.empty()) return nums2[n];
        if(nums2.empty()) return nums1[n];
        size_t middleOfFirst = nums1.size() / 2;
        size_t middleOfSecond = nums2.size() / 2;
        if (n > middleOfFirst + middleOfSecond) {
            if (nums1[middleOfFirst] > nums2[middleOfSecond]) return findNth (n - middleOfSecond - 1, nums1, vector<int>(nums2.begin() + middleOfSecond + 1, nums2.end()));
            else return findNth (n - middleOfFirst - 1, vector<int>(nums1.begin() + middleOfFirst + 1, nums1.end()), nums2 );
        } else {
            if (nums1[middleOfFirst] > nums2[middleOfSecond]) return findNth (n, vector<int>(nums1.begin() , nums1.begin() + middleOfFirst ) ,nums2);
            else return findNth (n, nums1, vector<int>(nums2.begin(), nums2.begin() + middleOfSecond ));
        }
    }
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        size_t _size = nums1.size() + nums2.size();
        if (_size % 2 == 0) return (findNth(_size / 2, nums1, nums2) + findNth(_size / 2 - 1, nums1, nums2)) / 2;
        else return findNth(_size / 2, nums1, nums2);
    }
};