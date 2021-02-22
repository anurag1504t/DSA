/*
  Given a positive integer N, print count of set bits in it. 
*/

class Solution {
  public:
    int setBits(int N) {
        int ans = 0;
        while(N)
        {
            ans += N%2;
            N/=2;
        }
        return ans;
    }
};
