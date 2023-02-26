


/*

TIMER ZERO BASED ON C ATMEGA 32

*/

#include"STD_TYPES.h"
#include"TIMERZZER_PRIV.h"
#include"DIO_interface.h"

void (*TIMER0_CALL_BACK_OVF)(void) = 0;

void TIMERZER0_INIT()
{
	
	/* TCCR0 REGISTER */
	
	TCCR0 |= 1 << 2 ;
	
	/* SETTING GLOBAL INTRUPT ENABLE */
	SREG |= 1 << 7;

	
	/* SETTING UP INTRUPT TIMERZER0 */
	
	TIMSK |= 1 << 0;
	
	/* PRELOAD VALUE */
	
	TCNT0 = 238;
	
}


void TIMER0_OFF()
{
	TIMSK = 0;
	TCCR0 = 0;
	TCNT0 = 0;
}

void TIMER0_CALL_BACKOVF( void (*PTR_CONFIG) (void) )
{
	if( PTR_CONFIG != 0)
	{
		TIMER0_CALL_BACK_OVF = PTR_CONFIG;
	}
}


//void (*TIMER0_CALL_BACK_OVF)(void) = 0;

/* INTRUPT FUNCTION */

void __vector_11(void)  __attribute__((signal));

void __vector_11(void)
{
	if(TIMER0_CALL_BACK_OVF != 0)
	{
		TIMER0_CALL_BACK_OVF();
	}
}
  


