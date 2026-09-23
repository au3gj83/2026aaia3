//week03-2.cpp 學習計畫 Basic 第六題
//LeetCode 283. Move Zeroes
//把0一道右邊,等於不是0放左邊
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int k=0;//目標放在哪裡nums[k]
        for(int num : nums){//C++進階for迴圈
            if(num !=0){//把數字放左邊
            nums[k]=num;//把數字放左邊
            k++;//換下一格
            }
        }
        //把剩的都變0
        for(int i=k;i<nums.size();i++){
        nums[i]=0;
        }
    }
};
