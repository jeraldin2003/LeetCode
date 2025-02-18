class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int> s_set;
        unordered_map<char,int> t_set;
        int n=s.size();
        if(s.size()!=t.size()){
            return false;
        }
        for(int i=0;i<n;i++){
            s_set[s[i]]++;
            t_set[t[i]]++;
        }
        if(s_set==t_set){
            return true;
        }
        else{
            return false;
        }
        
    }
};