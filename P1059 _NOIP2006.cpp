# 明明想在学校中请一些同学一起做一项问卷调查，为了实验的客观性，他先用计算机生成了 N 个 1 到 1000 之间的随机整数 (N≤100)，对于其中重复的数字，只保留一个，把其余相同的数去掉，
#不同的数对应着不同的学生的学号。然后再把这些数从小到大排序，按照排好的顺序去找同学做调查。请你协助明明完成“去重”与“排序”的工作。
#代码如下：
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
	int quan;
	cin>>quan;
	vector<int> num;
	vector<int> latest;
	for(int i = 0; i < quan; i++)
	{
		int N;
		cin>>N;
		num.push_back(N);
	}
	sort(num.begin(), num.end());
	for(int o = 0; o < quan; o++)
	{
		if(num[o] == num[o+1])
		{
			num[o] = 0;
		}
	}
	int cal = 0;
	for(int k = 0; k < quan; k++)
	{
		if(num[k] != 0)
		{
			cal ++;
			latest.push_back(num[k]);
		}
	}
	cout<<cal<<endl;
	for(int j = 0; j < latest.size(); j++)
	{
		cout<<latest[j]<<' ';
	}
	
	
	
	
	return 0;
} 
# 暴力方法使用很多个for循环。
# 可以使用桶算法，创建一个有1000个默认值（0）的数组a，当有数据传入，将a中对应索引值的0更改为1，事后统计有多少个1，并且保存他们的索引值到一个新的数组，并且输出这个数组
# 代码如下
