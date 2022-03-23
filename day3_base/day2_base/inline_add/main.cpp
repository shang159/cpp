#include <stdio.h>

int main()
{
	int a = 19;
	int b = 29;
	int c = 0;
	printf("%x", &c);
	_asm {
		mov eax, a;
		add eax, b;
		mov c, eax;
	}
	printf("\n%d", c);
	

}