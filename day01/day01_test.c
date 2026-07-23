#include <stdio.h>

int main() 
{
	printf("hello world\n");
	printf("hi leon\n");
	//printf('haha');		//报错，但是前面的代码会执行，这个后面的不会，''只能包裹单个字符
	printf("%d\n", 500);
	printf("%d\n", 100);
	printf("%c\n", "ab");
	printf("%s\n", "ab");
	printf("%c\n", 's');
	printf("%f\n",2.546);	// %f 默认输出 6 位小数
	printf("%4f\n",2.5465614891);	// %.nf n替换为数字可以控制小数位数
	return 0;
}

//部分占位符解释
/*
%d  有符号十进制整数
%c  单个字符
%s	字符串（以 \0 结尾的字符数组）
%f	十进制小数形式的 float 或 double（默认输出 6 位小数）
*/