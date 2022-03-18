#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main(int argc, char *argv[]) {
	time_t sec =0;
	printf("Cuantos segundos quieres calcular? \n");
	scanf("%d", &sec);
	struct tm *gm_time = gmtime(&sec);
	printf("%d hora  %d minutos  %d segundos", gm_time->tm_hour,gm_time->tm_min,gm_time->tm_sec);

	return 0;
}
