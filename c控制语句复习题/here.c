#include <stdio.h>
#include <ctype.h>
//���������
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

//1.��дһ�������ȡ���룬����#�ַ�ֹͣ��Ȼ�󱨸��ȡ�Ŀո��������з��������������ַ�������
//int main()
//{
//	char ch;
//	int space, huanhang, qita;
//	space = huanhang = qita = 0;
//	printf("������һ���ַ�,�ַ�#��β\n");
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
//	printf("�������һ���ַ�����%d���ո�%d�����з���%d�������ַ�\n", space, huanhang, qita);
//	return 0;
//}

//2.��дһ�������ȡ���룬����#�ַ�ֹͣ������Ҫ��ӡÿ��������ַ��Լ���Ӧ��ASCII�루ʮ���ƣ���
//ÿ�д�ӡ8�����ַ�-ASCII�롱��ϡ� ���飺ʹ���ַ���������ģ�����%��ÿ8��ѭ������ʱ��ӡһ�����з�

//int main()
//{
//	char ch;
//	int zifushu = 0;
//	printf("������һ���ַ�����Ϊ���ӡ�����Ƕ�Ӧ��ASCII��ֵ���ǵ�#�������\n");
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

//3.��дһ�����򣬶�ȡ����ֱ���û�����0.��������󣬳���Ӧ�����û������ż����������0����������Щ
//ż����ƽ��ֵ�������������������������ƽ��ֵ

//int main()
//{
//	printf("������һЩ�������ҽ�������ż���ĸ�����ż����ƽ��ֵ�Լ������ĸ�����������ƽ��ֵ,0��Ϊ������ʶ\n");
//	int x, jishu, oushu ;
//	jishu = oushu=0;
//	float oupin, jipin,y,z;
//	oupin = jipin = y=z= 0.0;
//	while (scanf_s("%d", &x),x!=0)//scanf��������ȫӦת��Ϊscanf_s
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
//	printf("��%d������������ƽ��ֵΪ%.1lf����%d��ż����ż��ƽ��ֵΪ%1.lf\n", jishu, jipin, oushu, oupin);
//	return 0;
//}

//4.ʹ��if else ����дһ�������ȡ���룬����#ֹͣ���ø�̾���滻��ţ���������̾�����ԭ���ĸ�̾��
//��󱨸�����˶��ٴ��滻
int main()
{
	printf("����һ������,�ҽ��ø�̾���滻��ţ���������̾�����ԭ���ĸ�̾��,#��������\n");
	char ch;
	int count = 0;
	while ((ch = getchar()) != '#')
	{
		if (ch == '��')
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
	printf("\n������%d��ת��", count);
	return 0;
}