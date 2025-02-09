class Solution {
public:
    int majorityElement(vector<int>& nums) {
    int n=nums.size();
    int frequency=0,answer;
      for(int i=0;i<n;i++){
        if(frequency==0){
            answer=nums[i];
        }
        if(answer==nums[i]){
            frequency++;
        }
        else{
            frequency--;
        }
      }
    return answer;
    }
};