#define _CRT_SECURE_NO_WARNINGS 
//#include<stdio.h>
//
//int main()
//{
//	int a, b,sum;
//	printf("please input a and b\n");
//	scanf("%d %d\n",&a, &b);//输入半径。
//	sum = a + b;
//	printf("the sum is %d",sum);//输出结果。
//	return 0;
//}

//#include<stdio.h>
//int MAX(int x, int y)
//{
//	if (x > y)
//		return x;
//	else
//		return y;
//
//
//}
//
//int main()
//{
//	int a = 10, b = 40;
//	int max;
//
//	max=MAX(a, b);
//
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	char arr1[] = "abcd";
//	char arr2[] = { 'a','b','c','d',0};
//	printf("%s\n",arr1);
//	printf("%s\n", arr2);//strlen可以计算字符串的长度
//	return 0;
//}



//#include<stdio.h>
//#include<string.h>
//
//int main()
//{
	/*printf("%s\n", ("c:\test\32\test.c"));
	printf("%c\n", '\32');
	printf("字符串长度:%d\n", strlen("c:\test\32\test.c"));*/
	/*printf("%c\n", '\1');*/
	/*int x, y, z;
	x = 'A' + 32;
	y = 'B' + 32;
	z= 'C' + 32;
	printf("大写转小写:%c%c%c\n",x,y,z);
	return 0;*/


//}

//#include<stdio.h>
//int main()
//{
//	int line=0;
//	printf("加入某机构\n");
//	while (line < 200000)
//	{
//		printf("敲一行代码%d\n",line+1);
//		line++;
//	}
//	printf("好的offer\n");
//	return 0;
//
//
//}


//#include<stdio.h>
//int main()
//{
//	int a = 1,b;
//	b = a << 3;
//	printf("the value of b=%d\n",b);
//	return 0;
//
//}


//#include<stdio.h>
//int main()
//{
//	int a = 5, b=7,c;
//	c = a | b;
//	printf("the value of c=%d\n", c);
//	return 0;
//
//}

//#include<stdio.h>
//int main()
//{
//	int arr[10] = { 0 };
//	printf("字节数=%d\n", sizeof(int));
//	printf("字节数=%d\n", sizeof(arr[0]));
//	printf("字节数=%d\n", sizeof(arr));
//	printf("字节数=%d\n", sizeof(arr)/sizeof(arr[0]));
//	return 0;
//
//}

//#include<stdio.h>
//#include<stdlib.h>//system函数
//#include<string.h>//strcmp函数
////关机程序设计
//int main()
//{
//	char input[20] = {0};
//	system("shutdown -s -t 60");//一分钟后关机
//	again:
//	printf("一分钟后关机，输入：我是猪，可取消关机\n");
//	scanf("%s",&input);
//	if (strcmp(input,"我是猪")==0)
//	{
//		system("shutdown -a");//取消关机

//	}
//	else
//	{
//		goto again;//跳转到again：
//	}
//	return 0;
//}



//元素组中找出单身狗（法一）
//#include<stdio.h>
//
//int main()
//{
//	int arr[] = { 1,2,3,4,5,1,2,3,4 };
//	int sz = sizeof(arr) / sizeof(arr[0]);//计算数组元素个数
//	int i = 0;
//	for (i = 0; i < sz; i++)
//		//arr[i]统计数组每一个元素
//	{
//		int j = 0;
//		int count = 0;
//		for (j=0;j<sz;j++)
//		{
//			if (arr[i] == arr[j])//arr[j]如arr[0]时与每一个元素一一比较（包括本身）
//			{
//				count++;
//			}
//		}
//		if (count == 1)
//		{
//			printf("单身狗是：%d\n", arr[i]);
//			break;//结束语句
//		}
//	}
//	return 0;
//}


//元素组中找出单身狗（法二）
//#include<stdio.h>
//int main()
//{
//	int arr[] = {1,2,3,4,5,1,2,3,4};
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0,res=0;
//	for (i = 0; i < sz; i++)
//	{
//		res = res ^ arr[i];
//	}
//	printf("单身狗是：%d\n", res);
//	return 0;
//}


//两个数交换，不使用中间变量()，一般企业会使用中间变量
//使用中间变量的情况
//
//#include<stdio.h>
//int main()
//{
//	int a = 3, b = 5;
//	int c;
//	c = a;
//	a = b;
//	b = c;
//	printf("a=%d\nb=%d\n",a,b);
//	return 0;
//}
//
//两个数交换，不使用中间变量(法一，但加减法会出现溢出现象)
//#include<stdio.h>
//int main()
//{
//	int a = 3, b = 5;
//	a = b - a;
//	b = b - a;
//	a = b + a;
//	printf("a=%d\nb=%d\n", a, b);
//
//	return 0;
//}
//
//两个数交换，不使用中间变量(法二，异或不会出现溢出情况)
//#include<stdio.h>
//int main()
//{
//	int a = 3, b = 5;
//	printf("交换前：a=%d\n\tb=%d\n",a,b);
//	a = a ^ b;
//	b = a ^ b;
//	a = a ^ b;
//	printf("交换后：a=%d\n\tb=%d\n", a,b);
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int a = 10;
//	int b = a++;
//	printf("a=%d\nb=%d\n",a,b);//后置++，先使用（赋值），后再++
//	return 0;
//
//}

//#include<stdio.h>
//int main()
//{
//	int a = 10;
//	int b = ++a; 
//	printf("a=%d\nb=%d\n", a, b);//前置++，先++，后使用（赋值）
//	return 0;
//
//}

