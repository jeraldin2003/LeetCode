class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n= nums.size();
        int arr=nums[0];
        int arrpoint=0;
        for(int i=0;i<n;i++){
            if(nums[i]!=arr){
                nums[arrpoint+1]=nums[i];
                arrpoint++;
                arr=nums[i];
            }
      }
      return(arrpoint+1);
    }
};