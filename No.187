/*
C3-3_百钱百鸡
题 号:	187	C3-3_百钱百鸡	语言要求：	C++
一只公鸡值5钱，
一只母鸡值3钱，
三只小鸡值1钱，
现在用百钱买百鸡，
请问公鸡、母鸡、小鸡各多少只？
输出结果a,b,c,d,e,f.....
(a,d...对应公鸡数量,b,e...对应母鸡数量,c,f...对应小鸡数量)

规划问题，
5x+3y+z/3=100
x+y+z=100
解得：7x+4y=100

*/
#include<stdio.h>
#define MAXSIZE 4

int main()
{
	int x, y;
	int ans[MAXSIZE][3] = { 0 };
	int i = 0;


	for (x = 0; x <= 20; x++)		//遍历x和y，找到满足7x+4y=100的x和y
		for (y = 0; y <= 33; y++)
			if (7 * x + 4 * y == 100)
			{
				ans[i][0] = x;
				ans[i][1] = y;
				i++;
			}

	for (i = 0; i < MAXSIZE; i++)	//由x和y算出z
		if (ans[i][0] != 0 || ans[i][1] != 0)
			ans[i][2] = 100 - ans[i][1] - ans[i][0];
	
	for (i = 0; i < MAXSIZE; i++)
		if (ans[i][0] * 15 + ans[i][1] * 9 + ans[i][2] == 300)
			printf("%d,%d,%d,", ans[i][0], ans[i][1], ans[i][2]);

	getchar();
	return 0;
}

/*测试语句
	for (i = 0; i<MAXSIZE; i++)
		printf("%d,%d,%d,", ans[MAXSIZE][0], ans[MAXSIZE][1], ans[MAXSIZE][2]);
*/
