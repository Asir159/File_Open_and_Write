#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//int main()
//{
//	//进行写文件操作时，如果已经里面已经创建了文件夹，它会覆盖，从新
//	//创建一个新文件
//	FILE *fp = fopen("test.txt","w");
//
//	//没有该文件，针对read时
//	if (fp == NULL)
//	{
//		printf("打开失败");
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

	//没有该文件，针对read时
	if (fp == NULL)
	{
		printf("打开失败");
	}

	//fprintf(fp,"%d %f %s",s.n,s.f,s.arr);

	fscanf(fp,"%d %f %s",&(s.n),&(s.f),&(s.arr));
	fprintf(stdout, "%d %f %s", (s.n), (s.f), (s.arr));
	 
	fclose(fp);
	fp = NULL;

	return 0;
}