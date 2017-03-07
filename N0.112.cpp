/*

题 号:	112	5.9 分别统计字母和数字个数	语言要求：	C++
编写程序，输入一个字符串，分别统计输出该字符串中的字母个数和数字个数。

输入输出格式要求：
输入格式：string回车
例如：
输入：the day the month the year 123回车
输出：letters:21,digits:3
输入：aaabacad回车
输出：letters:8,digits:0

*/

#include<stdio.h>

bool is_letters(char);
bool is_digits(char);

int main()
{
	char string[50] = { 0 };
	gets(string);

	int letters = 0 ;
	int digits = 0;

	int i = 0;
	while (i<50)
	{
		if (is_letters(string[i]))
			letters++;
		if (is_digits(string[i]))
			digits++;
		i++;
	}
	printf("letters:%d,digits:%d\n", letters, digits);
	
	return 0;
}

bool is_letters(char ch)
{
	
	if (ch >= 65 && ch <= 90)
		return true;
	else if (ch >= 97 && ch <= 122)
		return true;
	else
		return false;
}

bool is_digits(char ch)
{
	if (ch >= 48 && ch <= 57)
		return true;
	else 
		return false;
}