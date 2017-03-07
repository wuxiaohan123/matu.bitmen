/*

5.11 比较两个字符串是否相等
题 号:	113	5.11 比较两个字符串是否相等	语言要求：	C++
编写程序，输入两个字符串，比较他们是否相等。
输入输出格式要求：
输入格式：string1回车string2回车
string1和string2最长为256，可能包含空格

例如：
输入：string1回车string2回车
输出：unequal
输入：string1回车string1回车
输出：equal

*/

#include<stdio.h>
int main()
{
	char string0[255] = { 0 };	//初始化
	char string1[255] = { 0 };

	gets_s(string0, 255);
	gets_s(string1, 255);

	int i;
	for (i = 0; i < 255; i++)
		string0[i] -= string1[i];	//比较两数组每个元素的值，存入string0
	for(i = 0; i < 255;i++)
		if (string0[i])				//判断两个元素是否相等（包括已被初始化的空白部分）
		{
			printf("unequal\n");
			return 0;
		}
	printf("equal\n");
	
	return 0;
}