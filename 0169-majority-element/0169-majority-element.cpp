class Solution {
public:
    int majorityElement(vector<int>& nums) {
       int n=nums.size();
       for(int i=0;i<n;i++)
       {    int x=0;
        for(int j=0;j<n;j++)
        {
            if(nums[i]==nums[j])
            {
                x++;
            }
        }
        if((n/2 ) < x){
            return nums[i];
        }
       }
       return 0;
    }
};