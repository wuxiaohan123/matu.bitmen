/*

6.7 编写函数输出完备数及其所有约数
题 号:	120	6.7 编写函数输出完备数及其所有约数	语言要求：	C++
如果一个数正好是他的所有约数（除了它本身以外）的和，称为完备数，
如：6，它的约数有1，2，3，并且1+2+3=6.求出30000以内的所有完备数，并显示输出。
（求完备数用函数实现）（参考函数原型：void find(int j)，直接在函数中输出小于等于j的完备数及其所有约数）
输入输出格式要求：
编写函数void find(int j);直接在函数中输出小于等于j的完备数及其所有约数
输出格式：
完备数=约数+约数+约数...回车
（约数从小到大）
例如：
find(40);
输出：
6=1+2+3回车
28=1+2+4+7+14回车

*/

#include<stdio.h>
#include<stdlib.h>
#define MAXSIZE 100

void find(int j);
void is_perfect(int j);

int main()
{
	find(30000);

	return 0;
}

void find(int j)		//找出j以内的完备数，并输出
{
	int i;
	for (i = 2; i <= j; i++)
		is_perfect(i);
}

void is_perfect(int j)			//判断j是否是完备数，如果是则输出加法式
{
	int stack[MAXSIZE] = { 0 };	//存储约数的数组
	int num = 0;				//计数器
	int i;						//临时计数变量
	int sum = 1;

	for (i = 2; i < j; i++)		//遍历2~j的每一个数，判断其是否为j的约数
	{
		if (j%i)
			continue;
		else
			stack[num++] = i;

		if (num > MAXSIZE)		//防止数组越界
			exit(1);
	}

	for (i = 0; i < MAXSIZE; i++)	//对所有约数求和
		sum += stack[i];

	if (sum == j)	//判断j的约数之和是否等于自身
	{
		printf("%d=1", j);
		i = 0;
		while (stack[i] != 0)
			printf("+%d", stack[i++]);
		printf("\n");
	}
}