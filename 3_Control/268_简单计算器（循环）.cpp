// ʵ�ּ򵥼�����
#include <stdio.h>

// ������
int main(void)
{
	// ����������Ͳ�����
	int first_op_number;
	int second_op_number;
	char op_sign;
	char conti_sign;

	// ��ȡ���ݲ�����
	do 
	{
		// ��ȡ���� ����������飨ȷ���������������ֺ�һ���ַ���
		int p = scanf_s("%d %c %d", &first_op_number, &op_sign, unsigned(sizeof(char)), &second_op_number);
		if (p != 3)
		{
			printf("error\n");
			return 0;
		}

		// �������������������
		else
		{
			switch (op_sign)
			{
				case '+':
					printf("%.2lf + %.2lf = %.2lf\n", (double)first_op_number, (double)second_op_number, 
													  (double)first_op_number + second_op_number);
					break;

				case '-':
					printf("%.2lf - %.2lf = %.2lf\n", (double)first_op_number, (double)second_op_number,
													  (double)first_op_number - second_op_number);
					break;

				case '*':
					printf("%.2lf * %.2lf = %.2lf\n", (double)first_op_number, (double)second_op_number,
													  (double)first_op_number * second_op_number);
					break;

				// ������Ϊ���� Ҫ���ڶ����������Ƿ�Ϊ0
				case'/':
					if (second_op_number == 0)
					{
						printf("error\n");
						return 0;
					}

					else
					{
						printf("%.2lf / %.2lf = %.2lf\n", (double)first_op_number, (double)second_op_number,
														  (double)first_op_number / second_op_number);
						break;
					}

				default:
				{
					printf("error\n");
					return 0;
				}
			}

			// �����Ƿ��������(ע��%cǰ�ո� ���ڶ�ȡ��������ʣ������пհ׷�)
			scanf_s(" %c", &conti_sign, (unsigned)sizeof(char));
		}
	} while (conti_sign == 'y' || conti_sign == 'Y');
}