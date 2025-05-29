#include <stdio.h>
#include <stdbool.h>

#include "modules/colors.h"
#include "settings/settings.h"
int main(){
	for (int i = 0;i<ENTRANCE_DASH_NUMBER;i++){
		printf(RED "-");
	}
	printf("\n");
	printf(RED "%s\n", ENTRANCE_LOGO);
		for (int i = 0;i<ENTRANCE_DASH_NUMBER;i++){
		printf(RED "-");
	}
	printf("\n");
}
