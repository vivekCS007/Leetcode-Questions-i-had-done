// 3403. Find the Lexicographically Largest String From the Box I

class Solution {
public:
    string answerString(string word, int numFriends) {
        if (numFriends==1) return word;
        int s = word.size() - numFriends + 1;
        int ma = 0;
        for (int i = 0; i < word.size(); i++) {
            if (word[i] > word[ma]) ma = i;
        }
        char a=word[ma];
        string ans,man="";
        for (int i = 0; i <word.size(); i++) {
            if (word[i]==a){
                if (word.size()-i>=s){
                    ans=word.substr(i,s);
                    man=max(ans,man);
                }
                else{
                    ans=word.substr(i);
                    man=max(ans,man);
                }

            } 
        }
        return man;
    }
};
