{\rtf1\ansi\ansicpg1252\cocoartf1038\cocoasubrtf320
{\fonttbl\f0\fswiss\fcharset0 Helvetica;}
{\colortbl;\red255\green255\blue255;}
\margl1440\margr1440\vieww17360\viewh14080\viewkind0
\pard\tx720\tx1440\tx2160\tx2880\tx3600\tx4320\tx5040\tx5760\tx6480\tx7200\tx7920\tx8640\ql\qnatural\pardirnatural

\f0\fs24 \cf0 //Keith Crosby\
//Created September 16, 2010\
//This program calculates the force it will take for a given mass (a car) within specific intervals in the form of a table\
\
#include<stdio.h>\
#include<math.h>                                                                                         //introducing the math library\
\
int main (void)\
\{\
        float m;                                                                                                     //variable for the mass\
        float a;                                                                                                      //variable for the acceleration\
        float v;                                                                                                      //variable for initial velocity\
        float F, d;                                                                                                 //variable for the force and distance\
        int LOWER, UPPER, STEP;                                                                //variables for requirements for the for loop\
\
        LOWER=10;\
        UPPER=100;\
        STEP=10;                                                                                               //variables defined to equal numbers\
        printf("Enter the weight of the car in pounds>20\\n");                      //asks user to enter the weight of the car\
        scanf("%f", &m);\
        printf("Enter the initial velocity of the car\\n");                                   //asks the user to enter the initial velacity\
        fflush(stdin);\
        scanf("%f", &v);\
        printf("d\\tF\\n");                                                                                       //prints the headers of the distance / force table\
        for(d = LOWER; d <= UPPER; d = d+STEP)                                   //d is equal to LOWER, if d is <= UPPER stop the for loop.  Each time add STEP to d\
        \{\
                a = pow(v, 2)/(2.0*d);                                                                   //The equation for the acceleration\
                F = m*a;                                                                                          //The equation to calculate the force\
                printf("%1.0f\\t%1.2f\\n", d, F);                                                       //Prints one line at a time, the table of distance and of the force it takes to stop\
        \}\
        return(0);                                                                                                //End\
\}}