class Solution {
public:
    int reverse(int x) {
        switch(x){
        case -2147483648 : {return 0; break;}
        default : break;
    }
        bool neg = false;
        int ret=0, i=0, len = numDigits(x);
        if(x<0){neg = true; x *= -1;}  
        if(len==10)if(reverse(x%1000000000)>214748364 && x/1000000000 <=7) return 0;  
        while(x){
            ret += x%10 * pow(10, len-1 - i);
            x/=10;
            i++;
        }
        return neg ? -1*ret : ret;
    }
    int numDigits(int32_t x)
{
    //if (x == -2147483648) return 10 + 1;
    switch(x){
        case -2147483648 : {return 10; break;}
        default : break;
    } 
    if (x<0) x *= -1;

    if (x >= 10000) {
        if (x >= 10000000) {
            if (x >= 100000000) {
                if (x >= 1000000000)
                    return 10;
                return 9;
            }
            return 8;
        }
        if (x >= 100000) {
            if (x >= 1000000)
                return 7;
            return 6;
        }
        return 5;
    }
    if (x >= 100) {
        if (x >= 1000)
            return 4;
        return 3;
    }
    if (x >= 10)
        return 2;
    return 1;
}
};