///week04-2bad.cpp 對的,用進階c++迴圈
///在codeblocks會出錯,warning:range-based for
///2011年後,只有在-std=+11或-std=gnu++11才能用
///所以需要改設定
#include <iostream>
#include <vector>
using namespace std;

int main()
{
	vector<int> a;
	int now;
	for(int i=0;i<20;i++){
		cin>>now;
		if (now==0)break;
		a.push_back(now);
	}
	cin>>now;
	int ans=0;
	for(int num : a){ ///在codeblocks設定出錯時,永遠跑不出答案
		if(num==now)ans++;
	}
	printf("%d\n",ans);
}
