#define _CRT_SECURE_NO_WARNINGS 
//#include<stdio.h>
//
//int main()
//{
//	int a, b,sum;
//	printf("please input a and b\n");
//	scanf("%d %d\n",&a, &b);//����뾶��
//	sum = a + b;
//	printf("the sum is %d",sum);//��������
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
//	printf("%s\n", arr2);//strlen���Լ����ַ����ĳ���
//	return 0;
//}



//#include<stdio.h>
//#include<string.h>
//
//int main()
//{
	/*printf("%s\n", ("c:\test\32\test.c"));
	printf("%c\n", '\32');
	printf("�ַ�������:%d\n", strlen("c:\test\32\test.c"));*/
	/*printf("%c\n", '\1');*/
	/*int x, y, z;
	x = 'A' + 32;
	y = 'B' + 32;
	z= 'C' + 32;
	printf("��дתСд:%c%c%c\n",x,y,z);
	return 0;*/


//}

//#include<stdio.h>
//int main()
//{
//	int line=0;
//	printf("����ĳ����\n");
//	while (line < 200000)
//	{
//		printf("��һ�д���%d\n",line+1);
//		line++;
//	}
//	printf("�õ�offer\n");
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
//	printf("�ֽ���=%d\n", sizeof(int));
//	printf("�ֽ���=%d\n", sizeof(arr[0]));
//	printf("�ֽ���=%d\n", sizeof(arr));
//	printf("�ֽ���=%d\n", sizeof(arr)/sizeof(arr[0]));
//	return 0;
//
//}

//#include<stdio.h>
//#include<stdlib.h>//system����
//#include<string.h>//strcmp����
////�ػ��������
//int main()
//{
//	char input[20] = {0};
//	system("shutdown -s -t 60");//һ���Ӻ�ػ�
//	again:
//	printf("һ���Ӻ�ػ������룺��������ȡ���ػ�\n");
//	scanf("%s",&input);
//	if (strcmp(input,"������")==0)
//	{
//		system("shutdown -a");//ȡ���ػ�

//	}
//	else
//	{
//		goto again;//��ת��again��
//	}
//	return 0;
//}



//Ԫ�������ҳ���������һ��
//#include<stdio.h>
//
//int main()
//{
//	int arr[] = { 1,2,3,4,5,1,2,3,4 };
//	int sz = sizeof(arr) / sizeof(arr[0]);//��������Ԫ�ظ���
//	int i = 0;
//	for (i = 0; i < sz; i++)
//		//arr[i]ͳ������ÿһ��Ԫ��
//	{
//		int j = 0;
//		int count = 0;
//		for (j=0;j<sz;j++)
//		{
//			if (arr[i] == arr[j])//arr[j]��arr[0]ʱ��ÿһ��Ԫ��һһ�Ƚϣ���������
//			{
//				count++;
//			}
//		}
//		if (count == 1)
//		{
//			printf("�����ǣ�%d\n", arr[i]);
//			break;//�������
//		}
//	}
//	return 0;
//}


//Ԫ�������ҳ�������������
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
//	printf("�����ǣ�%d\n", res);
//	return 0;
//}


//��������������ʹ���м����()��һ����ҵ��ʹ���м����
//ʹ���м���������
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
//��������������ʹ���м����(��һ�����Ӽ���������������)
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
//��������������ʹ���м����(��������򲻻����������)
//#include<stdio.h>
//int main()
//{
//	int a = 3, b = 5;
//	printf("����ǰ��a=%d\n\tb=%d\n",a,b);
//	a = a ^ b;
//	b = a ^ b;
//	a = a ^ b;
//	printf("������a=%d\n\tb=%d\n", a,b);
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int a = 10;
//	int b = a++;
//	printf("a=%d\nb=%d\n",a,b);//����++����ʹ�ã���ֵ��������++
//	return 0;
//
//}

//#include<stdio.h>
//int main()
//{
//	int a = 10;
//	int b = ++a; 
//	printf("a=%d\nb=%d\n", a, b);//ǰ��++����++����ʹ�ã���ֵ��
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
//	printf("a�ĵ�ַΪ��%p\n",p);
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	char ch= 'w';
//	char* pc= &ch;
//	*pc = 'b';
//	printf("ch=%c\n", ch);
//	printf("a�ĵ�ַΪ��%p\n", pc);
//	printf("a�ĵ�ַ�ֽ�=%d\n", sizeof(pc));//���32λ��Ϊ4�ֽڣ�64λ��Ϊ8�ֽ�
//	return 0;
//}

