#include "func.h"

extern int num;
extern char inputString[128];

void prt_start()
{
	printf(" �ȳ��ϼ���. ���� ����� ��Ű���?\n");
}

void split_w1()
{
	printf(" 1. ����\n");
	printf(" 2. ���δ�\n");
	printf(" �Է� : ");
	scanf("%d", &num);
	printf("\n");

}

void split_c1()
{
	printf(" �����ϴ�. ������ ��ȹ�� ����̳���?\n");
	printf(" 1. ��\n");
	printf(" 2. �ƴϿ�\n");
	printf(" �Է� : ");
	scanf("%d", &num);
	printf("\n");

}

void split_c2()
{
	printf(" � �� ������ ����� �� �����Ű���?(�����ʹ� ������� �ʽ��ϴ�)\n");
	printf(" �Է� : ");
	scanf("%s", &inputString);
	getchar();
	printf("\n");
	num = EOF;
}

void prt_motivation()
{
	printf(" ����̰ڱ���. �����մϴ�.\n");
	Sleep(2000);
	printf(" �׷� ��Ȳ�̶�� ���� ������� �̴ϴ�.\n\n");
	Sleep(2000);
	printf(" �׷����� �̹����� ���� �׸� �����ϼ����� ���ڽ��ϴ�.\n\n");
	Sleep(2000);
	printf(" ������ ������ ��� �ϴٺ��� ������ ������ ���� �� ������ ���̴ϴ�.\n");
	Sleep(2000);
	printf(" ���� ����ؼ� ������ ������ �������ٸ� �̷��� �غ�����.\n\n");
	Sleep(2000);
	printf(" ���� �ִ°����� ���� ������ �̵��ϼ���.\n");
	Sleep(2000);
	printf(" ��å�� �ϰų� ��ǥ�� ����� ������.\n\n");
	Sleep(2000);
	printf(" ���� ���� �츮���� �ʿ��� ���� ��ǥ�� ����� �޼������μ� �������� ��� ������ ���ư��� ���Դϴ�.\n\n");
	Sleep(2000);
	printf(" �����ͺ��� õõ�� �η������� ���� �� ���� ���� ����ֵ��� ����սô�.\n\n");



}

void prt_end()
{
	if (num == 1)
	{
		printf(" ��������! � ��ȹ�� ����̳���?\n");
		printf(" ���ڿ��� �Է����ּ��� : ");
		scanf("%s", &inputString);

	}
	else
	{
		printf(" �����ͺ��� �����غ���. ��ÿ� ������ �ұ��?\n");
		printf(" ���ڿ��� �Է����ּ��� : ");
		scanf("%s", &inputString);
		
	}

	printf("\n");
	printf(" �����ϼ̽��ϴ�.\n\n");
	printf(" ���� ��ȹ �� �̷�ñ� �ٶ��ϴ�.\n");
	printf(" ������ ��ȹ : %s\n\n", inputString);


	printf(" ���α׷� ����\n");
}