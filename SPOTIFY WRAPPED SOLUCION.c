#include<stdio.h>

int main()
{
	float totalHoras = 0;
	float horasMaximas = 0;
	int cancionTop = 0;
	int i = 1;
	int N;
	float H;
	
	scanf("%d", &N);
	do
	{
		scanf("%f", &H);
		if (horasMaximas < H)
		{
			horasMaximas = H;
			cancionTop = i;
		}
		totalHoras += H;
		i++;
	} while(i <= N);
	printf("%.0f\n", totalHoras);
	printf("%.0f\n", totalHoras / N);
	printf("%d %.0f\n", cancionTop, horasMaximas);
	if (horasMaximas > 1000)
		printf("Gran exito!\n");
return 0;
}
