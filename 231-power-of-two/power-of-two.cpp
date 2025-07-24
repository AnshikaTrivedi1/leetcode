class Solution {
public:
    bool isPowerOfTwo(int n) {
        // i took 30 becoz int ki range is also in 2^30 mtlb sari 2^pows cover ho jayengi
        for(int i=0;i<=30;i++){

            int ans=pow(2,i);
            if(ans==n) return true;

        }   
        return false;
        
    }
};