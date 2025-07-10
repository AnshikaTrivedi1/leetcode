class Solution {
    public void merge(int[] nums1, int m, int[] nums2, int n) {
        int[] result = new int[m+n];
        int i=0,j=0,k=0;
        while(i<m){
            result[k++] = nums1[i++];
        }
        while(j<n){
            result[k++] = nums2[j++];
        }
        Arrays.sort(result);
        for(int p=0;p<m+n;p++){
            nums1[p] = result[p]; 
        }
    }
}