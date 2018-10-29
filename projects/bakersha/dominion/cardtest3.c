/*******************************************************
 * Name: 
 * 		cardtest3.c
 * Description: 
 * 		Unit test suite for council_room card
 * Author: 
 * 		Sharaya Baker (bakersha) - October 28, 2018
 *******************************************************/

#include "dominion.h"
#include "dominion_helpers.h"
#include <string.h>
#include <stdio.h>
#include <assert.h>
#include "rngs.h"
#include <stdlib.h>

#define TESTCARD "council_room"

void myAssert(x,y)
{
	if (x == y)
		printf("TEST PASSED!\n");
	else
		printf("TEST FAILED!\n");
}

int main()
{
	printf("\n---------------------- Council Room Unit Tests ---------------------\n");	
	printf("------- No tests performed. -------\n\n");
	return 0;
}