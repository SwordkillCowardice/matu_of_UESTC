// ѧ������ϵͳ
#include <stdio.h>
#include <stdlib.h>

// ����ѧ��
typedef struct student
{
	char name[21];
	int sex;
	int birth;
	double height;
	int c_grade;
	int cal_grade;
} Student;

// ������
int main(void)
{
	// ��ȡѧ��������
	int number;
	scanf_s("%d", &number);

	// ����ѧ������
	Student* students = (Student*)malloc(sizeof(Student) * number);
	if (students == NULL)
		return 0;

	// ��ȡѧ����Ϣ
	for (int i = 0; i < number; i++)
	{
		scanf_s("%20s", students[i].name, (unsigned)sizeof(students[i].name));
		scanf_s("%d %d %lf %d %d", &students[i].sex, &students[i].birth, &students[i].height, 
			    &students[i].c_grade, &students[i].cal_grade);
	}

	// ����γ�ƽ���ֺ���߷���ͷ�(ƽ��������������Ϊ����Ҫȡ��)
	int c_ave, cal_ave;
	int c_high = students[0].c_grade;
	int c_low = c_high;
	int cal_high = students[0].cal_grade;
	int cal_low = cal_high;

	// ���������ֵ
	int c_sum = 0;
	int cal_sum = 0;

	// ���·�����ֵ,����ƽ����
	for (int i = 0; i < number; i++)
	{
		// �����ܷ�
		c_sum += students[i].c_grade;
		cal_sum += students[i].cal_grade;

		// ���¼�ֵ
		if (students[i].c_grade > c_high)
			c_high = students[i].c_grade;
		if (students[i].c_grade < c_low)
			c_low = students[i].c_grade;
		if (students[i].cal_grade > cal_high)
			cal_high = students[i].cal_grade;
		if (students[i].cal_grade < cal_low)
			cal_low = students[i].cal_grade;
	}

	// ����ƽ����
	c_ave = c_sum / number;
	cal_ave = cal_sum / number;

	// ��ӡC������ز���
	printf("C_average:%d\n", c_ave);
	printf("C_max:%d\n", c_high);

	for (int i = 0; i < number; i++)
	{
		if (students[i].c_grade == c_high)
			printf("%s %d %d %.2lf %d %d\n", students[i].name, students[i].sex, students[i].birth, students[i].height,
				students[i].c_grade, students[i].cal_grade);
	}
	printf("C_min:%d\n", c_low);

	// ��ӡ΢������ز���
	printf("Calculus_average:%d\n", cal_ave);
	printf("Calculus_max:%d\n", cal_high);
	for (int i = 0; i < number; i++)
	{
		if (students[i].cal_grade == cal_high)
			printf("%s %d %d %.2lf %d %d\n", students[i].name, students[i].sex, students[i].birth, students[i].height,
				students[i].c_grade, students[i].cal_grade);
	}
	printf("Calculus_min:%d\n", cal_low);

	// �ͷſռ�
	free(students);
}