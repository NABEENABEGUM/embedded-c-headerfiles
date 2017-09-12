#include <xc.h>
#include "digital.h"
#define _XTAL_FREQ 20000000

__CONFIG(DEBUG_OFF & LVP_OFF & FCMEN_OFF & IESO_OFF & BOREN_OFF & CPD_OFF & CP_OFF & MCLRE_ON &PWRTE_ON & WDTE_OFF & FOSC_HS);
__CONFIG(WRT_OFF & BOR4V_BOR40V);
void setup(void)
{
    pinMode(PD3,OUTPUT);
}
void main(void) {
    void setup();
    digitalWrite(PD3, HIGH);
    __delay_ms(1000);
    digitalWrite(PD3,LOW);
    __delay_ms(1000);
    return;
}