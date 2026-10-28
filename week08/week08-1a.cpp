//week08-1a.cpp 學習計畫 Matrix第一題
//LeetCode 1642.Richest Customer Wealth
class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int ans=0;
        for(vector<int> a : accounts){
            int now=0;
            for(int num : a){
                now+=num;
            }
            ans=max(ans,now);
        }
        return ans;
    }
};
