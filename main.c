#include <stdio.h>

extern int add(int x, int y);

int main(){
	int res = 0;

	printf("Hello, World\n");
	res = add(0xF0, 0x0F);
	printf("result of adding 1 and 2 = %x\n", res);
}
