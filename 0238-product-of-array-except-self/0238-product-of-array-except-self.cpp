class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> ansarr(n);
        vector<int> leftarr(n);
        vector<int> rightarr(n);
        leftarr[0]=1;
        for(int i=1;i<n;i++){
            leftarr[i]=leftarr[i-1]*nums[i-1];
        }
        rightarr[n-1]=1;
        for(int i=n-2;i>=0;i--){
            rightarr[i]=rightarr[i+1]*nums[i+1];
        }
        for(int i=0;i<n;i++){
            ansarr[i]=rightarr[i]*leftarr[i];
        }
        return ansarr;
    }
};