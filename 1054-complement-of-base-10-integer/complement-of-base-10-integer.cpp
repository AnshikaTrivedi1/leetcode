class Solution {
public:
    int bitwiseComplement(int n) {
        int m=n;
        int mask=0;
        if(n==0) return 1; //edge case h y 0 ka comp is always 1
        while(m!=0){
            mask=(mask<<1)|1;
            m=m>>1;

        }
        int ans=(~n) & mask;
        return ans;
    }
};