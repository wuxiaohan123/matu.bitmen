/*

�� ��:	112	5.9 �ֱ�ͳ����ĸ�����ָ���	����Ҫ��	C++
��д��������һ���ַ������ֱ�ͳ��������ַ����е���ĸ���������ָ�����

���������ʽҪ��
�����ʽ��string�س�
���磺
���룺the day the month the year 123�س�
�����letters:21,digits:3
���룺aaabacad�س�
�����letters:8,digits:0

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