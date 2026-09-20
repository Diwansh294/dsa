class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.size()!=t.size()){
            return false;
        }
        unordered_map<char,int>k;
        for(auto c:s){
            k[c]++;
        }
        for(auto c:t){
            k[c]--;
            if(k[c]<0){
                return false;
            }
        }
        return true;
    }
};