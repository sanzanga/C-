#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>
#include <errno.h>

//int main()
//{
//	//���ļ�test.txt
//	//���·��
//	//fopen("test.txt", "r");//test.txt������ļ����������ôд
//	
//	//..��ʾ��һ��·��
//	//.��ʾ��ǰ·��
//	//fopen("../test.txt","r");
//	//fopen("./test.txt","r");
//
//	//����·����д��
//	//fopen("D:\\C����\\1-24_C\\1-24_C", "r");
//
//	FILE* pf = fopen("test.txt", "r");
//	//����ʧ��֮����pf��ֵΪ��ָ��
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 0;
//	}
//	//�򿪳ɹ�
//	//���ļ�
//	//�ر��ļ�
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}

//int main()
//{
//	FILE* pfWrite = fopen("test.txt", "w");
//	if (pfWrite == NULL)
//	{
//		printf("%s\n",strerror(errno));
//		return 0;
//	}
//	//д�ļ�
//	fputc('b', pfWrite);
//	fputc('i', pfWrite);
//	fputc('t', pfWrite);
//
//
//	//�ر��ļ�
//	fclose(pfWrite);
//	pfWrite = NULL;
//	return 0;
//}

//int main()
//{
//	FILE* pfRead = fopen("test.txt", "r");
//	if (pfRead == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 0;
//	}
//	//���ļ�
//	printf("%c", fgetc(pfRead));//b
//	printf("%c", fgetc(pfRead));//i
//	printf("%c", fgetc(pfRead));//t
//
//	//�ر��ļ�
//	fclose(pfRead);
//	pfRead = NULL;
//	return 0;
//}

//�Ӽ�������
//�������Ļ
//���̺���Ļ�����ⲿ�豸
// 
// ����-��׼�������豸 stdin
// ��Ļ-��׼������豸 stdout
// ��һ�������Ĭ�ϴ򿪵������ļ���
// stdin FILE*
// stdout FILE*
// strerr FULE*
//

//int main()
//{
//	int ch = fgetc(stdin);
//	fputc(ch, stdout);
//	//����Ļ��������ַ����ڴ�ӡ����
//	return 0;
//}

//int main()
//{
//	char buf[1024] = { 0 };
//
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		return 0;
//	}
//	//���ļ�
//	fgets(buf, 1024, pf);
//	//printf("%s", buf);
//	puts(buf);
//
//	fgets(buf, 1024, pf);
//	//printf("%s", buf);
//	puts(buf);
//
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}

//int main()
//{
//	char buf[1024] = { 0 };
//
//	FILE* pf = fopen("test.txt", "w");
//	if (pf == NULL)
//	{
//		return 0;
//	}
//	//д�ļ�
//	fputs("hello\n", pf);
//	fputs("world", pf);
//
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}

//int main()
//{
//	//�Ӽ��̶�ȡһ���ı���Ϣ
//	char buf[1024] = { 0 };
//	//fgets(buf, 1024, stdin);//�ӱ�׼�����ȡ
//	//fputs(buf, stdout);//�ӱ�׼������
//
//	gets(buf);
//	puts(buf);
//
//	return 0;
//}

//struct S
//{
//	int n;
//	float score;
//	char arr[10];
//};
//
//int main()
//{
//	struct S s = { 100,3.14f,"bit" };
//	FILE* pf = fopen("test.txt", "w");
//	if (pf == NULL)
//	{
//		return 0;
//	}
//	//��ʽ������ʽд�ļ�
//	fprintf(pf, "%d %f %s", s.n, s.score, s.arr);
//
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}

//struct S
//{
//	int n;
//	float score;
//	char arr[10];
//};
//
//int main()
//{
//	struct S s = { 0 };
//
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		return 0;
//	}
//	//��ʽ������������
//	//scanf("%d %f %s", &(s.n), &(s.score), &(s.arr));
//	fscanf(pf, "%d %f %s", &(s.n), &(s.score), &(s.arr));
//	printf("%d %f %s", s.n, s.score, s.arr);
//
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}

