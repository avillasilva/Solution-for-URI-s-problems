#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);
	
	if(a > b && b > c)
	printf("%d\n%d\n%d\n", c, b, a);

	else if(a > c && c > b)
	printf("%d\n%d\n%d\n", b, c, a);
	
	else if(b > a && a > c)
	printf("%d\n%d\n%d\n", c, a, b);
	
	else if(b > c && c > a)
	printf("%d\n%d\n%d\n", a, c, b);
	
	else if(c > a && a > b)
	printf("%d\n%d\n%d\n", b, a, c);
	
	else if(c > b && b > a)
	printf("%d\n%d\n%d\n", a, b, c);
	
	printf("\n%d\n%d\n%d\n", a, b, c);
	return 0;
}
