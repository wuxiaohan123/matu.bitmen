/*

6.6 ��5������������С������
�� ��:	119	6.6 ��5������������С������	����Ҫ��	C++
��д���򣬴Ӽ�������5����������Ȼ��������ǵ���С������������ʾ�����
��ͨ�����ö���������������С�������ĺ���ʵ�֣����ο�����ԭ�ͣ�int find(int director, int j))
���������ʽҪ��
��д����int find(int director, int j);����ֵΪdirector��j����С������
��main��������5����������Ȼ�������С������
���磺
���룺2 3 6 9 10�س�
�����90

�㷨��շת�����

*/

#include<stdio.h>

int find(int director, int j);
int main()
{
	int num[5] = { 0 };
	scanf_s("%d%d%d%d%d", &num[0], &num[1], &num[2], &num[3], &num[4]);

	int temp = 1;	//��ʱ����
	int i;
	for (i = 0; i < 5; i++)
		temp = find(num[i], temp);	//ѭ����ÿ��ֵ��ǰ������ֵ����С������
	printf("%d\n", temp);

	return 0;
}

int find(int director, int j)
{
	int multiply = director*j;
	//շת�����
	int c = director%j;
	while (c)
	{
		director = j;
		j = c;
		c = director%j;
	}

	return multiply / j;
}
