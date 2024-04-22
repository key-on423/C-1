#include <stdio.h>
#include <ctype.h>
//请您输入↓
//q
//c
//h
//b
//int main()
//{
//	char ch;
//	while ((ch = getchar()) != '#')
//	{
//		if (ch == 'b')
//			break;
//		if (ch != '\n') 
//		{
//			printf("Step 1\n");
//			if (ch != 'c')
//			{
//				if (ch != 'h')
//					printf("Step 2\n");
//				printf("Step 3\n");
//
//			}
//		}
//	}
//	printf("Done\n");
//	return 0;
//}

//1.编写一个程序读取输入，读到#字符停止，然后报告读取的空格数，换行符数和所有其他字符的数量
//int main()
//{
//	char ch;
//	int space, huanhang, qita;
//	space = huanhang = qita = 0;
//	printf("请输入一段字符,字符#结尾\n");
//	while ((ch = getchar()) != '#')
//	{
//		if (ch == ' ')
//			space++;
//		else if (ch == '\n')
//			huanhang++;
//		else
//			qita++;
//	
//	}
//	printf("您输入的一段字符里有%d个空格%d个换行符和%d个其他字符\n", space, huanhang, qita);
//	return 0;
//}

//2.编写一个程序读取输入，读到#字符停止。程序要打印每个输入的字符以及对应的ASCII码（十进制）。
//每行打印8个“字符-ASCII码”组合。 建议：使用字符计数和求模运算符%在每8个循环周期时打印一个换行符

//int main()
//{
//	char ch;
//	int zifushu = 0;
//	printf("请输入一串字符，将为你打印出他们对应的ASCII码值，记得#代表结束\n");
//	while ((ch = getchar()) != '#')
//	{
//		printf("%c-%3d ", ch, ch);
//		zifushu++;
//		if (zifushu % 8 == 0)
//			printf("\n");
//	}
//	printf("\nThat's all!\n");
//	return 0;
//}

//3.编写一个程序，读取整数直到用户输入0.输入结束后，程序应报告用户输入的偶数（不包括0）个数，这些
//偶数的平均值，输入的奇数个数及其奇数的平均值

//int main()
//{
//	printf("请输入一些整数，我将告诉你偶数的个数和偶数的平均值以及奇数的个数和奇数的平均值,0作为结束标识\n");
//	int x, jishu, oushu ;
//	jishu = oushu=0;
//	float oupin, jipin,y,z;
//	oupin = jipin = y=z= 0.0;
//	while (scanf_s("%d", &x),x!=0)//scanf函数不安全应转换为scanf_s
//	{
//		/*if (x == 0)
//			break;*/
//		if (x % 2 == 0)
//		{
//			oushu++;
//			y += x;
//		}
//
//		else
//		{
//			jishu++;
//			z += x;
//		}
//	
//	}
//	oupin = y / oushu;
//	jipin = z / jishu;
//	printf("有%d个奇数，奇数平均值为%.1lf，有%d个偶数，偶数平均值为%1.lf\n", jishu, jipin, oushu, oupin);
//	return 0;
//}

//4.使用if else 语句编写一个程序读取输入，读到#停止。用感叹号替换句号，用两个感叹号替代原来的感叹号
//最后报告进行了多少次替换
int main()
{
	printf("输入一段内容,我将用感叹号替换句号，用两个感叹号替代原来的感叹号,#结束内容\n");
	char ch;
	int count = 0;
	while ((ch = getchar()) != '#')
	{
		if (ch == '。')
		{
			printf("!");
		 	count++;
		}
		else if (ch == '!')
		{
			printf("!!");
			count++;
		}
		
		else
			putchar(ch);

	}
	printf("\n进行了%d次转换", count);
	return 0;
}