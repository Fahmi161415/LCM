#include<stdio.h>
 
int main()
{
	int n1 , n2;
	printf("Enter first number: ");
	scanf("%d", &n1);
	printf("Enter second number: ");
	scanf("%d", &n2);
	printf("LCM= %d", lcm(n1, n2));
}

int lcm(int a, int b)
{
	static int m=0;
	m=m+b;
	if(m%a==0 && m%b==0)
	     return m;
	return lcm(a,b);
}
