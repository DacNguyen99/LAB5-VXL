#ifndef INC_TIMER_H_
#define INC_TIMER_H_

void setTimer0 (int duration ) ;
void setTimer1 (int duration ) ;
void timer_run () ;
//void HAL_TIM_PeriodElapsedCallback ( TIM_HandleTypeDef * htim ) ;
int timer0_counter ;
int timer0_flag ;
int TIMER_CYCLE ;
int timer1_counter ;
int timer1_flag ;

#endif /* INC_TIMER_H_ */
