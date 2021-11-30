#include <stdio.h>
int main()
{
	//вар 17 Знайти найближче просте число, що більше заданого.
	int num = 50;
	int i;
	for (i = num + 1; ; i++)
	{ 
	int tru = 0;
		for (int k = 2; k < num ; k++){		
		float rem = i % k;
		if (rem == 0){
		tru = 1;
		break;}
		}
	if (tru == 0)
		break;
	}
	printf ("%d\n", i);
	// вар 18 Для заданого цілого числа визначити подвійний факторіал. 
	int num2 = 10;
	int fact = num2;
	for (int k = num2 - 2; k > 0; k = k - 2)
	{
	 fact = fact * k;
	}
	printf ("%d\n", fact);
}
