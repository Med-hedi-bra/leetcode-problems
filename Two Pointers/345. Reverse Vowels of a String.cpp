class Solution {
public:
    bool isVowel(char c){
        set<char> v = {'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'};
        return v.find(c) != v.end();
    }
    string reverseVowels(string s) {
        int i=0, j=s.size()-1;
        while(i<j){
            if(isVowel(s[i]) && isVowel(s[j])){
                swap(s[i],s[j]);
                i++;
                j--;
            }
            if(!isVowel(s[i])){
                i++;
            }
            if(!isVowel(s[j])){
                j--;
            }
            
        }
        return s;
        
    }
};