class Solution {
public:
    int myAtoi(string s) {
        int n  = s.size();
        int i = 0 ;
        while(i < n  && s[i]==' ') i++;
        int sign = 1;

        if(i < n && ( s[i] == '+' || s[i] == '-') ) {
            if( s[i] == '-') sign = -1;
            i++;
        }
        long long digit = 0 ;
        while( i < n  && isdigit(s[i])){
            digit = digit * 10 + s[i] - '0';
            if( digit > INT_MAX && sign == 1 ) return INT_MAX;
            if(digit > INT_MAX && sign == -1 ) return INT_MIN;
            i++;
        }
        return sign* digit ;
        
    }
};