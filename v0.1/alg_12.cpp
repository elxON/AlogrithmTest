//微软面试一百题系列
//NO.0011
/* 
题目：求 1+2+…+n， 要求不能使用乘除法、for、while、if、else、switch、case  等关键字以及条件判断语句 （A?B:C）。 ANSWER: 1+..+n=n*(n+1)/2=(n^2+n)/2 it is easy to get x/2, so the problem is to get n^2 though no if/else is allowed, we can easilly go around using short-pass. using macro to make it fancier: 
*/

#define T(X, Y, i) (Y & (1<<i)) && X+=(Y<<i)
int foo(int n)
{
	int r = n;
	T(r, n, 0);
	T(r, n, 1);
	T(r, n, 2);
	...
	T(r, n, 31);
	return r >> 1;
}