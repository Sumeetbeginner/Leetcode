class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        
        int size = nums1.size() + nums2.size();
        int mergedArr[size];

        int ptr1 = 0;
        int ptr2 = 0;
        int ptr3 = 0;

        while(ptr1 != nums1.size() || ptr2 != nums2.size()){

            if(ptr1 >= nums1.size()){
                mergedArr[ptr3] = nums2[ptr2];
                ptr2++;
                ptr3++;
            }
            else if(ptr2 >= nums2.size()){

                mergedArr[ptr3] = nums1[ptr1];
                ptr1++;
                ptr3++;
            }
            else if(nums1[ptr1] <= nums2[ptr2]){
                mergedArr[ptr3] = nums1[ptr1];
                ptr3++;
                ptr1++;
            }
            else{
                mergedArr[ptr3] = nums2[ptr2];
                ptr2++;
                ptr3++;
            }

        }

        int median = size/2;

        if(size % 2 == 0){
            return (mergedArr[median] + mergedArr[median-1])/2.0;
        }
        else{
            return mergedArr[median];
        }
    }
};