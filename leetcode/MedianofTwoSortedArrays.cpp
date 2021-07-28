class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> nums;
        if(nums1.size() == 0)
    {
        nums = nums2;
    }
    else if (nums2.size() == 0)
    {
        nums = nums1;
    }
    else
    {
        int i = 0 ;
        int j = 0 ;
        while(i <= nums1.size() && j <= nums2.size())
        {
            if(i == nums1.size() && j == nums2.size() )
            {
                break;
            }
            if(i >= nums1.size())
            {
                while(j < nums2.size())
                {
                    nums.push_back(nums2[j]);
                    j++;
                }
            }
            
            else if (j >= nums2.size())
            {
                while(i < nums1.size())
                {
                    nums.push_back(nums1[i]);
                    i++;
                }
            }
            else
            {
               if(nums1[i] < nums2[j])
                 {
                   nums.push_back(nums1[i]);
                   i++;
                 }
               else
                  {
                    nums.push_back(nums2[j]);
                    j++;
                  } 
            }
            
            
        }
    }
    
    if(nums.size() % 2 == 0)
    {
        double median =  (static_cast<double>(nums[nums.size() / 2]) + static_cast<double>(nums[nums.size() / 2 - 1]) ) / 2;
        return median;
    }
    else
    {
        double median =  nums[nums.size() / 2];
        return median;
    }
    }
};
