//week10-2a.cpp 學習計畫 Math 第1題
class Solution {
public:
    int countOdds(int low, int high) {
        int ans=0;
        for(int i=low;i<=high;i++){
            if(i%2==1) ans++;
        }
        return ans;
    }
};
