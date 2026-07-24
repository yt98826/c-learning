#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


/*加法、减法、乘法
int main() {
	int a = 12;
	int b = 15;
	int z1 = a + b;
	int z2 = a - b;
	int z3 = a * b;

	printf("加法结果是：%d\n减法结果是：%d\n乘法结果是：%d", z1, z2, z3);
	return 0;

}
*/



/*除法
int main() {
	int a = 9;
	int b = 2;
	int r1 = a / b;
	double r2 = 7.0f / 2;
	float r3 = 15.5f / 4;

	printf("整数除法结果是：%d\n", r1);		//整除，只会返回整数部分，丢弃小数部分
	printf("浮点数除法结果是：%.2f\n", r2);	//两个运算数至少一个为浮点数才进行浮点数除法
	printf("浮点数除法结果是：%.8f\n", r3);	
	
	return 0;
}
*/


/*取余
int main() {

	printf("%d\n", 12 % 5);		//2    取余只能用于整数  不能用于浮点数
	printf("%d\n", -12 % 5);	//-2   取余结果的正负号  由第一个运算数的正负决定
	printf("%d\n", 12 % -5);	//2
	printf("%d\n", -12 % -5);	//-2

	return 0;
}
*/



/*练习 1
int main() {
	
	//计算正整数的最后一位，即个位数字
	int x = 1532;
	printf("个位数是：%d\n", x % 10);

	return 0;
}
*/


/*练习 2
int main() {

	//计算任意两个整数的平均值，结果是小数
	int x = 0;
	int y = 0;

	printf("请输入要计算的两个整数：\n");
	scanf("%d %d", &x, &y);

	printf("平均数是：%f\n", (x + y) /2.0);

	return 0;
}
*/

