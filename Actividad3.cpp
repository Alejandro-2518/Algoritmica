#include <conio.h>
 #include <stdio.h>
int main()
{
	char nombre[20];
	
	printf ("introduce tu nombre");
	scanf ("%s", nombre);
	printf ("hola %s,buenos dias",nombre ,161);
	
	getch(); /*pausa*/
	
	return 0;
}
