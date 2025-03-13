// �޸ĳɼ�����ϵͳ
#include <stdio.h>
#include <stdlib.h>

// ����ѧ���ṹ
typedef struct student
{
	int id;
	char name[50];
	float chinese;
	float math;
	float english;
	float sum;
}student;

// ����ԭ��
int ReadStuInfoFromFile(char* name, student** stu);
int NoPass(student stu[], int n, student** noPassStudent, int* m);
int Pass(student stu[], int n, student** PassStudent, int* m);
int SortStudents(student stu[], int n);
int SearchStudent(student stu[], int n, int id, int* rank, student* rstu);

// ����ʵ��
// ����������ַ���name��Ҫ�򿪵��ļ����ơ����������stu�Ƕ�����ѧ������ϸ��Ϣ�������ķ���ֵ��ѧ������.�κδ��󷵻�0
int ReadStuInfoFromFile(char* name, student** stu)
{
	// ������
	if (name == NULL || stu == NULL) // �ļ�Ϊ��/����ָ��Ϊ��ֱ�ӷ���
		return 0;

	// ���ļ�
	FILE* file;
	fopen_s(&file, name, "r");
	if (file == NULL)
		return 0;

	// �ȶ�ȡ������
	int n;
	fscanf_s(file, "%d", &n);
	if (n <= 0)
	{
		fclose(file);
		return 0;
	}

	// һ��ָ��Ϊ�տɷ���
	if (*stu == NULL)
	{
		*stu = (student*)malloc(n * sizeof(student));
		if (*stu == NULL)
			return 0;
	}

	// �����ȡ
	int count = 0;
	while (count != n)
	{
		fread(stu[count], sizeof(student), n, file);
		(*stu[count]).sum = (*stu[count]).chinese + (*stu[count]).math + (*stu[count]).english;
		count++;
	}

	// �ر��ļ�
	fclose(file);
	return n;
}

// ���������stu��ȫ��ѧ����Ϣ��n�����������������3��ƽ���ɼ�������������noPassStudent,����������m.�����ɹ�����0��ʧ�ܷ���-1
int NoPass(student stu[], int n, student** noPassStudent, int* m)
{
	// ������
	if (n <= 0 || noPassStudent == NULL || m == NULL || stu == NULL)
		return -1;
	if (*noPassStudent == NULL)
	{
		*noPassStudent = (student*)malloc(n * sizeof(student));
		if (*noPassStudent == NULL)
			return -1;
	}

	// ����ȫ��
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

// ���������stu��ȫ��ѧ����Ϣ��n�����������������3��ƽ���ɼ�����������PassStudent,��������m.�����ɹ�����0��ʧ�ܷ���-1
int Pass(student stu[], int n, student** PassStudent, int* m)
{
	// ������
	if (n <= 0 || PassStudent == NULL || m == NULL || stu == NULL)
		return -1;

	if (*PassStudent == NULL)
	{
		*PassStudent = (student*)malloc(n * sizeof(student));
		if (*PassStudent == NULL)
			return -1;
	}

	// ����ȫ��
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

// ���������stu��ȫ��ѧ����Ϣ��n����������������������ܷ�/ƽ���������Ľ��Ҳ�洢��stu��.�����ɹ�����0��ʧ�ܷ���-1
int SortStudents(student stu[], int n)
{
	// ������
	if (n <= 0 || stu == NULL)
		return -1;

	// ����
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

// ���������stu��ȫ��ѧ����Ϣ��n������,id�Ǵ����ҵ�ѧ�š����������rank���ڰ��ϵ�������stu�����ѧ������ϸ��Ϣ������ֵ�����ҳɹ�����0��ʧ�ܷ���-1
int SearchStudent(student stu[], int n, int id, int* rank, student* rstu)
{
	// ������
	if (stu == NULL || n <= 0 || rank == NULL || rstu == NULL)
		return -1;

	// ѭ������
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