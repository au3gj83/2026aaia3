    //week10-2b.cpp 學習計畫 Math 第1題
class Solution {
public:
    int countOdds(int low, int high) {
       int ans=(high - low)/2;
       if(low%2==1 || high%2==1) ans++;
       return ans;
    }
};
