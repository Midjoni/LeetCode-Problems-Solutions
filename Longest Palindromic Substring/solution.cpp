class Solution {
public:
    bool isPalindrome (string::iterator i1, string::iterator i2) {
        if (i1 == i2) return true;
        while (i2!=i1 && i2-i1!=-1){
            if(*i1!=*i2)return false;
            i1++;
            i2--;
        }
        return true;
    }
    string longestPalindrome(string s) {
        int max = 0;
        string ret;
        auto p = s.begin(), q = s.begin();
        while(p != s.end()) {
            if(max > q - p + 1)break;
            q = p;
            while(q != s.end()) {
                
                if(isPalindrome(p, q) && q - p + 1 > max) {
                    max = q - p + 1;
                    ret = string(p, q+1);
                }
                
                q++;
            }
            p++;
        }
        return ret;
    }
};