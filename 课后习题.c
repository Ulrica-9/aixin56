//��¥���㷨
//#include <stdio.h>
//void text(int arr[])  //��Ȼ��ʽ����һ�����鵫�Ǵ��ݹ�������һ����ַ����ַ����ȷ����Ӧ����ָ�룬��������ȼ���  void text(int *arr)
//{
//	int sz = sizeof(arr) / sizeof(arr[0]);   //ָ��Ĵ�Сֻ��4B/8B һ���������Ĭ��4B ����4/4=1
//	int sz2 = sizeof(arr);
//	printf("%d  %d\n",sz2, sz);      
//}
//int main(void)
//{
//     char arr[10];
//	 int sz = sizeof(arr) / sizeof(arr[0]);   //���ﺬ����Ȼ�������׵�ַ��������Ȼ���������������СΪ4*10  Ȼ�� 40/4=10
//	 printf("%d\n", sz);
//	 text(arr);//���������׵�ַ
//}
////#include <Stdio.h>
//int main()
//{
//	char arrr1[] = "abcde";
//	char arr2[] = "abcde";
//	if (arrr1 == arr2)
//	{
//		printf("hehe\n");
//	}
//	else
//	{
//		printf("haha\n");
//	}
//
//	return 0;
//}
//#include <stdio.h>
//void text(int (*p)[3],int x,int y)
//{
//	int i, j;
//	for (i = 0; i < x; i++)
//	{
//		for (j = 0; j < y; j++)
//		{
//			printf("%d ", *(*(p + i) + j));
//		}
//		printf("\n");
//	}
//}
//int main()
//{
//	int arr[3][3] = { 1,2,3,4,5,6,1,2,3 };
//	text(arr,3,3);
//}
// 
// 
//����ָ��
#include <stdio.h>
void print(char* str)
{
	printf("%s \n", str);
}
int main()
{
	void (*p)(char*) = print;
	(*p)("hello bit!");
}