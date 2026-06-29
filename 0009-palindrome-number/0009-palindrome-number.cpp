class Solution {
public:
    bool isPalindrome(int x) {
      
        long long y = 0;
        int o = x;
        if(x<0)return false;
        while(x){
            y = y*10 + x%10;
            x = x/10;
        }

        if(o == y)
        return true;
        else return false;
    }
};