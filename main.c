#include <stdio.h>
#include <stdbool.h>

#include "modules/colors.h"
#include "settings/settings.h"
#include "functions/python.h"

char user_operator_choice[INPUT_SIZE];

int main(){
	for (int i = 0;i<ENTRANCE_DASH_NUMBER;i++){
		printf(RED "-");
	}
	printf("\n");
	printf(RED ENTRANCE_LOGO);
		for (int i = 0;i<ENTRANCE_DASH_NUMBER;i++){
		printf(RED "-");
	}
	printf("\n");
	
	while (true){
		printf(YELLOW "\nEnter operation:");
		printf(LIGHTYYELLOW 
			TAB_SPACE "1. Addition (+)\n" 
			TAB_SPACE "2. Substraction (-)\n" 
			TAB_SPACE "3. Multiplication (*)\n" 
			TAB_SPACE "4. Division (/)\n");
		
		printf(
			CYAN "\nOr type " MAGENTA "'f' " CYAN "for " BLUE "mathematical functions" CYAN "(in development) or " MAGENTA "'q'" CYAN " to " RED "quit" CYAN ": " RESET);
		get_input(user_operator_choice,INPUT_SIZE);
		printf("\n%s",user_operator_choice);
		
	}
}
