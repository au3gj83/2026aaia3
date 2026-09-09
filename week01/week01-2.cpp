//week01-2.cpp
#include <iostream>///c++的輸入輸出,功能強
int main()
{
	int N;
	std::cin>>N;///c++輸入資料 標準::輸入送到右邊N
	int b=N,ans=0;
	while (N>0){
		ans=ans*10+N%10;
		N=N/10;
	}
	std::cout<<b<<"+"<<ans<<"="<<b+ans<<"\n";
	///c++輸入資料,將右邊的整數,依序送到左邊 送出
	//std::cout<<b<<"+"<<ans<<"="<<b+ans<<std::endl;
	//std::cout<<b<<ans<<b+ans;(wrong-answer)
	///上面鏤了"+"和"="以及跳行
}
