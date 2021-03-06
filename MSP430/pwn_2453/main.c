#include <msp430.h>
int main(void) {
    WDTCTL = WDTPW | WDTHOLD;
    P1DIR |= 0x40;             // P1.6 to output
     P1SEL |= 0x40;             // P1.6 to TA0.1
     CCR0 = 2499;             // PWM Period
     CCTL1 = OUTMOD_7;
     CCR1 =500;// CCR1 PWM duty cycle
     TACTL = TASSEL_2 + MC_1  + ID_3;   // SMCLK, up mode, prescale by 8s
	return 0;
}
