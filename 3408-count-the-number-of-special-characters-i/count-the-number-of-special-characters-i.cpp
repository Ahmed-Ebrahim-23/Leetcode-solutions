class Solution {
public:
    int numberOfSpecialChars(string word) {
        map<char,int> m;
        int n=word.length(),cont = 0;
        for(int i=0;i<n;i++){
            if(m[word[i]])
                continue;
            m[word[i]]++;
            if(word[i] >= 'A' && word[i] <= 'Z')
                cont+=m[word[i]-'A'+'a'];
            else
                cont+=m[word[i]+'A'-'a'];
        }
        return cont;
    }
};