 /*
 *  Created on: 22/09/2019
 *      Author: kevin
 */

#include "main.h"
#include "pacemaker.h"

//button interrupt function for ASense and VSense
void button_interrupt(void* context, alt_u32 id) {

	VSense = !(IORD_ALTERA_AVALON_PIO_DATA(BUTTONS_BASE) & 1<<0);
	ASense = !(IORD_ALTERA_AVALON_PIO_DATA(BUTTONS_BASE) & 1<<1);

	IOWR_ALTERA_AVALON_PIO_EDGE_CAP(BUTTONS_BASE, 0);
}

int main(){
	reset();
	while(1){
		void* context = 0;
		//clear edge capture register
		IOWR_ALTERA_AVALON_PIO_EDGE_CAP(BUTTONS_BASE, 0);
		//enable interrupts for all buttons
		IOWR_ALTERA_AVALON_PIO_IRQ_MASK(BUTTONS_BASE, 0x7);
		//register the button interrupt ISR
		alt_irq_register(BUTTONS_IRQ, context, button_interrupt);

		tick();
	}
}





