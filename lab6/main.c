#include <stdio.h>
#include <stdbool.h>
int main()
{
	// вар 22
	int N = 10; // переменная для кол-ва элементов в массиве
	int massive[N];
	int d1, d2;
	int counter = 0;
	d1 = 5;
	d2 = 20;	
	bool tru;
	for(int i = 0; i <= N; i++){ // номер числа массива	 
	 for(int k = d1; k <= d2; k++){ // число из диапозона
	   tru = true;
	  for(int l = 2; l < k; l++){   // проверка числа на простоту 
		float rem = k % l; 
		if(rem == 0){ // если число поделилось нацело, меняется значение для проверки и выходит из цикла
		   tru = false;
		   break;
			}}
	 if (tru == true)
	 	for (int i2 = 0; i2 <= N; i2++) { // проверка что данного числа еще не было в массиве 
	 	if (massive[i2] == k) 
	 		tru = false;
	 	}
	 if (tru == true){ // заполнение элемент массива простым числом из диапозона
	 	massive[i] = k;
		counter++; // счетчик инициализированых элементов
		break;
		}}
	}
	for(int i = counter; i < N; i++) // инициализация пустых элементов массива нулями по счетчику заполненных элем.
		massive[i] = 0;
	for(int i = 0; i < N; i++)



	printf("%d ", massive[i]);
	printf("\n");
}
