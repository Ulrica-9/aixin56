//爬楼梯算法
//#include <stdio.h>
//void text(int arr[])  //虽然形式上是一个数组但是传递过来的是一个地址，地址的正确接受应该是指针，所以这里等价于  void text(int *arr)
//{
//	int sz = sizeof(arr) / sizeof(arr[0]);   //指针的大小只有4B/8B 一般机器都是默认4B 所以4/4=1
//	int sz2 = sizeof(arr);
//	printf("%d  %d\n",sz2, sz);      
//}
//int main(void)
//{
//     char arr[10];
//	 int sz = sizeof(arr) / sizeof(arr[0]);   //这里含义虽然是数组首地址，但他仍然是数组所以数组大小为4*10  然后 40/4=10
//	 printf("%d\n", sz);
//	 text(arr);//传递数组首地址
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
//函数指针
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