//#include<stdio.h>
//int main()
//{
//	int a = 10;
//	int* p = &a;
//	*p = 2;
//	printf("a=%d\n", a);
//	printf("a的地址为：%p\n",p);
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	char ch= 'w';
//	char* pc= &ch;
//	*pc = 'b';
//	printf("ch=%c\n", ch);
//	printf("a的地址为：%p\n", pc);
//	printf("a的地址字节=%d\n", sizeof(pc));//如果32位则为4字节，64位则为8字节
//	return 0;
//}

//#include<stdio.h>
//void res()
//{
//	//static使得局部变量生命周期变长
//	static int a = 1;//static静态局部变量
//	a++;
//	printf("a=%d\n",a);//输出结果2、3、4、5、6。
//}
//
//int main()
//{
//	int i = 0;
//	while (i < 5)
//	{
//		res();
//		i++;
//	}
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	//extern外部声明全局变量
//	extern int _val;
//	printf("_val=%d\n",_val);
//
//
//	return 0;
//}

//#include<stdio.h>
//extern int Add();//extern声明外部函数
//int main()
//{
//	int a = 110, b = 30;
//	int sum;
//	sum=Add(a, b);
//	printf("the sum is:%d\n",sum);
//	return 0;
//}

//#include<stdio.h>
//#define MAX(X,Y) (X>Y?X:Y)//宏定义函数
//int main()
//{
//	int a = 10, b = 20;
//	int c;
//	c = MAX(a,b);
//	printf("最大值：%d\n",c);
//
//	return 0;
//}


//#include<stdio.h>
//struct Book//Book是结构体名
//{
//	char name[20] ;//定义书名：c语言程序设计
//	short price ;//定义价格：55元
//
//};
//
//int main()
//{
//	struct Book b1 = {"C语言程序设计",55};//b1是结构体变量名
//
//	struct Book* pb=&b1;
//	
//
//	//.  结构体变量成员.成员
//	//->  结构体变量指针->成员
//
//	printf("书名：%s\n",pb->name );
//	printf("价格：%d\n", pb->price);
//
//	//printf("书名：%s\n",(*pb).name);//比较繁琐
//	//printf("价格：%d\n", (*pb).price);//比较繁琐
//
//
//	//不需要定义指针
//	//printf("书名：%s\n", b1.name);//变量名加.然后加属性即b1.name
//	//printf("价格：%d元\n", b1.price);//变量名加.然后加属性即b1.price
//	//b1.price = 14;//变价价格
//	//printf("变化后价格：%d元\n", b1.price);
//	return 0;
//}



//更改书名，直接更改价格可以，因为书名是数组（是一个地址）


//#include<stdio.h>
//#include<string.h>
//struct Book
//{
//	char name[20];
//	short price;
//
//};
//
//int main()
//{
//	struct Book b1 = {"c语言程序设计",55};
//	strcpy(b1.name,"c++");//字符拷贝（string copy），它的库文件（string.h）
//	printf("书名：%s\n",b1.name);
//	return 0;
//}



//判断一个数是否为奇数

//#include<stdio.h>
//int main()
//{
//	int a;
//	printf("输入一个数\n");
//	scanf("%d", &a);
//	if (1==a % 2)
//		printf("这个数是奇数\n");
//	else
//		printf("这个数不是奇数\n");
//	return 0;
//}


//输出1-100之间的奇数

//#include<stdio.h>
//int main()
//{
//	int i;
//	printf("奇数值：\n");
//	for (i = 1; i <= 100; i++)
//	{
//		if (1 == i % 2)
//			printf("%d ",i);
//	}
//	return 0;
//}



//switch语句

//#include<stdio.h>
//int main()
//{
//	int day;
//	printf("请输入1-7\n");
//	scanf("%d",&day);
//	switch (day)
//	{
//	   case 1:
//		   printf("星期一\n");
//		   break;
//	   case 2:
//		   printf("星期二\n");
//		   break;
//	   case 3:
//		   printf("星期三\n");
//		   break;
//	   case 4:
//		   printf("星期四\n");
//		   break;
//	   case 5:
//		   printf("星期五\n");
//		   break;
//	   case 61:
//		   printf("星期六\n");
//		   break;
//	   case 7:
//		   printf("星期日\n");
//		   break;
//	   default:
//		   printf("输入错误\n");
//	}
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int day;
//	printf("请输入1-7\n");
//	scanf("%d", &day);
//	switch (day)
//	{
//	case 1:
//	case 2:
//	case 3:
//	case 4:
//	case 5:
//		printf("工作日\n");
//		break;
//	case 6:
//	case 7:
//		printf("休息日\n");
//		break;
//	default:
//		printf("输入错误\n");
//	}
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int i=1;
//	while (i <= 10)
//	{
//		if(5==i)
//		break;//直接跳出循环到return
//		printf("i=%d\n",i);
//		i++;
//	}
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int i = 1;
//	while (i <= 10)
//	{
//		if (5 == i)
//			continue;//他会继续判断i是否小于等于10，然后在i<=10和if(5==i)中间执行
//		printf("i=%d\n", i);
//		i++;
//	}
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int ch= getchar();
//	putchar(ch);
//	printf("%c\n",ch);
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int ch = 0;
//	while ((ch = getchar()) != EOF)//CTRL+Z程序结束（EOF）
//	{
//		putchar(ch);
//	}
//	return 0;
//}

#include<stdio.h>
int main()
{
	char password[] = { 0 };
	printf("请输入密码:\n");
	scanf("%s", &password);
	printf("请确认（Y/N）>\n");
	getchar();
	if (getchar() == 'Y')
	{
		printf("确认成功\n");
	}
	else
	{
		printf("取消确认\n");
	}
	return 0;
}