//#include<stdio.h>
//void res()
//{
//	//staticʹ�þֲ������������ڱ䳤
//	static int a = 1;//static��̬�ֲ�����
//	a++;
//	printf("a=%d\n",a);//������2��3��4��5��6��
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
//	//extern�ⲿ����ȫ�ֱ���
//	extern int _val;
//	printf("_val=%d\n",_val);
//
//
//	return 0;
//}

//#include<stdio.h>
//extern int Add();//extern�����ⲿ����
//int main()
//{
//	int a = 110, b = 30;
//	int sum;
//	sum=Add(a, b);
//	printf("the sum is:%d\n",sum);
//	return 0;
//}

//#include<stdio.h>
//#define MAX(X,Y) (X>Y?X:Y)//�궨�庯��
//int main()
//{
//	int a = 10, b = 20;
//	int c;
//	c = MAX(a,b);
//	printf("���ֵ��%d\n",c);
//
//	return 0;
//}


//#include<stdio.h>
//struct Book//Book�ǽṹ����
//{
//	char name[20] ;//����������c���Գ������
//	short price ;//����۸�55Ԫ
//
//};
//
//int main()
//{
//	struct Book b1 = {"C���Գ������",55};//b1�ǽṹ�������
//
//	struct Book* pb=&b1;
//	
//
//	//.  �ṹ�������Ա.��Ա
//	//->  �ṹ�����ָ��->��Ա
//
//	printf("������%s\n",pb->name );
//	printf("�۸�%d\n", pb->price);
//
//	//printf("������%s\n",(*pb).name);//�ȽϷ���
//	//printf("�۸�%d\n", (*pb).price);//�ȽϷ���
//
//
//	//����Ҫ����ָ��
//	//printf("������%s\n", b1.name);//��������.Ȼ������Լ�b1.name
//	//printf("�۸�%dԪ\n", b1.price);//��������.Ȼ������Լ�b1.price
//	//b1.price = 14;//��ۼ۸�
//	//printf("�仯��۸�%dԪ\n", b1.price);
//	return 0;
//}



//����������ֱ�Ӹ��ļ۸���ԣ���Ϊ���������飨��һ����ַ��


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
//	struct Book b1 = {"c���Գ������",55};
//	strcpy(b1.name,"c++");//�ַ�������string copy�������Ŀ��ļ���string.h��
//	printf("������%s\n",b1.name);
//	return 0;
//}



//�ж�һ�����Ƿ�Ϊ����

//#include<stdio.h>
//int main()
//{
//	int a;
//	printf("����һ����\n");
//	scanf("%d", &a);
//	if (1==a % 2)
//		printf("�����������\n");
//	else
//		printf("�������������\n");
//	return 0;
//}


//���1-100֮�������

//#include<stdio.h>
//int main()
//{
//	int i;
//	printf("����ֵ��\n");
//	for (i = 1; i <= 100; i++)
//	{
//		if (1 == i % 2)
//			printf("%d ",i);
//	}
//	return 0;
//}



//switch���

//#include<stdio.h>
//int main()
//{
//	int day;
//	printf("������1-7\n");
//	scanf("%d",&day);
//	switch (day)
//	{
//	   case 1:
//		   printf("����һ\n");
//		   break;
//	   case 2:
//		   printf("���ڶ�\n");
//		   break;
//	   case 3:
//		   printf("������\n");
//		   break;
//	   case 4:
//		   printf("������\n");
//		   break;
//	   case 5:
//		   printf("������\n");
//		   break;
//	   case 61:
//		   printf("������\n");
//		   break;
//	   case 7:
//		   printf("������\n");
//		   break;
//	   default:
//		   printf("�������\n");
//	}
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int day;
//	printf("������1-7\n");
//	scanf("%d", &day);
//	switch (day)
//	{
//	case 1:
//	case 2:
//	case 3:
//	case 4:
//	case 5:
//		printf("������\n");
//		break;
//	case 6:
//	case 7:
//		printf("��Ϣ��\n");
//		break;
//	default:
//		printf("�������\n");
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
//		break;//ֱ������ѭ����return
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
//			continue;//��������ж�i�Ƿ�С�ڵ���10��Ȼ����i<=10��if(5==i)�м�ִ��
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
//	while ((ch = getchar()) != EOF)//CTRL+Z���������EOF��
//	{
//		putchar(ch);
//	}
//	return 0;
//}

#include<stdio.h>
int main()
{
	char password[] = { 0 };
	printf("����������:\n");
	scanf("%s", &password);
	printf("��ȷ�ϣ�Y/N��>\n");
	getchar();
	if (getchar() == 'Y')
	{
		printf("ȷ�ϳɹ�\n");
	}
	else
	{
		printf("ȡ��ȷ��\n");
	}
	return 0;
}