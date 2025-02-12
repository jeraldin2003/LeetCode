class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int n=nums.size();
        int x=0;
        vector<int> arr;
        for(int i=0;i<n;i++){
            if(nums[i]!=val){
                arr.push_back(nums[i]);
                x++;
            }
        }
        for(int i=0;i<x;i++){
            nums[i]=arr[i];
        }
    return x;
    }
};