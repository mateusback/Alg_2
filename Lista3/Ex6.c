#include <stdio.h>
#include <stdio.h>

int main (void) {
	float cont, x, media;
	for (int i = 0; i < 10; i++)
	{
	printf("Informe um valor:");
	scanf("%f", &x);
	cont = cont + x;
	}
	media = cont / 10;
	printf("A media entre os valores eh: %.2f", media);
	return 0;
}