// 修改成绩管理系统
#include <stdio.h>
#include <stdlib.h>

// 定义学生结构
typedef struct student
{
	int id;
	char name[50];
	float chinese;
	float math;
	float english;
	float sum;
}student;

// 函数原型
int ReadStuInfoFromFile(char* name, student** stu);
int NoPass(student stu[], int n, student** noPassStudent, int* m);
int Pass(student stu[], int n, student** PassStudent, int* m);
int SortStudents(student stu[], int n);
int SearchStudent(student stu[], int n, int id, int* rank, student* rstu);

// 函数实现
// 输入参数：字符串name是要打开的文件名称。输出参数：stu是读出的学生的详细信息。函数的返回值：学生人数.任何错误返回0
int ReadStuInfoFromFile(char* name, student** stu)
{
	// 错误检查
	if (name == NULL || stu == NULL) // 文件为空/二级指针为空直接返回
		return 0;

	// 打开文件
	FILE* file;
	fopen_s(&file, name, "r");
	if (file == NULL)
		return 0;

	// 先读取总人数
	int n;
	fscanf_s(file, "%d", &n);
	if (n <= 0)
	{
		fclose(file);
		return 0;
	}

	// 一级指针为空可分配
	if (*stu == NULL)
	{
		*stu = (student*)malloc(n * sizeof(student));
		if (*stu == NULL)
			return 0;
	}

	// 逐个读取
	int count = 0;
	while (count != n)
	{
		fread(stu[count], sizeof(student), n, file);
		(*stu[count]).sum = (*stu[count]).chinese + (*stu[count]).math + (*stu[count]).english;
		count++;
	}

	// 关闭文件
	fclose(file);
	return n;
}

// 输入参数：stu是全班学生信息，n是人数。输出参数：3科平均成绩不及格人名单noPassStudent,不及格人数m.操作成功返回0，失败返回-1
int NoPass(student stu[], int n, student** noPassStudent, int* m)
{
	// 错误检查
	if (n <= 0 || noPassStudent == NULL || m == NULL || stu == NULL)
		return -1;
	if (*noPassStudent == NULL)
	{
		*noPassStudent = (student*)malloc(n * sizeof(student));
		if (*noPassStudent == NULL)
			return -1;
	}

	// 遍历全班
	*m = 0;
	for (int i = 0; i < n; i++)
	{
		if (stu[i].sum / 3 < 60)
		{
			*noPassStudent[*m] = stu[i];
			(*m)++;
		}
	}
	return 0;
}

// 输入参数：stu是全班学生信息，n是人数。输出参数：3科平均成绩及格人名单PassStudent,及格人数m.操作成功返回0，失败返回-1
int Pass(student stu[], int n, student** PassStudent, int* m)
{
	// 错误检查
	if (n <= 0 || PassStudent == NULL || m == NULL || stu == NULL)
		return -1;

	if (*PassStudent == NULL)
	{
		*PassStudent = (student*)malloc(n * sizeof(student));
		if (*PassStudent == NULL)
			return -1;
	}

	// 遍历全班
	*m = 0;
	for (int i = 0; i < n; i++)
	{
		if (stu[i].sum / 3 >= 60)
		{
			*PassStudent[*m] = stu[i];
			(*m)++;
		}
	}
	return 0;
}

// 输入参数：stu是全班学生信息，n是人数。输出参数：按照总分/平均分排序后的结果也存储在stu中.操作成功返回0，失败返回-1
int SortStudents(student stu[], int n)
{
	// 错误检查
	if (n <= 0 || stu == NULL)
		return -1;

	// 排序
	int index = n - 1;
	while (index)
	{
		int change = 0;
		for (int i = 0; i < index; i++)
		{
			if (stu[i].sum < stu[i + 1].sum)
			{
				student tmp = stu[i];
				stu[i] = stu[i + 1];
				stu[i + 1] = tmp;
				change = i;
			}
		}
		index = change;
	}
	return 0;
}

// 输入参数：stu是全班学生信息，n是人数,id是待查找的学号。输出参数：rank是在班上的排名；stu是这个学生的详细信息。返回值：查找成功返回0，失败返回-1
int SearchStudent(student stu[], int n, int id, int* rank, student* rstu)
{
	// 错误检查
	if (stu == NULL || n <= 0 || rank == NULL || rstu == NULL)
		return -1;

	// 循环遍历
	for (int i = 0; i < n; i++)
	{
		if (stu[i].id == id)
		{
			*rstu = stu[i];
			*rank = i + 1;
			return 0;
		}
	}
	return -1;
}