#include <stdio.h>
#include <Windows.h>

void InitLogo();
void UpdateLogo();

//커서 이동
void SetPosition(int x, int y)
{
	COORD pos;
	pos.X = x * 2;
	pos.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}

const char* logoTexts[13];

int main()
{	
	InitLogo();

	while (true)
	{
		system("cls");
		UpdateLogo();
		Sleep(50);
	}
	return 0;
}

void InitLogo()
{

	logoTexts[0] = "    ..........           @@@@@    @@@@@.......";
	logoTexts[1] = "     .........          @     @  @     @.......";
	logoTexts[2] = "      ........             @@@   @     @........";
	logoTexts[3] = "       .......           @@      @     @  .......";
	logoTexts[4] = "        ......          @@@@@@@   @@@@@  th ......";
	logoTexts[5] = "         .....        ----------------------- .....";
	logoTexts[6] = "          ....          C  E  N  T  U  R  Y     ....";
	logoTexts[7] = "           ...        -----------------------     ...";
	logoTexts[8] = "            ..        @@@@@ @@@@@ @   @ @@@@@       ..";
	logoTexts[9] = "            ==          @   @      @ @    @          ==";
	logoTexts[10] = "          __||__        @   @@@@    @     @        __||__";
	logoTexts[11] = "         |      |       @   @      @ @    @       |      |";
	logoTexts[12] = "_________|______|_____  @   @@@@@ @   @   @  _____|______|_________";

}



void UpdateLogo()
{
	for (int i = 0; i < 13; i++)
	{
		SetPosition(2, 5 + i);
		printf(logoTexts[i]);

	}
}
