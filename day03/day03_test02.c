#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*赋值操作符
int main() {
	
	int a = 0;		//初始化
	int b = 15;
	a = 10;			//赋值
	a += 3;
	b -= 12;
	int c = ++a;

	char c1 = 'x';
	char c2 = 'y';
	c1 = c2;
	c2 = 'z';

	printf("a的值是：%d\nb的值是：%d\n", a, b);
	printf("c1是：%c\nc2是：%c\n", c1, c2);
	printf("++a的结果c是：%d\n", c);
	
	return 0;
}
*/



/*单目操作符 ++ -- 正(+) 负(-)
int main() {

	int a = 12;		//13  
	int b = ++a;	//13  a先+1，后使用
	int x = 12;		//11  
	int y = x--;	//12  x先使用，后-1

	printf("a的值是：%d\nb的值是：%d\n", a, b);
	printf("x的值是：%d\ny的值是：%d\n", x, y);
	printf("--------------------\n");

	int m = -4;
	printf("m的结果是: %d\n", m);
	printf("取正的结果是: %d\n", +m);
	printf("取负的结果是: %d\n", -m);

	return 0;
}
*/


/*强制类型转换
int main() {

	int n = (int)3.14;		// 强制截断小数部分
	printf("%d\n", n);

	int a = 14;
	int b = 3;
	float r = (float)a / b;
	printf("转换后的求值结果是: %f\n", r);

	return 0;
}
*/


/*问题表达式
int main() {
	int i = 1;
	int r = (++i) + (++i) + (++i);  // 问题表达式！
	printf("r = %d\n", r);          // 不同编译器结果可能不同（如 9、10、12 等）
	return 0;
}
*/