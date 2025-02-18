#include <bits/stdc++.h> //in this we utilized and vector of vector suppose             [1] : [1.1] [1.2] [1.3]
class Solution {                      ////                                              [2] : [2.1] [2.2] [2.3]
public:                                                                                 //here we can see a 2d array where elements in array is a corrsponding array
    vector<vector<string>> groupAnagrams(vector<string>& strs) {                        //auto x : strs iterates through strs and x is each element that it iterates through
        unordered_map<string,vector<string>> mp;                                        //we sort each string in strs one by one. Now we push the original string to the 
        for(auto x : strs){                                                                //corresponding sorted string inside the mp map.
            string word = x;                                                            // for ex 1 we get                                                     
            sort(word.begin(),word.end());                                              // aet  - {eat,tea ,ate}                                               
            mp[word].push_back(x);                                                      //after compeleting we iterate through the map mp and push the values of each keys.
        }
        vector<vector<string>> ans;
        for(auto x : mp){
            ans.push_back(x.second);
        }
        return ans;
    }
};