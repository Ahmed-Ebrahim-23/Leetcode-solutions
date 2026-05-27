class Solution {
public:
    int numberOfSpecialChars(string word) {
        map<char,int> m;
        map<char,bool> valid;
        for(auto x : word)
            if(x==tolower(x)) 
                valid[x]=1;
        int n=word.length(),cont = 0;
        for(int i=0;i<n;i++){
            m[word[i]]++;
            if(word[i] == tolower(word[i]) && m[toupper(word[i])]>0){
                valid[tolower(word[i])]=0;
                cout << i << " ";
            }
        }
        for(auto x : valid)
            cont += m[toupper(x.first)] && x.second;
        return cont;
    }
};