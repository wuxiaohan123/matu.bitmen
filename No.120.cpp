/*

6.7 ��д��������걸����������Լ��
�� ��:	120	6.7 ��д��������걸����������Լ��	����Ҫ��	C++
���һ������������������Լ�����������������⣩�ĺͣ���Ϊ�걸����
�磺6������Լ����1��2��3������1+2+3=6.���30000���ڵ������걸��������ʾ�����
�����걸���ú���ʵ�֣����ο�����ԭ�ͣ�void find(int j)��ֱ���ں��������С�ڵ���j���걸����������Լ����
���������ʽҪ��
��д����void find(int j);ֱ���ں��������С�ڵ���j���걸����������Լ��
�����ʽ��
�걸��=Լ��+Լ��+Լ��...�س�
��Լ����С����
���磺
find(40);
�����
6=1+2+3�س�
28=1+2+4+7+14�س�

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

void find(int j)		//�ҳ�j���ڵ��걸���������
{
	int i;
	for (i = 2; i <= j; i++)
		is_perfect(i);
}

void is_perfect(int j)			//�ж�j�Ƿ����걸���������������ӷ�ʽ
{
	int stack[MAXSIZE] = { 0 };	//�洢Լ��������
	int num = 0;				//������
	int i;						//��ʱ��������
	int sum = 1;

	for (i = 2; i < j; i++)		//����2~j��ÿһ�������ж����Ƿ�Ϊj��Լ��
	{
		if (j%i)
			continue;
		else
			stack[num++] = i;

		if (num > MAXSIZE)		//��ֹ����Խ��
			exit(1);
	}

	for (i = 0; i < MAXSIZE; i++)	//������Լ�����
		sum += stack[i];

	if (sum == j)	//�ж�j��Լ��֮���Ƿ��������
	{
		printf("%d=1", j);
		i = 0;
		while (stack[i] != 0)
			printf("+%d", stack[i++]);
		printf("\n");
	}
}