class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int m=nums1.size();
        int n=nums2.size();
        vector<int>a;
        double sum;
        int i=0,j=0;
        while(i<m&&j<n){
            if(nums1[i]<=nums2[j]){
                a.push_back(nums1[i]);
                i++;
            }else{
                a.push_back(nums2[j]);
                j++;
            }
        }
        while(i<m){
            a.push_back(nums1[i]);
            i++;
        }
         while(j<n){
            a.push_back(nums2[j]);
            j++;
        }
        int len=a.size();
        if(len%2==0){
           sum=static_cast<double>(a[len/2]+a[len/2-1])/2;
        }else{
           sum=static_cast<double>(a[len/2]);
        }
        return sum;
    }
};