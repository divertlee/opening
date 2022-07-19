#include<stdio.h>
//int main()
//{
//	//int a = 988;
//	//printf("%d\n", a);//%d- 有符号的十进制整形
//	//printf("%ld\n", a);//%ld-十进制长整形
//	//printf("%5d\n", a);//%nd,n-位数-数值小于位数在左边补齐（剩余）空格
//	//printf("%-5d\n", a);//%nd,-n-位数-数值小于位数在右边补齐（剩余）空格
//	//printf("%05d\n", a);//%0nd,n-位数-数值小于位数在左边补齐（剩余）0
//	int b = 56;
//	printf("%u\n", b);//%u-无符号十进制整形
//	printf("%lu\n", b);//%u-无符号十进制长整形
//	printf("%o\n", b);//%o-无符号八进制整形
//	printf("%lo\n", b);//%o-无符号八进制长整形
//	printf("%x\n", b);//%x-无符号十六进制整形
//	printf("%lx\n", b);//%lx-无符号十六进制长整形
//}
//}
int main()
{
	float c = 6.666666;
	printf("%f\n", c);
	printf("%2.2f", c);//0.2-m.n-m-位数（数值小于位数，在左边补齐（剩余的）空格，n-小数点后面n位（不够就四舍五入补齐）

}