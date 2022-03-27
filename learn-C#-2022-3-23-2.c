//4.指针：*星号的使用
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int a=10;//4个字节
	int* p=&a;//取a的地址,p的类型是int*，p里面存的是a的地址
	//有一种变量是用来存放地址的——指针变量
	printf("%p\n",&a);//%p打印地址，打印的是个十六进制数
	printf("%p\n",p);//打印出来的结果一样
	*p=20;//*星号是解引用操作符
	printf("a=%d\n",a);
	return 0;
}

//5.指针对字符变量的使用
/*#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	char ch='w';//字符变量
	char* pc=&ch;
	*pc='a';
	printf("%c\n",ch);//%c——打印字符
	return 0;
}*/

//6.同上
/*#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	char ch='w';
	char* pc=&ch;
	printf("%d\n",sizeof(pc));
	return 0;
}*/

//7.指针变量的字节长度
/*#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	double d=3.14;
	double* pd=&d;//pd前面加上*后，是指针变量，而其前面的double指的是*pd这个指针变量指向的d，这个d是double类型的
	*pd=5.26;
	printf("%d\n",sizeof(pd));//打印出来的字节长度与*号前面的类型无关，与所在平台有关，32位的则为4字节，64的则为8字节
	printf("%p\n",d);
	return 0;
}*/