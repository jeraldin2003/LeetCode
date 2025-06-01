class Solution {
public:
    bool isAnagram(string s, string t) {


       if(s.length() != t.length()){
        return false;
       }
       multiset <char> h;
       for(auto x : s){
        h.insert(x);
       }
       for(auto x : t){
        auto it = h.find(x);
        if(it != h.end()){
            h.erase(it);
        }
        else if(h.find(x) == h.end()){
            return false;
        }
       }
       return true;
    }
};