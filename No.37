/*

题 号:	37	26_删除字符串中连续的重复字符	语言要求：	C++
实现删除字符串中连续的重复字符（除字母和数字）。

输入为字符串，将字符串中连续重复的，非字母和数字的字符删去，然后输出处理后的字符串。
输入字符串最长50个字符，之后截断，只输出处理后的字符串。


例如
输入1+++2==3回车
输出1+2=3

*/

#include<iostream>
#define MAXSIZE 50

bool is_alphabet(char ch);

int main()
{
	char ch[MAXSIZE] = { 0 };
	char temp = 0;
	scanf("%s", ch);

	int i;		//计数器

	for (i = 0; i < MAXSIZE; i++)
	{
		if (is_alphabet(ch[i]))
		{
			printf("%c", ch[i]);
			continue;
		}
		else if (ch[i] == ch[i + 1])
			continue;
		else
		{
			printf("%c", ch[i]);
			continue;
		}
	
	}

//	system("pause");
	return 0;
}

bool is_alphabet(char ch)
{
	if (ch >= 48 && ch <= 57)
		return true;
	else if (ch >= 65 && ch <= 90)
		return true;
	else if (ch >= 97 && ch <= 122)
		return true;
	else
		return false;
}

