//week03-1.cpp 學習計畫 Basic 第8題
//LeetCode 1822. Sign of the Product of an Array
//給C++的陣列nums,把所有的數乘起來,正的1,婦的-1,剩下都0
class Solution {
public:
    int arraySign(vector<int>& nums) {
        int N=nums.size();//陣列的.size大小
        int neg=0;
        for(int num : nums){
            if(num==0)return 0;
            if(num<0)neg++;
        }
        if(neg%2==0)return 1;
        return -1;
        //int ans=1;//迴圈旗面ans是1方便繼續乘
        //for(int i=0;i<N;i++){//迴圈nums[i]逐一乘起來
        //    ans=ans*nums[i];
        //}
        //if(ans>0)return 1;
        //if(ans<0)return -1;
        //return 0;
    }
};
