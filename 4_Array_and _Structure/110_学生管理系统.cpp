// 学生管理系统
#include <stdio.h>
#include <stdlib.h>

// 定义学生
typedef struct student
{
	char name[21];
	int sex;
	int birth;
	double height;
	int c_grade;
	int cal_grade;
} Student;

// 主函数
int main(void)
{
	// 获取学生总人数
	int number;
	scanf_s("%d", &number);

	// 分配学生数组
	Student* students = (Student*)malloc(sizeof(Student) * number);
	if (students == NULL)
		return 0;

	// 读取学生信息
	for (int i = 0; i < number; i++)
	{
		scanf_s("%20s", students[i].name, (unsigned)sizeof(students[i].name));
		scanf_s("%d %d %lf %d %d", &students[i].sex, &students[i].birth, &students[i].height, 
			    &students[i].c_grade, &students[i].cal_grade);
	}

	// 定义课程平均分和最高分最低分(平均分用整形是因为题意要取整)
	int c_ave, cal_ave;
	int c_high = students[0].c_grade;
	int c_low = c_high;
	int cal_high = students[0].cal_grade;
	int cal_low = cal_high;

	// 定义分数总值
	int c_sum = 0;
	int cal_sum = 0;

	// 更新分数极值,计算平均分
	for (int i = 0; i < number; i++)
	{
		// 更新总分
		c_sum += students[i].c_grade;
		cal_sum += students[i].cal_grade;

		// 更新极值
		if (students[i].c_grade > c_high)
			c_high = students[i].c_grade;
		if (students[i].c_grade < c_low)
			c_low = students[i].c_grade;
		if (students[i].cal_grade > cal_high)
			cal_high = students[i].cal_grade;
		if (students[i].cal_grade < cal_low)
			cal_low = students[i].cal_grade;
	}

	// 计算平均分
	c_ave = c_sum / number;
	cal_ave = cal_sum / number;

	// 打印C语言相关部分
	printf("C_average:%d\n", c_ave);
	printf("C_max:%d\n", c_high);

	for (int i = 0; i < number; i++)
	{
		if (students[i].c_grade == c_high)
			printf("%s %d %d %.2lf %d %d\n", students[i].name, students[i].sex, students[i].birth, students[i].height,
				students[i].c_grade, students[i].cal_grade);
	}
	printf("C_min:%d\n", c_low);

	// 打印微积分相关部分
	printf("Calculus_average:%d\n", cal_ave);
	printf("Calculus_max:%d\n", cal_high);
	for (int i = 0; i < number; i++)
	{
		if (students[i].cal_grade == cal_high)
			printf("%s %d %d %.2lf %d %d\n", students[i].name, students[i].sex, students[i].birth, students[i].height,
				students[i].c_grade, students[i].cal_grade);
	}
	printf("Calculus_min:%d\n", cal_low);

	// 释放空间
	free(students);
}