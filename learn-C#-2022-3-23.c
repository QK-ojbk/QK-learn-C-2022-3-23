//1.关键词extern,配合外部一个子文件里面的函数
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//关键词extern，可以调用外部文件中的函数
//关键词static,当static修饰全局变量时，改变了变量的作用域——让静态的全局变量只能在自己所在的源文件内部使用，出了源文件就没办法再使用了
int main()
{
	//extern——声明外部符号的
	extern int g_val;
	printf("g_val=%d\n",g_val);
	return 0;
}

#define _CRT_SECURE_NO_WARNINGS 1
int g_val=2020;//全局变量

//2.static修饰函数,调用一个外部文件的子函数
/*#define _CRT_SECURE_NO_WARNINGS 1
//static修饰函数
#include<stdio.h>
//声明外部函数
extern int add(int x,int y);
int main()
{
	int a=10;
	int b=20;
	int sum=add(a,b);
	printf("sum=%d\n",sum);
	return 0;
}*/
/*#define _CRT_SECURE_NO_WARNINGS 1
int add(int x,int y)
{
	int z=x+y;
	return z;
}*/

//3.宏定义
/*#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//#define定义标识符常亮
#define MAX1 100
//#define可以定义宏——带参数


//函数的实现
int MAX2(int x,int y)
{
	if(x>y)
		return x;
	else
		return y;
}
//宏的实现方式
#define MAX3(X,Y) (X>Y?X:Y)
int main()
{
	int a=MAX1;
	int b=20;
	int c=30;
	//函数的方式
	int max1=MAX2(b,c);
	//宏的方式
	int max2=MAX3(b,c);//因为前面用了宏定义，所以此处相当于int max2=(X>Y?X:Y);
	printf("%d\n",a);
	printf("%d\n",max1);
	printf("%d\n",max2);
	return 0;
}*/
