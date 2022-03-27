//8.结构体
#define _CRT_SECURE_NO_WARNINGS 1
//结构体
//人、书等物体是一个复杂对象
//例如“人”，可以利用“名字+身高+年龄+身份证号码+……”来描述
//书——书名+作者+出版社+定价+书号
//复杂对象——结构体——自己创造的一种类型
//结构体关键字：struct
//例如
#include<stdio.h>
struct Book//这是创建一个类型
{
	char name[20];//我们准备给其书名定为《C语言程序设计》
	short price;//价格定在55元
};//切记此处有个分号
int main()
{
	//利用结构体类型——创建一个该类型的结构体变量
	struct Book b1={"《C语言程序设计》",55};//b1在此指的是一本书，在此把信息给全
	printf("书名:%s\n",b1.name);
	printf("价格:%d元\n",b1.price);
	b1.price =15;
	printf("甩卖后的价格:%d\n",b1.price );
	return 0;
}


//9.结构体2
/*#define _CRT_SECURE_NO_WARNINGS 1
//结构体
//人、书等物体是一个复杂对象
//例如“人”，可以利用“名字+身高+年龄+身份证号码+……”来描述
//书——书名+作者+出版社+定价+书号
//复杂对象——结构体——自己创造的一种类型
//结构体关键字：struct
//例如
#include<stdio.h>
struct Book//这是创建一个类型
{
	char name[20];//我们准备给其书名定为《C语言程序设计》
	short price;//价格定在55元
};//切记此处有个分号
int main()
{
	//利用结构体类型——创建一个该类型的结构体变量
	struct Book b1={"C语言程序设计",55};//b1在此指的是一本书，在此把信息给全
	struct Book* pb=&b1;//结构体指针的使用
	//利用pb打印出我的书名和价格
	(*pb).price =15;
	printf("书名:%s\n",(*pb).name);
	printf("价格:%d元\n",(*pb).price);
	printf("甩卖后的价格:%d元\n",(*pb).price);
	return 0;
}*/

//10.结构体3
/*#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
struct Book//这是创建一个类型
{
	char name[20];//我们准备给其书名定为《C语言程序设计》
	short price;//价格定在55元
};//切记此处有个分号
int main()
{
	//利用结构体类型——创建一个该类型的结构体变量
	struct Book b1={"C语言程序设计",55};//b1在此指的是一本书，在此把信息给全
	struct Book* pb=&b1;//结构体指针的使用
	//利用pb打印出我的书名和价格
	(*pb).price =15;
	printf("书名:%s\n",pb->name);
	printf("价格:%d元\n",pb->price );
	printf("甩卖后的价格:%d元\n",(*pb).price);
	return 0;
}
//“->”箭头操作符，结构体指针：->成员
//“.”点操作符用于结构体变量，可以找到成员：.成员*/