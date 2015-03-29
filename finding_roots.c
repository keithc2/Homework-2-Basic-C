{\rtf1\ansi\ansicpg1252\cocoartf1038\cocoasubrtf320
{\fonttbl\f0\fswiss\fcharset0 Helvetica;}
{\colortbl;\red255\green255\blue255;}
\margl1440\margr1440\vieww17020\viewh13900\viewkind0
\pard\tx720\tx1440\tx2160\tx2880\tx3600\tx4320\tx5040\tx5760\tx6480\tx7200\tx7920\tx8640\ql\qnatural\pardirnatural

\f0\fs24 \cf0 //Keith Crosby\
//Created September 15, 2010\
//This program computes the roots of an equation ax^2+bx+c using a, b, c and the quadratic equation\
\
#include<stdio.h>\
#include<math.h>\
\
int main (void)\
\{\
        float a, b, c;                                                                                                                                 //The coefficients of the equation\
        float i, j;                                                                                                                                        //The roots\
        char d;                                                                                                                                         //The character holding the y/n answer\
        d='y';                                                                                                                                            //d is equal to yes\
\
        while (d != 'n' && d != 'N')                                                                                                         //While the user doesn't type n or N loop\
        \{\
                printf("Enter the coefficients of the quadratic equation.\\n");\
                scanf("%f%f%f", &a, &b, &c);\
\
                if(a == 0 || (pow(b, 2)-(4.0*a*c)) <= 0)                                                                         //If a==0 or b^2-(4ac) print "not possible"\
                        printf("Not possible with these coefficients\\n");\
                else                                                                                                                                   //else continue with quadratic equation\
                \{\
                        i=(-b+sqrt(pow(b, 2)-(4*a*c)))/(2.0*a);                                                                //shows the quadratic for x1\
                        j=(-b-sqrt(pow(b, 2)-(4*a*c)))/(2.0*a);                                                                 //shows the quadratic for x2\
                        printf("The roots of the quadratic are: x1=%1.2f and x2=%1.2f\\n", i, j);        //prints x1 and x2\
                \}\
                printf("Do you wish to solve another quadratic equation y/n?\\n");                       //asks user if they wish to continue\
                fflush(stdin);                                                                                                                   //flushes the last saved number\
                scanf("%c", &d);                                                                                                            //scans for a yes (y) or no (n) answer to complete the while loop\
                fflush(stdin);\
        \}\
        return (0);\
\}}