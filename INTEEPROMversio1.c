


/**

AUTHOR : Ahmed Salem 



Description : Driver Code For Internal EEPROM 

Vesrion : 1 

Date : 1/2/2023

**/

#include"BIT_MATH.h"
#include"STD_TYPES.h"
#include"InternalEEpromPriv.h"



/*

Registers group : 

EEARL,EEARH
EEDR
EECR

*/

u8 Inter_EEPROMRead(u16 Address)
{
	while(GET_BIT(EECR,EEWE) == 1){}
		EEAR = Address;
		SET_BIT(EECR,EERE);
		return EEDR;
}


void Inter_eepromWrite(u16 Address,u8 Data)
{
	while(GET_BIT(EECR,EEWE) == 1){}
		EEAR = Address;
		EEDR = Data;
		SET_BIT(EECR, EEMWE);
		SET_BIT(EECR, EEWE);
	
}
















