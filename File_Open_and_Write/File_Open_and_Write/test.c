#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//int main()
//{
//	//����д�ļ�����ʱ������Ѿ������Ѿ��������ļ��У����Ḳ�ǣ�����
//	//����һ�����ļ�
//	FILE *fp = fopen("test.txt","w");
//
//	//û�и��ļ������readʱ
//	if (fp == NULL)
//	{
//		printf("��ʧ��");
//	}
//
//	fclose(fp);
//	fp = NULL;
//
//	return 0;
//}

struct S
{
	int n;
	float f;
	char arr[10];
};

int main()
{
	struct S s = { 10,3.14f,"ni hao"};
	FILE* fp = fopen("test.txt", "r");

	//û�и��ļ������readʱ
	if (fp == NULL)
	{
		printf("��ʧ��");
	}

	//fprintf(fp,"%d %f %s",s.n,s.f,s.arr);

	fscanf(fp,"%d %f %s",&(s.n),&(s.f),&(s.arr));
	fprintf(stdout, "%d %f %s", (s.n), (s.f), (s.arr));
	 
	fclose(fp);
	fp = NULL;

	return 0;
}