#ifndef TIMERINTERFACE_PRIV_H
#define TIMER_INTERFACE_PRIV_H

void TIMERZER0_INIT();
void __vector_11(void) __attribute__((signal));

void TIMER0_CALL_BACKOVF( void (*PTR_CONFIG) (void) );
void TIMER0_OFF();

#endif

