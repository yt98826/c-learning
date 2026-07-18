#include <stdbool.h>
#include <stdio.h>

int main()
{
	_Bool flag = true;		//false or true
	//bool flag = true;		//也可以使用 bool 这样定义，这个在文件定义过了，相当于起了个别名
	if (flag)
		printf("I love c\n");

	return 0;
}