//week08-1b.cpp 學習計畫 Matrix第一題
//LeetCode 1642.Richest Customer Wealth
class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int M=accounts.size(),N=accounts[0].size();
        int ans=0;
        for(int i=0;i<M;i++){
            int now=0;
            for(int j=0;j<N;j++){
                now+= accounts[i][j];
            }
            if(now>ans) ans=now;
        }
        return ans;
    }
};
