//week01-3.cpp 學習計畫 Basic 第三題
//LeetCode 28.Find the Index of the First Occurrence in a String
//大海撈針
class Solution {
public:
    int strStr(string haystack, string needle) {
        //所有的程式題目,都可以用for迴圈if判斷函式呼叫
        int N1=haystack.length(),N2=needle.length();//函式呼叫,字串長度
        for (int i=0;i<=N1-N2;i++){//迴圈
            if(haystack.substr(i,N2)==needle)return i;//找到答案
            //如果大字串的.substr(開始,長度)等於小字串,就找到答案
        }
      return-1;//找不到
    }
};
