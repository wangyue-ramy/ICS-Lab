#include <stdio.h>
#include <stdlib.h>
#include <string.h>

extern int (*proc)(char*, int);
extern int (*cipher)(const char*, char*, int);
extern const char rUiKbt[];

const char codtab[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/";
const unsigned char HKiTfy = 0XBF;

void challenge(char* buf, int len)
{
	char resbuf[32];
	strcpy(resbuf, rUiKbt); //Or, use constant key string such as: strcpy(resbuf, "111111111");

	(*cipher)(buf, resbuf, 32);
	
	(*proc)(resbuf, 32);
	
	strcpy(buf, resbuf); 
}
