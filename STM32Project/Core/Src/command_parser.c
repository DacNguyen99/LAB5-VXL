# include "command_parser.h"
# include "main.h"

UART_HandleTypeDef huart2 ;

# define MAX_COMMAND_SIZE 30
uint8_t index_command = 0;
uint8_t command [ MAX_COMMAND_SIZE ]; // Declare a variable to store the input string with max size = 30
unsigned char flag_command = 0;
enum state_command { START , END };
enum state_command currentState = START ;

void command_parser_fsm () {
	switch ( currentState ) {
		case START :
			if(temp == '!')
			{
				currentState = END ;
				index_command = 0;
				command [0] = '\0'; // Reset command
			}
			break ;
		case END :
			if( temp == '#') {
				currentState = START ;
				command [ index_command ] = '\0';
				flag_command = 1; // Mark a command as complete
			} else {
				command [ index_command ++] = temp ; // Store input string command []
				if( index_command >= MAX_COMMAND_SIZE ) index_command = 0;
				flag_command = 0;
			}
			break ;
		default :
			break ;
	}
}

unsigned char get_flag () {
	return flag_command ;
}

char * get_command () {
	return command ;
}

void clear_command () {
	command [0] = '\0';
}

