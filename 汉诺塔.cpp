#include<stdio.h>
#include<string.h>
void move(char A,int n,char B)
{
	printf(" %d ??%cŲ??%c\n,n,A,B");
}
void Hanoi(int n,char A,char B,char C)
{
	if(n==1)
		move(A,1,C);
	else
	{
		Hanoi(n-1,A,C,B);
		move(A,n,C);
		Hanoi(n-1,B,A,C); 
	 } 
}
int main()
{
	int a;
	char A='A',
		 B='B',
		 C='C';
		 printf("?????뺺ŵ????????");
		 scanf("%d,&a");
		 Hanoi(a,A,B,C);
		 return 0; 
 } 
