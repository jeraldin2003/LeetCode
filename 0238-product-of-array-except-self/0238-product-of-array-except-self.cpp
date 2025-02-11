class Solution {
public:
    //this code stores the product of leftarray of i suppose i = 2 nums[2]=3 then ans[2]=8? to get this we first calculate product of left side of nums[2], which is 2*1 and right side which is 4. this 2 and 4 is stored in i'th position in left and right array respectively at the end we multiply right arr[i] * left arr[i] which gives ans[i].
    
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