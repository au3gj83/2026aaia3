//week05-2.cpp 學習計畫Built-in Function 第2題
//LeetCode To Lower Case
class Solution {
public:
    string toLowerCase(string s) {
        for(int i=0;i<s.length();i++){
            //以前:if(s[i]>='A' && s[i]<='Z')s[i]=s[i]-'A'+'a';
            //以前if(isupper(s[i]))s[i]=s[i]-'A'+'a';
            s[i]=tolower(s[i]);//前面要記得加#include <cctype> 只是leetcode有內建所以不用
        }
        return s;
    }
};