//struct S
//{
//	int n;
//	float score;
//	char arr[10];
//};
//
//int main()
//{
//	struct S s = { 0 };
//
//	fscanf(stdin, "%d %f %s", &(s.n), &(s.score), &(s.arr));
//	fprintf(stdout, "%d %.2f %s", s.n, s.score, s.arr);//�ڶ�������������λС��
//
//	return 0;
//}

//struct S
//{
//	int n;
//	float score;
//	char arr[10];
//};
//
//int main()
//{
//	struct S s = { 100,3.14f,"abcdef" };
//	struct S temp = { 0 };
//	char buf[1024] = { 0 };
//	
//	//�Ѹ�ʽ��������ת�����ַ����洢��buf
//	sprintf(buf, "%d %f %s", s.n, s.score, s.arr);
//	//printf("%s\n", buf);
//
//	//��buf�ж�ȡ��ʽ�������ݵ�temp��
//	sscanf(buf, "%d %f %s", &(temp.n), &(temp.score), temp.arr);
//	printf("%d %f %s", temp.n, temp.score, temp.arr);
//	return 0;
//}

//struct S
//{
//	char name[20];
//	int age;
//	double score;
//};
//
//int main()
//{
//	struct S s = { "����",20,55.6 };
//	FILE* pf = fopen("test.txt", "wb");
//	if (pf == NULL)
//	{
//		return 0;
//	}
//	//�����Ƶ���ʽд�ļ�
//	fwrite(&s, sizeof(struct S), 1, pf);
//
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}

//struct S
//{
//	char name[20];
//	int age;
//	double score;
//};
//
//int main()
//{
//	//struct S s = { "����",20,55.6 };
//	struct S s = { 0 };
//	FILE* pf = fopen("test.txt", "rb");
//	if (pf == NULL)
//	{
//		return 0;
//	}
//	//�����Ƶ���ʽд�ļ�
//	fread(&s, sizeof(struct S), 1, pf);
//	printf("%s %d %f\n", s.name, s.age, s.score);
//
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}

//int main()
//{
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		return 0;
//	}
//	//1����λ�ļ�ָ��
//	fseek(pf, -2, SEEK_END);
//	//2����ȡ�ļ�
//	int ch = fgetc(pf);
//	printf("%c\n", ch);
//
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}

//int main()
//{
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		return 0;
//	}
//	//1����λ�ļ�ָ��
//	//fseek(pf, -2, SEEK_END);
//
//	int ch = fgetc(pf);//������a
//	printf("%c\n", ch);
//
//	//int pos = ftell(pf);
//	//printf("%d\n", pos);
//
//	rewind(pf);//���ļ�ָ���λ�ûص��ļ�����ʼλ��
//	ch = fgetc(pf);//������a
//	printf("%c\n", ch);
//
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}

//int main()
//{
//	//feof();//EDF - end of file - �ļ�������־
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		return 0;
//	}
//	int ch = fgetc(pf);
//	printf("%d\n", ch);//-1
//
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//int main()
//{
//	//strerror �Ѵ������Ӧ�Ĵ�����Ϣ���ַ�����ַ����
//	//printf("%s\n", strerror(errno));
//
//	//perror
//	FILE* pf = fopen("test2.txt", "r");
//	if (pf == NULL)
//	{
//		perror("open file test2.txt:");
//		return 0;
//	}
//	//���ļ�
//
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}

//int main()
//{
//	int c;
//	FILE* pf = fopen("test.txt", "r");
//	if (!pf)
//	{
//		perror("File opening failed");
//		return 0;
//	}
//	//fgetc ����ȡʧ�ܵ�ʱ����������ļ�������ʱ�򣬶��᷵��EOF
//	while ((c = fgetc(pf) != EOF))
//	{
//		putchar(c);
//	}
//	//�ж���ʲôԭ��
//	if (ferror(pf))
//	{
//		puts("I/O error when reading");
//	}
//	else if (feof(pf))
//	{
//		puts("End of file reached successfully");
//	}
//
//	fclose(pf);
//	pf = NULL;
//
//}

typedef struct
{
	int a;
	char b;
	short c;
	short d;
}AA_t;

int main()
{
	printf("%d\n", sizeof(AA_t));

	return 0;
}