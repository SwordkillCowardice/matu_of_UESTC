// 实现简单计算器
#include <stdio.h>

// 主函数
int main(void)
{
	// 定义操作数和操作符
	int first_op_number;
	int second_op_number;
	char op_sign;
	char conti_sign;

	// 读取数据并计算
	do 
	{
		// 读取数据 并做初步检查（确保读到了两个数字和一个字符）
		int p = scanf_s("%d %c %d", &first_op_number, &op_sign, unsigned(sizeof(char)), &second_op_number);
		if (p != 3)
		{
			printf("error\n");
			return 0;
		}

		// 根据运算符类型做运算
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

				// 除法较为特殊 要检查第二个操作数是否为0
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

			// 决定是否继续运算(注意%c前空格 用于读取缓冲区中剩余的所有空白符)
			scanf_s(" %c", &conti_sign, (unsigned)sizeof(char));
		}
	} while (conti_sign == 'y' || conti_sign == 'Y');
}