/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is higher than the picked number
 *			      1 if num is lower than the picked number
 *               otherwise return 0
 * int guess(int num);
 */
#define GOAT  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
class Solution {
public:
    int guessNumber(int n) {
        GOAT
        if (n==1)
            return 1;
        int l=1,r=n,m;
        while(l<r){
            m=l+(r-l)/2;
            if(guess(m)==0)
                return m;
            else if (guess(m)==1)
                l=m+1;
            else
                r=m;
        }
        return l;
    }
};