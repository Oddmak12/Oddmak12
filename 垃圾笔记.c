extern 申明外部变量

strcoy(odd,"haloworld");

ctrl c k 全注释
ctrl u k 取消全注释
 
枚举常量
enum Color
{
    Blue
    Red
    Yellow
};   ！！有分号
……
enum Color odd = Blue

字符串
"Oddmak1r"
char odd[] = "Oddmak1r" 有结束符'\0'
odd = {'a','b','\0'} = {97,98,0}
sizeof(odd) = 3
strlen(odd) = 2
odd = {'a','b'} = {97,98,}
sizeof(odd) = 2
strlen(odd) = ¿
若里面位数字 则记录为sizeof(int) * 个数
"\xdd \ddd" 表示十六进制 八进制后对应的字符

正数的原码 反码 补码 都一样
负数存储的时候 存的是补码  例如为  11111111111111111111111111111111（32个1）
其反码应该先减去1              为  11111111111111111111111111111110
原码则为符号位不变 其他求反    为  10000000000000000000000000000001

原码  除了第一位求反----→ 反码  再加一-----→ 补码

typedef 类型定义
typedef unsigned int  odd      odd就为别名

void odd()
{
int a = 1;                 
	a++;           
	printf("%d\n",a);
}
int main()
{                                                  输出结果为五个2
	int i = 0;         
	while (i < 5)
	{
		odd();
		i++;
	}
}

void odd()
{
	static int a = 1; 
	a++;
	printf("%d\n",a);
}
int main()                                        输出结果为2,3,4,5,6,
{
	int i = 0;
	while (i < 5)
	{
		odd();
		i++;

	}

#define MAX 100;  定义标识常量

#define Max(X,Y) (X>Y?X:Y)
等价于
Max (int x,int y)
{
    if (x > y)
	    return x;
	else 
		return y;
}

int main()
{
	int a = 10;
	printf("%p", &a);    输出十六进制 地址
	return 0;
}
int a = 20;
int* p = &a;
printf("%p", &a) == printf("%p", p);
*p = 20 == a = 20

char a = ‘w’;
char* p = &a;

结构体
struct Book
{
	char name[20];
	short price;
};      !!!!一定有分号
int main()
{
	struct Book b1 = {"和路飞开派对",55};
	printf("书名：%s\n",b1.name);
	printf("价格：%d\n",b1.price);
	return 0;
}
struct Book* odd = &b1;
strcpy(b1.name,"好的吧");
b1.price = 888;
	
switch语句
switch(整形)
{
	case 1:
		;
	case 2:
		;
从case进入后，见到break出去！！
	default:
		printf("输入错误！")；
	
在while循环中 
遇到break直接跳出这个while循环，执行下面的语句
遇到continue终止本次循环，continue后的语句不会被执行，进行下一轮循环
			
getchar() putchar() 用法
#include<stdio.h>
int main()
{
	int char = 0
	while((ch=getchar())!=EOF)
	{
		putchar(ch);
		\\printf("%c",ch);
	}
	return 0;
}	
认真学！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int odd[] = { 1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,};
	int hdb = sizeof(odd) / sizeof(odd[0]);
	int left = 0, right = hdb - 1;
	int temp;
	scanf("%d", &temp);
	while (left <= right)
	{
		int mid = (left + right) / 2;
		if (odd[mid] > temp)
			 right = mid-1;
		else if (odd[mid] < temp)
			 left= mid+1;
		else

		{
			printf("get it %d", mid);
			break;
		}
	}
	if (left > right)
		printf("找不到");
}
认真学！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！

Sleep(1000) 睡眠1000ms
	
#include<stdlin.h>
...                                              清屏效果
system("cls");


== 不可以比较两个字符串！
#include<string.h>
    strcmp(zifuchuan,"odd")若一致返回0，不一致返回1！

头文件得调用
写一个odd.h的头文件
int Odd(int a,int b) 写一个申明
再写一个odd.c的源文件
int Odd(int a,int b)
{
	int z = x + y;
	return z;
}
	
#include"odd.h"
		
冒泡排序法，两者比较
void bubble(int arr[],int sz)
{
	int i = 0;
	for (i = 0 ;i< sz - 1; i++)
	{
		int flag = 1;
		int j = 0;
		for(j = 0;j < sz;j++)
		{
			if(arr[j]>arr[j+1])
			{
				int temp = arr[j];
				arr[j] = arr[j+1];
				arr[j] = temp;
				flag = 0;
			}
		}
		if (flag == 1)
			break;
	}
}

一般数组名为数组第一个元素的地址，两种特例
	1 sizeof(数组名) 整个数组的大小，单位字节；
	2 &数组名，取出的整个数组的地址
	  虽然看起来和数组第一个元素的地址一样，+1后向后移动整个数组的大小，&数组名[0]移动这个类型一个元素的大小。
	
	
	
	
	
	
	
	
