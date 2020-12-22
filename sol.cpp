class Solution {
public:
    bool isPalindrome(int x) {
        //check if 'x' is less than 0, if true then return false
        if(x<0)
            return 0;
        //convert number to integer array
        int a[1000], cnt=0;
        while(x>0) {
            a[cnt++]=x%10;
            x/=10;
        }
        //check if first a[i] matches a[n-1-i]
        for(int i=0; i<cnt; ++i)
            if(a[i]!=a[cnt-1-i])
                return 0;
        return 1;
    }
};
