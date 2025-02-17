#include "myHeader.h"

void clearLine()
{
	set_color(0, 0);
	for (int i = 0; i <= 80; i++)
	{
		gotoxy(i, 11);
		printf("\xDB");
	}
}
void Acknowledgement()
{
	set_color(7, 4);
	gotoxy(21, 3);
	printf("            Acknowledgement            ");

	set_color(7, 0);
	gotoxy(31, 5);
	printf(" ____  ____  _   _ ");
	gotoxy(31, 6);
	printf("| __ )|  _ \\| \\ | |");
	gotoxy(31, 7);
	printf("|  _ \\| | | |  \\| |");
	gotoxy(31, 8);
	printf("| |_) | |_| | |\\  |");
	gotoxy(31, 9);
	printf("|____/|____/|_| \\_|");

	set_color(7, 0);
	gotoxy(5, 13);
	printf("Thanks for using our system! We're constantly working to improve your");
	gotoxy(6, 14);
	printf("experience, so if you have any feedback or run into any issues, feel");
	gotoxy(7, 15);
	printf("free to reach out. Your input helps us make things better for you!");

	set_color(7, 4);
	gotoxy(28, 18);
	printf("       Thank you :>       ");
	set_color(7, 0);
	while (1)
	{
		clearLine();
		set_color(2, 0);
		gotoxy(31, 11);
		printf("Jerson F. Doronila");
		delay(300);
		clearLine();
		set_color(3, 0);
		gotoxy(28, 11);
		printf("John Daniel T. Buenaflor");
		delay(300);
		clearLine();
		set_color(6, 0);
		gotoxy(30, 11);
		printf("Carl Angelo E. Novero");
		delay(300);
	}
}

int main(){
	Acknowledgement();
	return 0;
}
