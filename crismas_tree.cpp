#include <iostream>
#include <conio.h>
#include <cstdlib>
#include <ctime>
#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>
using namespace std;
bool gameOver;
HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
int main(){
	bool Setup = false; int k = 1;
	while (!Setup){
		SetConsoleTextAttribute(h, FOREGROUND_GREEN | FOREGROUND_INTENSITY);
		
		cout << "                ***   PERFECT HOLIDAYS   ***" << endl;
        Sleep(0.00001);
		cout << "      =================================================" << endl;
		cout << "      -------------------------------------------------\n\n" << endl;
		if (k%2==0) { SetConsoleTextAttribute(h, FOREGROUND_RED | FOREGROUND_INTENSITY); }
		cout << "                             @" << endl;
		
		if(k%2==0)SetConsoleTextAttribute(h, FOREGROUND_BLUE | FOREGROUND_INTENSITY);
		cout << "                            @Am" << endl;
		
		if (k%2==0)SetConsoleTextAttribute(h, FOREGROUND_RED | FOREGROUND_INTENSITY);
		cout << "                           @Ambi" << endl;
		
		if (k % 2 == 0)SetConsoleTextAttribute(h, FOREGROUND_BLUE | FOREGROUND_INTENSITY);
		cout << "                          @Ambik" << endl;
		
		if (k % 2 == 0)SetConsoleTextAttribute(h, FOREGROUND_RED | FOREGROUND_INTENSITY);
		cout << "                         @Ambikes" << endl;
		
		if (k % 2 == 0)SetConsoleTextAttribute(h, FOREGROUND_BLUE | FOREGROUND_INTENSITY);
		cout << "                        @Ambikesh@" << endl;
		
		if (k % 2 == 0)SetConsoleTextAttribute(h, FOREGROUND_RED | FOREGROUND_INTENSITY);
		cout << "                       @Ambikesh_Jha" << endl;
		
		if (k % 2 == 0)SetConsoleTextAttribute(h, FOREGROUND_BLUE | FOREGROUND_INTENSITY);
		cout << "                      @Ambikesh_Jha C" << endl;
		
		if (k % 2 == 0)SetConsoleTextAttribute(h, FOREGROUND_RED | FOREGROUND_INTENSITY);
		cout << "                     @Ambikesh_Jha Chr" << endl;
		
		if (k % 2 == 0)SetConsoleTextAttribute(h, FOREGROUND_BLUE | FOREGROUND_INTENSITY);
		cout << "                    @Ambikesh_Jha Chris" << endl;
		
		if (k % 2 == 0)SetConsoleTextAttribute(h, FOREGROUND_RED | FOREGROUND_INTENSITY);
		cout << "                   @Ambikesh_Jha Christm" << endl;
		
		if (k % 2 == 0)SetConsoleTextAttribute(h, FOREGROUND_BLUE | FOREGROUND_INTENSITY);
		cout << "                  @Ambikesh_Jha Christmas" << endl;
		
		if (k % 2 == 0)SetConsoleTextAttribute(h, FOREGROUND_RED | FOREGROUND_INTENSITY);
		cout << "                 @Ambikesh_Jha christmas_Tr" << endl;
		
		if (k % 2 == 0)SetConsoleTextAttribute(h, FOREGROUND_BLUE | FOREGROUND_INTENSITY);
		cout << "                @Ambikesh_Jha chritsmas_Tree" << endl;
		SetConsoleTextAttribute(h, FOREGROUND_GREEN | FOREGROUND_INTENSITY);
		cout << "                           #####" << endl;
		cout << "                           #####" << endl;
		cout << "      -------------------------------------------------" << endl;
		cout << "      =================================================\n\n" << endl;
		system("cls");
		k++;
	}
	system("pause");
	return 0;
}





