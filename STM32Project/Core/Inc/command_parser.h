#include <stdint.h>
#ifndef INC_COMMAND_PARSER_H_
#define INC_COMMAND_PARSER_H_

void command_parser_fsm () ;
unsigned char get_flag () ;
char * get_command () ;
void clear_command () ;

extern uint8_t temp ;

#endif /* INC_COMMAND_PARSER_H_ */
