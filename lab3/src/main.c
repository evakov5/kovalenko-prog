#include <stdio.h>
int main()
{
	int x,y,z;
	printf("Введите значения для диапозона из двух чисел\n");
	scanf("%d",&x);
	scanf("%d",&y);
	if (x > y) {
	z = x;
	x = y;
	y = z;
	}
	printf("Диапазон с %d до %d\n", x,y);
	z = 0;
	for (; x < y; ){
	int c = x + 1;
	if (z == 0)
	z = x + c;
	else z = z + c; 
	x++;
	}
	printf("Сума значений в диапазоне равна %d\n", z);
}
