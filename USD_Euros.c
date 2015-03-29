//Keith Crosby
//Created September 12, 2010
//This program converts American dollars to euros for as many conversions as the user wishes
//The user inputs the number of dollars to convert, and this program shows the equation used and converts it.

#include<stdio.h>

int main (void)
{
	float a;                                                                                                                                                                                                 //The amount of USD\
	float  b;                                                                                                                                                                                                //The amount of Euros\
	char c;                                                                                                                                                                                                 //Variable for the (y/n) answer\


	do                                                                                                                                                                                                        //Does the program once to begin with\
	{
		printf("Please enter the amount of USD you wish to convert to Euros\\n");                                                                //asks for an amount of USD
		scanf("%f", &a);
		b=a*0.78366;                                                                                                                      //Equation is the conversion for USD to euros
		printf("The equation for USD to euros is USD*0.78366\\n");                                                                                         //Shows the user the equation used
		printf("With %1.2f dollars you have %1.2f Euros.  Do you wish to convert another amount (y/n)?\\n", a, b);       //Shows how many euros and USD and asks if the user would like to continue
		fflush(stdin);
		scanf("%c", &c);
	}
	while(c!='n');                                                                                                                                                                                      //Loops until the user inputs "n"\
	return (0);
}}