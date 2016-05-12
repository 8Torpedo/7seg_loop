/*
===============================================================================
 Name        : 7_SEG_REC.c
 Author      : $(author)
 Version     :
 Copyright   : $(copyright)
 Description : main definition
===============================================================================
*/

#if defined (__USE_LPCOPEN)
#if defined(NO_BOARD_LIB)
#include "chip.h"
#else
#include "board.h"
#endif
#endif

#include <cr_section_macros.h>

// TODO: insert other include files here

// TODO: insert other definitions and declarations here

int main(void) {

#if defined (__USE_LPCOPEN)
    // Read clock settings and update SystemCoreClock variable
    SystemCoreClockUpdate();
#if !defined(NO_BOARD_LIB)
    // Set up and initialize all required blocks and
    // functions related to the board hardware
    Board_Init();
    // Set the LED to the state of "On"
    Board_LED_Set(0, true);
#endif
#endif

    Chip_GPIO_SetPinDIROutput(LPC_GPIO_PORT, 0, 10);
    Chip_GPIO_SetPinDIROutput(LPC_GPIO_PORT, 0, 11);
    Chip_GPIO_SetPinDIROutput(LPC_GPIO_PORT, 0, 12);
    Chip_GPIO_SetPinDIROutput(LPC_GPIO_PORT, 0, 13);
    Chip_GPIO_SetPinDIROutput(LPC_GPIO_PORT, 0, 14);
    Chip_GPIO_SetPinDIROutput(LPC_GPIO_PORT, 0, 15);
    Chip_GPIO_SetPinDIROutput(LPC_GPIO_PORT, 0, 16);
    Chip_GPIO_SetPinDIROutput(LPC_GPIO_PORT, 0, 17);

    Chip_GPIO_SetPinState(LPC_GPIO_PORT, 0, 16, FALSE);
    // TODO: insert code here


    void zero(){
        Chip_GPIO_SetPinState(LPC_GPIO_PORT, 0, 10, FALSE);
       	Chip_GPIO_SetPinState(LPC_GPIO_PORT, 0, 11, FALSE);
       	Chip_GPIO_SetPinState(LPC_GPIO_PORT, 0, 12, FALSE);
       	Chip_GPIO_SetPinState(LPC_GPIO_PORT, 0, 13, FALSE);
       	Chip_GPIO_SetPinState(LPC_GPIO_PORT, 0, 14, FALSE);
       	Chip_GPIO_SetPinState(LPC_GPIO_PORT, 0, 15, FALSE);
       	Chip_GPIO_SetPinState(LPC_GPIO_PORT, 0, 16, TRUE);
        }

    void one(){
    	Chip_GPIO_SetPinState(LPC_GPIO_PORT, 0, 10, TRUE);
    	Chip_GPIO_SetPinState(LPC_GPIO_PORT, 0, 11, FALSE);
    	Chip_GPIO_SetPinState(LPC_GPIO_PORT, 0, 12, FALSE);
    	Chip_GPIO_SetPinState(LPC_GPIO_PORT, 0, 13, TRUE);
    	Chip_GPIO_SetPinState(LPC_GPIO_PORT, 0, 14, TRUE);
    	Chip_GPIO_SetPinState(LPC_GPIO_PORT, 0, 15, TRUE);
    	Chip_GPIO_SetPinState(LPC_GPIO_PORT, 0, 16, TRUE);
    }

    void two(){
        Chip_GPIO_SetPinState(LPC_GPIO_PORT, 0, 10, FALSE);
       	Chip_GPIO_SetPinState(LPC_GPIO_PORT, 0, 11, FALSE);
       	Chip_GPIO_SetPinState(LPC_GPIO_PORT, 0, 12, TRUE);
       	Chip_GPIO_SetPinState(LPC_GPIO_PORT, 0, 13, FALSE);
       	Chip_GPIO_SetPinState(LPC_GPIO_PORT, 0, 14, FALSE);
       	Chip_GPIO_SetPinState(LPC_GPIO_PORT, 0, 15, TRUE);
       	Chip_GPIO_SetPinState(LPC_GPIO_PORT, 0, 16, FALSE);
        }
    void three(){
        Chip_GPIO_SetPinState(LPC_GPIO_PORT, 0, 10, FALSE);
       	Chip_GPIO_SetPinState(LPC_GPIO_PORT, 0, 11, FALSE);
       	Chip_GPIO_SetPinState(LPC_GPIO_PORT, 0, 12, FALSE);
       	Chip_GPIO_SetPinState(LPC_GPIO_PORT, 0, 13, FALSE);
       	Chip_GPIO_SetPinState(LPC_GPIO_PORT, 0, 14, TRUE);
       	Chip_GPIO_SetPinState(LPC_GPIO_PORT, 0, 15, TRUE);
       	Chip_GPIO_SetPinState(LPC_GPIO_PORT, 0, 16, FALSE);
        }
    void four(){
        Chip_GPIO_SetPinState(LPC_GPIO_PORT, 0, 10, TRUE);
       	Chip_GPIO_SetPinState(LPC_GPIO_PORT, 0, 11, FALSE);
       	Chip_GPIO_SetPinState(LPC_GPIO_PORT, 0, 12, FALSE);
       	Chip_GPIO_SetPinState(LPC_GPIO_PORT, 0, 13, TRUE);
       	Chip_GPIO_SetPinState(LPC_GPIO_PORT, 0, 14, TRUE);
       	Chip_GPIO_SetPinState(LPC_GPIO_PORT, 0, 15, FALSE);
       	Chip_GPIO_SetPinState(LPC_GPIO_PORT, 0, 16, FALSE);
        }
    void five(){
        Chip_GPIO_SetPinState(LPC_GPIO_PORT, 0, 10, FALSE);
       	Chip_GPIO_SetPinState(LPC_GPIO_PORT, 0, 11, TRUE);
       	Chip_GPIO_SetPinState(LPC_GPIO_PORT, 0, 12, FALSE);
       	Chip_GPIO_SetPinState(LPC_GPIO_PORT, 0, 13, FALSE);
       	Chip_GPIO_SetPinState(LPC_GPIO_PORT, 0, 14, TRUE);
       	Chip_GPIO_SetPinState(LPC_GPIO_PORT, 0, 15, FALSE);
       	Chip_GPIO_SetPinState(LPC_GPIO_PORT, 0, 16, FALSE);
        }
    void six(){
        Chip_GPIO_SetPinState(LPC_GPIO_PORT, 0, 10, FALSE);
        Chip_GPIO_SetPinState(LPC_GPIO_PORT, 0, 11, TRUE);
        Chip_GPIO_SetPinState(LPC_GPIO_PORT, 0, 12, FALSE);
        Chip_GPIO_SetPinState(LPC_GPIO_PORT, 0, 13, FALSE);
        Chip_GPIO_SetPinState(LPC_GPIO_PORT, 0, 14, FALSE);
        Chip_GPIO_SetPinState(LPC_GPIO_PORT, 0, 15, FALSE);
        Chip_GPIO_SetPinState(LPC_GPIO_PORT, 0, 16, FALSE);
            }
    void seven(){
        Chip_GPIO_SetPinState(LPC_GPIO_PORT, 0, 10, FALSE);
        Chip_GPIO_SetPinState(LPC_GPIO_PORT, 0, 11, FALSE);
        Chip_GPIO_SetPinState(LPC_GPIO_PORT, 0, 12, FALSE);
        Chip_GPIO_SetPinState(LPC_GPIO_PORT, 0, 13, TRUE);
        Chip_GPIO_SetPinState(LPC_GPIO_PORT, 0, 14, TRUE);
        Chip_GPIO_SetPinState(LPC_GPIO_PORT, 0, 15, TRUE);
        Chip_GPIO_SetPinState(LPC_GPIO_PORT, 0, 16, TRUE);
            }
    void eight(){
        Chip_GPIO_SetPinState(LPC_GPIO_PORT, 0, 10, FALSE);
        Chip_GPIO_SetPinState(LPC_GPIO_PORT, 0, 11, FALSE);
        Chip_GPIO_SetPinState(LPC_GPIO_PORT, 0, 12, FALSE);
        Chip_GPIO_SetPinState(LPC_GPIO_PORT, 0, 13, FALSE);
        Chip_GPIO_SetPinState(LPC_GPIO_PORT, 0, 14, FALSE);
        Chip_GPIO_SetPinState(LPC_GPIO_PORT, 0, 15, FALSE);
        Chip_GPIO_SetPinState(LPC_GPIO_PORT, 0, 16, FALSE);
            }
    void nine(){
        Chip_GPIO_SetPinState(LPC_GPIO_PORT, 0, 10, FALSE);
        Chip_GPIO_SetPinState(LPC_GPIO_PORT, 0, 11, FALSE);
        Chip_GPIO_SetPinState(LPC_GPIO_PORT, 0, 12, FALSE);
        Chip_GPIO_SetPinState(LPC_GPIO_PORT, 0, 13, TRUE);
        Chip_GPIO_SetPinState(LPC_GPIO_PORT, 0, 14, TRUE);
        Chip_GPIO_SetPinState(LPC_GPIO_PORT, 0, 15, FALSE);
        Chip_GPIO_SetPinState(LPC_GPIO_PORT, 0, 16, FALSE);
            }
    // Force the counter to be placed into memory
    volatile static int number = 0 ;
    int iteration = 0;
    // Enter an infinite loop, just incrementing a counter
    while(1) {
    	/*
    	 * Switch witch number will be displayed
    	 */
    	switch(number)
    	{
    	case 0:
    		zero();
    		break;
    	case 1:
    		one();
    		break;
    	case 2:
    		two();
    		break;
    	case 3:
    		three();
    		break;
    	case 4:
    		four();
    		break;
    	case 5:
    		five();
    		break;
    	case 6:
    		six();
    		break;
    	case 7:
    		seven();
    		break;
    	case 8:
    		eight();
    		break;
    	case 9:
    		nine();
			break;
    	default:
    		puts("ERROR. INTERRUPT");
    		return 0;
    	}
    	/*
    	 * Delay loop
    	 */
    	for(iteration=0; iteration<=1000000; iteration++)
    	{;
    	}
    	/*
    	 * Checking number
    	 */
        if (number<=8)
        {
        	number++ ;
        }
        else
        {
        	number=0;
        }
    }
    return 0 ;
}
