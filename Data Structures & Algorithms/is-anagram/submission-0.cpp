class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length()!= t.length()){
            return false;
        }
        unordered_map<char,int> mapt;
        unordered_map<char,int> maps;
        for(int i = 0;i<s.length();i++){
            mapt[t[i]]++;
            maps[s[i]]++;
        }
        if(mapt==maps){
            return true;
        }
        else{
            return false;
        }
    }
};
