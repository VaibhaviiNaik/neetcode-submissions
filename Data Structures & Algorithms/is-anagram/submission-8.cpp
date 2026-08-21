//array -> 1->26
//count the number of ch in each string if they match its an anagram 
class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length()!= t.length()){
        return false;
}
    vector<int> alpha(26,0);
    for(int ch = 0; ch< s.length(); ch++){
        alpha[s[ch]-'a']++;
        alpha[t[ch]-'a']--;
    }
    for(int c:alpha){
        if(c!= 0){
        return false;
        }
    }
    return true;
    }
};
