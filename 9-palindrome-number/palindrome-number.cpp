class Solution {
public:
    bool isPalindrome(int x) {
        int  num=x;
        double sum=0;
        while(x>0)
        {    double lg=x%10;
            sum=(sum*10) + lg;
            x/=10;

        }
        if(sum==num) return true;
        return false;
        
    }   
    
};