class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int>nums;
        int i=0,j=0,m=nums1.size(),n=nums2.size();
        while(i<m&&j<n){
            if(nums1[i]<nums2[j]){
                nums.push_back(nums1[i]);
                i++;
            }
            else{
                nums.push_back(nums2[j]);
                j++;
            }
        }
        while(i<m){
            nums.push_back(nums1[i]);
            i++;
        }
        while(j<n){
            nums.push_back(nums2[j]);
            j++;
        }
        int p=nums.size();
        int mid=p/2;
        if(p%2!=0){
            return (double)nums[mid];
        }
        else{
           if(mid>0){
                double med=(nums[mid]/2.0)+(nums[mid-1])/2.0;
                return med;
            }
            else return 0;
        }
        return 0;
    }
};