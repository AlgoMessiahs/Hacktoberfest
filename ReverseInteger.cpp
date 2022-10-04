class Solution {
public:
    int reverse(int x) {
        long long rev = 0 , digit;
        
        while(x){
            digit = x%10;
            rev = rev * 10 + digit;
            if ( rev > INT_MAX || rev < INT_MIN)
            {
                return 0;
            }
            x = x/10;
        }
        return rev;
    }
};
