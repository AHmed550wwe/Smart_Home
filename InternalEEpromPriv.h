#ifndef INTERNALEEPRONPRIV_H
#define INTERNALEEPRONPRIV_H


#define EEDR  *((volatile u8 *)(0x3D))

#define EECR  *((volatile u8 *)(0x3C))

#define EEARH  *((volatile u8 *)(0x3F))



#define EEARL  *((volatile u8 *)(0x3E))

#define EEAR  *((volatile u8 *)(0x3F))


#define EEMWE 2
#define EERE  0
#define EEWE  1

#endif
