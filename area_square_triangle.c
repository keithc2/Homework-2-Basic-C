{\rtf1\ansi\ansicpg1252\cocoartf1038\cocoasubrtf320
{\fonttbl\f0\fswiss\fcharset0 Helvetica;}
{\colortbl;\red255\green255\blue255;}
\margl1440\margr1440\vieww17200\viewh14820\viewkind0
\pard\tx720\tx1440\tx2160\tx2880\tx3600\tx4320\tx5040\tx5760\tx6480\tx7200\tx7920\tx8640\ql\qnatural\pardirnatural

\f0\fs24 \cf0 //Keith Crosby\
//Created September 12, 2010\
//This program distinguishes if the object inputted by the user is a square or a triangle.\
//Then it computes the area of a square or a triangle.\
\
#include<stdio.h>\

int main (void)\
{
        char a='s';                                                                                                                //Declaring character that specifies the shape
        float x;                                                                                                                       //Variable is the side length of the square
        float c;                                                                                                                                 //equal to the area of the square
        float b, h, d;                                                                                                                        //the base of the triangle
        char z;                                                                                                                                 //variable to hold the y/n answer

        while (z !='n' && z != 'N')\
        {
                printf("Is the shape a square or a triangle (S/T)\\n");                                           //asks the user if they are dealing with a square or a triangle.
                scanf("%c", &a);
                if (a == 's')                                                                                                                   //if a square continue within brackets\'85otherwise go to else\
                {
                        printf("What is the side length of the square?\\n");                                      //concluding that the object is a square, sakes for the side length\
                        scanf("%f", &x);\
                        c = (x*x);                                                                                                             //equation for finding the area of the square\
                        printf("The area of your square is equal to %.2f\\n", c);                              //prints the area found\
                \}\
                else                                                                                                                             //If the user says it is a triangle continue within brackets\
                \{\
                        printf("what is the base length of the triangle?\\n");                                    //asks for the base of the triangle\
                        scanf("%f", &b);\
                        printf("What is the height of the triangle?\\n");                                             //asks for the height of the triangle\
                        scanf("%f", &h);\
                        d = 0.5*b*h;                                                                                                       //equation for finding the area of a triangle\
                        printf("The area of your triangle is equal to %.2f\\n", d);                            //prints the area of the triangle\
                \}\
                printf("Do you wish to continue (y/n)?\\n");                                                           //asks the user if they wish to calculate another area\
                fflush(stdin);\
                scanf("%c", &z);\
                fflush(stdin);\
        \}\
        return (0);\
\}}