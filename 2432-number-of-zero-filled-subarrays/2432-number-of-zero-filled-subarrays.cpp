class Solution {
public:        ///////pattern understanding if [0,0,1,0,0,0] for 0,0  2+1 , 0 0 0  3+2+1, for n n(n+)/2 gauss summation for optimal approach you will keep adding count to subarray ie.  1+2 +0 + 1+2+3 =  5+4/1+2+1+2+3 =9
    long long zeroFilledSubarray(vector<int>& nums) {
        int n= nums.size();
        long long count=0;
        long long subarray=0;
        for(int i=0;i<n;i++){
            if(nums[i]==0){
                count=count+1;
                subarray+=count;
            }

            else{
                count=0;
            }
        }
   return subarray;}
};
