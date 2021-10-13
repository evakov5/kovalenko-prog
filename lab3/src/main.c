#include <stdio.h>
int main()
{
	int x = 50;
	int y = 56;
	int n = (y - x) + 1;
	int s = (x + y)/2;
	s = s*n;
	printf("Сума значений в диапазоне равна %d\n", s);
}
