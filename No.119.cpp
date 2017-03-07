/*

6.6 求5个正整数的最小公倍数
题 号:	119	6.6 求5个正整数的最小公倍数	语言要求：	C++
编写程序，从键盘输入5个正整数，然后求出它们的最小公倍数，并显示输出。
（通过调用对两个正整数求最小公倍数的函数实现）（参考函数原型：int find(int director, int j))
输入输出格式要求：
编写函数int find(int director, int j);返回值为director和j的最小公倍数
在main函数接收5个正整数，然后输出最小公倍数
例如：
输入：2 3 6 9 10回车
输出：90

算法：辗转相除法

*/

#include<stdio.h>

int find(int director, int j);
int main()
{
	int num[5] = { 0 };
	scanf_s("%d%d%d%d%d", &num[0], &num[1], &num[2], &num[3], &num[4]);

	int temp = 1;	//临时变量
	int i;
	for (i = 0; i < 5; i++)
		temp = find(num[i], temp);	//循环求每个值与前面所有值的最小公倍数
	printf("%d\n", temp);

	return 0;
}

int find(int director, int j)
{
	int multiply = director*j;
	//辗转相除法
	int c = director%j;
	while (c)
	{
		director = j;
		j = c;
		c = director%j;
	}

	return multiply / j;
}
