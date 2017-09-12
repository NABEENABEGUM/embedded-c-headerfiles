/*
 * File:   DIO.c
 * Author: nabee
 *
 * Created on 12 September, 2017, 5:17 PM
 */


#include <xc.h>

void pinMode(unsigned int pin, unsigned int state)
{
    if(pin == 19)
    {
        TRISD0 = state;
    }
    else if (pin == 20)
    {
        TRISD1 = state;
    }
     else if (pin == 21)
    {
        TRISD2 = state;
    }
    else if (pin == 22)
    {
        TRISD3 = state;
    }
    else if (pin == 27)
    {
        TRISD4 = state;
    }
    else if (pin == 28)
    {
        TRISD5 = state;
    }
    else if (pin == 29)
    {
        TRISD6 = state;
    }
    else if (pin == 30){
        TRISD7 = state;
    }
}
void digitalWrite(unsigned int pin, unsigned int state)
{
     if(pin == 19)
    {
        RD0 = state;
    }
    else if (pin == 20)
    {
        RD1 = state;
    }
     else if (pin == 21)
    {
        RD2 = state;
    }
    else if (pin == 22)
    {
        RD3 = state;
    }
    else if (pin == 27)
    {
        RD4 = state;
    }
    else if (pin == 28)
    {
        RD5 = state;
    }
    else if (pin == 29)
    {
        RD6 = state;
    }
    else if (pin == 30){
        RD7 = state;
    }
}
unsigned int digitalRead(unsigned int pin)
{
    if(pin == 19)
    {
        return(RD0);
    }
    else if (pin == 20)
    {
        return(RD1);
    }
     else if (pin == 21)
    {
       return(RD2);
    }
    else if (pin == 22)
    {
        return(RD3);
    }
    else if (pin == 27)
    {
        return(RD4);
    }
    else if (pin == 28)
    {
        return(RD5);
    }
    else if (pin == 29)
    {
        return(RD6);
    }
    else if (pin == 30){
        return(RD7);
    }
}