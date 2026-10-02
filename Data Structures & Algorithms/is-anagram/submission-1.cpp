class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length()!= t.length()){
            return false;
        }
        int hash_tableS[26] = {0};
        int hash_tableT[26] = {0};
        for(int i = 0;i<s.length();i++){
            hash_tableS[s[i]-'a']++;
            hash_tableT[t[i]-'a']++;
        }
        for(int i = 0;i<26;i++){
            if(hash_tableS[i]!=hash_tableT[i]){
                return false;
            }
            
            
        }
        return true;
        
    }
};
