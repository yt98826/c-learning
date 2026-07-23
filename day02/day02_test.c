#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdbool.h>	//_Bool类型需要的头文件
#include <limits.h>		//用于查看整数极限
#include <float.h>		//用于查看浮点极限
#include <string.h>		//strlen 函数需要


/*基础数据类型演示
int main() {
	char ch = 'x';
	int a = 96;
	float f = 3.1415f;		//可以用 %.nf 来控制小数位数
	double d = 2.124;		//默认六位小数，不够后面补0
	_Bool flag = true;		//如果是false，则打印 0
	
	printf("字符型是：%c\n整型是：%d\n单精度浮点型是：%.5f\n双精度浮点型是：%f\n布尔类型是：%d\n", ch, a, f, d, flag);
	return 0;
}
*/


/*类型修饰符演示
int main() {
	// ===================== 1. 长度修饰符 =====================
	short int s = 100;
	long int l = 2147483647L;
	long long int ll = 9223372036854775807LL;
	
	printf("s: %d\n", s);
	printf("l: %ld\n", l);
	printf("ll: %lld\n", ll);		//%d期望的是int，4字节，如果是太长了会截断
	printf("---------------------\n");

	
	//%zu 是专门用来打印 sizeof 计算结果的 占位符
	printf("char:        %zu\n", sizeof(char));			//1
	printf("_Bool:       %zu\n", sizeof(_Bool));		//1
	printf("short:       %zu\n", sizeof(short));		//2
	printf("int:         %zu\n", sizeof(int));			//4
	printf("long:        %zu\n", sizeof(long));			//4
	printf("long long:   %zu\n", sizeof(long long));	//8
	printf("float:       %zu\n", sizeof(float));		//4
	printf("double:      %zu\n", sizeof(double));		//8
	printf("long double: %zu\n", sizeof(long double));	//8
	printf("---------------------\n");

	// ===================== 2. 符号修饰符 =====================
	signed int si = -10;
	unsigned int ui = 10;
	signed char sc = -1;
	unsigned char uc = 255;
	printf("signed int: %d\n", si);
	printf("unsigned int: %u\n", ui);
	printf("signed char: %d\n", sc);
	printf("unsigned char: %u\n", uc);
	printf("---------------------\n");

	unsigned int u = 0;
	printf("无符号溢出演示(循环下溢): u = %u, u - 1 = %u\n", u, u - 1);   // u = 0, u - 1 = 4294967295(UINT_MAX)
	printf("---------------------\n");


	// ===================== 3. 使用 <limits.h> 打印精确极限值 =====================
	printf("SHRT_MAX  = %d\n", SHRT_MAX);
	printf("INT_MAX   = %d\n", INT_MAX);
	printf("LONG_MAX  = %ld\n", LONG_MAX);
	printf("LLONG_MAX = %lld\n", LLONG_MAX);
	printf("UINT_MAX  = %u\n", UINT_MAX);
	printf("ULONG_MAX = %lu\n", ULONG_MAX);

	return 0;
}
*/


/*ASCII字符集和转义字符
int main() {
	//码表示例
	printf("%c\n", 'b');	//b
	printf("%d\n", 'b');	//98
	printf("%c\n", 98);		//b
	printf("---------------------\n");


	//转义序列
	printf("\'a\'bc\"de\"fghi\\jklmn\n");
	printf("到这里响起了警报\a\n");
	printf("---------------------\n");

	printf("(are you ok\?\?)\n");		//(are you ok??)  最后三个“??)”这个内容在以前会被解析为“]”  -> (are you ok]
	printf("---------------------\n");

	printf("opqrst\b\b");
	printf("xyz\n");
	printf("---------------------\n");

	printf("abcdef\r");
	printf("a\tbc\tdef\tghix\tyyyyyy\n");
	printf("---------------------\n");

	printf("%c\n", '\130');		//八进制，转换成十进制是 88
	printf("%c\n", '\x30');		//十六进制，转换成十进制是 48
	return 0;
}
*/


/*练习
int main() {
	printf("%zu\n", strlen("c:\add\test\007\vip.c"));	//15
	printf("c:\\test\\test.c");
	return 0;
}
*/


