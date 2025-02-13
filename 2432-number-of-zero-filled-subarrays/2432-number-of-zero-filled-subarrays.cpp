class Solution {
public:
    long long zeroFilledSubarray(vector<int>& nums) {
        int n= nums.size();
        long long count=0;
        long long subarray=0;
        for(int i=0;i<n;i++){
            if(nums[i]==0){
                count=count+1;
            }

            else{
                subarray+=(count*(count+1))/2;
                count=0;
            }
        }
        if(count>0){
            subarray+=(count*(count+1))/2;
        }
   return subarray;}
};