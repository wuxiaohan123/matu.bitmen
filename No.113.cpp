/*

5.11 �Ƚ������ַ����Ƿ����
�� ��:	113	5.11 �Ƚ������ַ����Ƿ����	����Ҫ��	C++
��д�������������ַ������Ƚ������Ƿ���ȡ�
���������ʽҪ��
�����ʽ��string1�س�string2�س�
string1��string2�Ϊ256�����ܰ����ո�

���磺
���룺string1�س�string2�س�
�����unequal
���룺string1�س�string1�س�
�����equal

*/

#include<stdio.h>
int main()
{
	char string0[255] = { 0 };	//��ʼ��
	char string1[255] = { 0 };

	gets_s(string0, 255);
	gets_s(string1, 255);

	int i;
	for (i = 0; i < 255; i++)
		string0[i] -= string1[i];	//�Ƚ�������ÿ��Ԫ�ص�ֵ������string0
	for(i = 0; i < 255;i++)
		if (string0[i])				//�ж�����Ԫ���Ƿ���ȣ������ѱ���ʼ���Ŀհײ��֣�
		{
			printf("unequal\n");
			return 0;
		}
	printf("equal\n");
	
	return 0;
}