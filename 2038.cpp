// 2038. Remove Colored Pieces if Both Neighbors are the Same Color

class Solution {
public:
    bool winnerOfGame(string colors) {
        int a=0,b=0;
        int n=colors.size();
        for (int i=1;i<n-1;i++){
            if (colors[i]=='A'  && colors[i-1]=='A' && colors[i+1]=='A' ) a++;
            else if (colors[i]=='B' && colors[i-1]=='B' && colors[i+1]=='B') b++;
        }
        return (a>b);
    }
};