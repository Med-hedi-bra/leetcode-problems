class Solution {
public:
    int indexOf(string word, char ch){
        int i=0;
        while(i<word.size() && word[i]!=ch)
        i++;
        if(word[i] == ch)
        return i;
        else 
        return -1;
    }
    string reversePrefix(string word, char ch) {
        
        int index = indexOf(word,ch);
        if(index != -1){
            char aux;
            int i=0;
            while(i < index){
                swap(word[i],word[index]);
                i++;
                index--;
            }
        }
        return word;
    }
};