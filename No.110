/*

4.7 学生管理系统
题 号:	110	4.7 学生管理系统	语言要求：	C++
编写学生管理系统，其中学生的信息有姓名（汉语拼音，最多20个字符），性别（男/女，用1表示男，0表示女）、
生日（19850101（年月日））、身高（以m为单位），还需要处理C语言、微积分两门课的成绩，请编写程序实现功能：
输入学生的人数和每个学生的信息；输出每门课程的总平均成绩、最高分和最低分，以及获得最高分的学生的信息。
需要注意的是某门课程最高分的学生可能不只一人。

输入输出格式要求：
身高输出时保留两位小数，请按照例子中进行输出，请勿输出其他字符
例如：
输入：3 zhangsan 1 19910101 1.85 85 90 lisi 1 19920202 1.56 89 88 wangwu 2 19910303 1.6 89 90回车
输出：
C_average:87回车
C_max:89回车
lisi 1 19920202 1.56 89 88回车
wangwu 2 19910303 1.60 89 90回车
C_min:85回车
Calculus_average:89回车
Calculus_max:90回车
zhangsan 1 19910101 1.85 85 90回车
wangwu 2 19910303 1.60 89 90回车
Calculus_min:88回车

*/
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
	struct student
	{
		char name[20];
		int sex;
		char birthday[9];
		double height;
		int C;
		int calculus;
	};
	
	int num;	//学生人数
	int i;	//计数器
	scanf("%d", &num);

	if (num < 0)
		exit(1);
	student *stu = (student*)(malloc(sizeof(student)*num));	//动态分配内存

	for (i = 0; i < num; i++)	//分别输入信息
	{
		scanf("%s", &stu[i].name);
		scanf("%d", &stu[i].sex);
		scanf("%s", &stu[i].birthday);
		scanf("%lf", &stu[i].height);
		scanf("%d", &stu[i].C);
		scanf("%d", &stu[i].calculus);
	}

//	for (i = 0; i < num; i++)			//测试语句
//		printf("%s %d %s %.2f %d %d\n", stu[i].name, stu[i].sex, stu[i].birthday, stu[i].height, stu[i].C, stu[i].calculus);

	int C, Calculus;


	/*关于C的成绩的处理*/
	for (i = 0, C = 0; i < num; i++)	//C成绩求和
		C += stu[i].C;
	printf("C_average:%d\n", C/num);

	int C_max;						//查找C的最高成绩
	for (i = 0, C_max = stu[0].C; i < num; i++)
		if (C_max < stu[i].C)
			C_max = stu[i].C;
	printf("C_max:%d\n", C_max);

	for(i=0;i<num;i++)				//输出C最高成绩者
		if(stu[i].C==C_max)
			printf("%s %d %s %.2f %d %d\n", stu[i].name, stu[i].sex, stu[i].birthday, stu[i].height, stu[i].C, stu[i].calculus);

	int C_min;						//查找C的最低成绩
	for (i = 0, C_min = stu[0].C; i < num; i++)
		if (C_min > stu[i].C)
			C_min = stu[i].C;
	printf("C_min:%d\n", C_min);



	/*关于Calculus的成绩的处理*/
	for (i = 0, Calculus = 0; i < num; i++)		//Calculus成绩求和
		Calculus += stu[i].calculus;
	printf("Calculus_average:%d\n", Calculus / num);

	int Calculus_max;							//查找Calculus的最高成绩
	for (i = 0, Calculus_max = stu[0].calculus; i < num; i++)
		if (Calculus_max < stu[i].calculus)
			Calculus_max = stu[i].calculus;
	printf("Calculus_max:%d\n", Calculus_max);

	for (i = 0; i<num; i++)					//输出Calculus最高成绩者
		if (stu[i].calculus == Calculus_max)
			printf("%s %d %s %.2f %d %d\n", stu[i].name, stu[i].sex, stu[i].birthday, stu[i].height, stu[i].C, stu[i].calculus);

	int Calculus_min;							//查找Calculus的最低成绩
	for (i = 0, Calculus_min = stu[0].calculus; i < num; i++)
		if (Calculus_min > stu[i].calculus)
			Calculus_min = stu[i].calculus;
	printf("Calculus_min:%d\n", Calculus_min);


	free(stu);
//	system("pause");
	return 0;
}
