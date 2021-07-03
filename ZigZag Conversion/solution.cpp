class Solution {
public:
    string convert(string s, int numRows) {
        if (numRows == 1) return s;
        vector<string> v ( numRows );
        bool down = false;
        int i = 0;
        for(auto a : s) {
            v.at(i) += a;
            if(i == 0 || i == numRows - 1) down = !down;
            i += down ? 1 : -1;
        }
        string ret{};
        for (string str : v) ret+=str;
        return ret;
    }
};