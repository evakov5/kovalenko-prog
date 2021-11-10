#include <stdio.h>
int main()
{
	//вар 22
	int k, m, n;
	k = 40;
	m = 10;
	n = 30;
	int kk = m;
	if (k > m){
	m = k;
	k = kk; }
	if (n < m){
	kk = m;
	m = n;
	n = kk;}
	int tru;
	if ( k <= m && m <= n)
	tru = 1;
	else
	tru = 0;
}
