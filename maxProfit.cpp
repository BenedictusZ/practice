#include <iostream>
#include <string>
using namespace std;

//TODO 股票最大利益问题 num:121
/*//给定一个数组，它的第i个元素是一支给定股票第i天的价格。
//如果你最多只允许完成一笔交易（即买入和卖出一支股票），设计一个算法来计算你所能获取的最大利润。
//注意你不能在买入股票前卖出股票。
//输入: [7,1,5,3,6,4]
//输出: 5
//解释: 在第 2 天（股票价格 = 1）的时候买入，在第 5 天（股票价格 = 6）的时候卖出，最大利润 = 6-1 = 5 。
//注意利润不能是 7-1 = 6, 因为卖出价格需要大于买入价格。
int maxProfit(int* prices, int pricesSize){
	int max = 0;
	int b = 0;
	for (int i = 0; i<pricesSize - 1; i++)
	{
		int a = prices[i + 1] - prices[i];
		b += a;     //计算前几天内最大收益
		if (b<0)
		{
			b = 0;
		}
		if (b>max)
		{
			max = b;
		}
	}
	return max;
}

int main() {
	int num[]={7,1,5,3,6,4};
	int size=6;
	cout<<maxProfit(num,6)<<endl;
	return 0;
}*/

//TODO 宝石与石头 num:771
/*//给定字符串J代表石头中宝石的类型,和字符串S代表你拥有的石头。S中每个字符代表了一种你拥有的石头的类型，你想知道你拥有的石头中有多少是宝石。
//J中的字母不重复，J和S中的所有字符都是字母。字母区分大小写，因此"a"和"A"是不同类型的石头。

//输入: J = "aA", S = "aAAbbbb"
//输出: 3
class Solution {
public:
	int numJewelsInStones(string J, string S) {
		int times=0;
		for(int i=0;i<J.size();i++){
			for(int k=0;k<S.size();k++){
				if(J[i]==S[k]){
					times++;}
			}
		}
		return times;
	}
};

int main(){
	char a[]={"aA"};
	char b[]={"aAAbbbb"};
	Solution s;
	cout<<s.numJewelsInStones(a,b)<<endl;
}*/

//TODO IP地址无效化
/*//给你一个有效的 IPv4 地址 address，返回这个 IP 地址的无效化版本。
//所谓无效化 IP 地址，其实就是用 "[.]" 代替了每个 "."。
//输入：address = "1.1.1.1"
//输出："1[.]1[.]1[.]1"
class Solution {
public:
	string defangIPaddr(string address) {
		for(int i = address.size(); i >= 0; i--){
			if(address[i] == '.'){
				address.replace(i, 1, "[.]");
			}
		}
		return address;
	}
};
int main(){
	string address="1.1.1.1";
	Solution s;
	cout<<s.defangIPaddr(address)<<endl;
	return 0;
}*/
