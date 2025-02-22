class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map <int,int> kmap;
        int n = nums.size();
        for(int i=0;i<n;i++){
            kmap[nums[i]]++;
        }
    priority_queue<pair<int,int>>maxh;
    for(auto x : kmap){
        maxh.push({x.second, x.first});
        }
    vector<int> ans;
    while(k>0){
        k--;
        ans.push_back(maxh.top().second);
        maxh.pop();
    }
    
return ans;}
   
};