#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*创建变量、初始化及赋值
int main() {
	char ch = 'x';
	int num = 100;
	float score = 95.5f;
	double math = 85.5;		// 变量初始化
	math = 87.5;			// 赋值
	return 0;
}
*/


/*全局变量与局部变量
int num1;			// 全局变量

int main() {
	int num2 = 0;	// 局部变量，最好初始化，避免使用未初始化的垃圾值
	printf("%d\n", num1);
	printf("%d\n", num2);
	return 0;
}
*/


/*字面常量
int main() {
	printf("%d\n", 38);
	printf("%d\n", 031);	//八进制
	printf("%d\n", 0x2F);	//十六进制
	return 0;
}
*/


/*符号常量
#define M 100
#define PI 3.1415926

int main() {
	printf("%d\n", M);

	double max = PI;
	printf("%f\n", max);
	return 0;
}
*/


/*const修饰的常变量
int main() {
	const int num3 = 24;
	printf("更改之前的num3：%d\n", num3);

	//num3 = 48;	//报错
	printf("更改之后的num3：%d\n", num3);
	return 0;
}
*/


/*练习
int main() {
	int a = 0;
	int b = 0;

	//输入两个整数
	scanf("%d %d", &a, &b);

	//返回计算结果
	printf("求和结果是: %d\n", a + b);
	printf("求差结果是: %d\n", a - b);
	printf("求积结果是: %d\n", a * b);
	printf("求商结果是: %d\n", a / b);


	return 0;
}
*/