
#include <stdio.h>

int gugudan(int a);

int main()
{

	gugudan(9);

	return 0;
}



int gugudan(int a)
{
	if (a <= 0)
		return;


	//printf("2 X %d = %d\n", a, 2 * a);
	gugudan(a - 1);
	printf("2 X %d = %d\n", a, 2 * a);

	return a;




}








