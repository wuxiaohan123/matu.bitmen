/*

题 号:	91	3.8 计算e的x次方	语言要求：	C++
编写程序，计算
	e^x=1+x+(x^2)/(2!)+(x^3)/(3!)+(x^4)/(4!)+...+(x^n)/n!

说明：e^x表示e的x次方，2!表示2的阶乘

输入输出格式要求：
	输入格式：x n回车
	e^x, x, n均用double类型存储。
	要求输出小数点后6位。
	只输出运算结果，请不要输出其他字符，遇到异常情况（如n为负数），输出error
例如：
输入：3 10回车
输出：20.079665
输入：5.24 11回车
输出：187.210665
输入：5 -10
输出：error

*/

#include<stdio.h>
#include<math.h>
#include<stdlib.h>

double jiecheng(int);
double EXP(double, int);

int main()
{
	double x = 0.0;
	int n = 0;

	scanf("%lf %d", &x, &n);
//	printf_s("%f %d\n", x, n);

	if (n < 0)		//n大于等于0，否则退出
	{
		printf("error\n");
		exit(1);
	}
	
	double s = 0.0;
	s = EXP(x, n);
	printf("%f\n", s);
//	system("pause");
	return 0;
}

double jiecheng(int n)	//阶乘函数
{
	if (n == 1)
		return 1;
	else
		return n*jiecheng(n - 1);
}

double EXP(double x, int n)
{
	if (n == 0)
		return 1;
	else
		return pow(x, n) / jiecheng(n) + EXP(x, n - 1);
}
