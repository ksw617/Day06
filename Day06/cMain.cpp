#include <stdio.h>
#include <Windows.h>

void InitLogo();
void UpdateLogo();

//Ŀ�� �̵�
void SetPosition(int x, int y)
{
	COORD pos;
	pos.X = x * 2;
	pos.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}

const char* logoTexts[19][13];
int index = 0;

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

	logoTexts[0][0]  = "    ..........           @@@@@    @@@@@.......";
	logoTexts[0][1]  = "     .........          @     @  @     @.......";
	logoTexts[0][2]  = "      ........             @@@   @     @........";
	logoTexts[0][3]  = "       .......           @@      @     @  .......";
	logoTexts[0][4]  = "        ......          @@@@@@@   @@@@@  th ......";
	logoTexts[0][5]  = "         .....        ----------------------- .....";
	logoTexts[0][6]  = "          ....          C  E  N  T  U  R  Y     ....";
	logoTexts[0][7]  = "           ...        -----------------------     ...";
	logoTexts[0][8]  = "            ..        @@@@@ @@@@@ @   @ @@@@@       ..";
	logoTexts[0][9]  = "            ==          @   @      @ @    @          ==";
	logoTexts[0][10] = "          __||__        @   @@@@    @     @        __||__";
	logoTexts[0][11] = "         |      |       @   @      @ @    @       |      |";
	logoTexts[0][12] = "_________|______|_____  @   @@@@@ @   @   @  _____|______|_________";



	 logoTexts[1][0]  = "     ..........          @@@@@    @@@@@.........";
	 logoTexts[1][1]  = "      .........         @     @  @     @.........";
	 logoTexts[1][2]  = "       ........            @@@   @     @ .........";
	 logoTexts[1][3]  = "        .......          @@      @     @  .........";
	 logoTexts[1][4]  = "        .......         @@@@@@@   @@@@@  th .......";
	 logoTexts[1][5]  = "         .....        ----------------------- ......";
	 logoTexts[1][6]  = "          ....          C  E  N  T  U  R  Y     ....";
	 logoTexts[1][7]  = "           ...        -----------------------     ...";
	 logoTexts[1][8]  = "            ..        @@@@@ @@@@@ @   @ @@@@@       ..";
	 logoTexts[1][9]  = "            ==          @   @      @ @    @          ==";
	 logoTexts[1][10] = "          __||__        @   @@@@    @     @        __||__";
	 logoTexts[1][11] = "         |      |       @   @      @ @    @       |      |";
	 logoTexts[1][12] = "_________|______|_____  @   @@@@@ @   @   @  _____|______|_________";


	 logoTexts[2][0]  = "      ..........         @@@@@    @@@@@ ..........";
	 logoTexts[2][1]  = "       .........        @     @  @     @ .........";
	 logoTexts[2][2]  = "        ........           @@@   @     @  .........";
	 logoTexts[2][3]  = "         .......         @@      @     @   ........";
	 logoTexts[2][4]  = "         .......        @@@@@@@   @@@@@  th  .......";
	 logoTexts[2][5]  = "          .....       ----------------------- .......";
	 logoTexts[2][6]  = "           ....         C  E  N  T  U  R  Y     .....";
	 logoTexts[2][7]  = "            ..        -----------------------     ....";
	 logoTexts[2][8]  = "            ..        @@@@@ @@@@@ @   @ @@@@@       ..";
	 logoTexts[2][9]  = "            ==          @   @      @ @    @          ==";
	 logoTexts[2][10] = "          __||__        @   @@@@    @     @        __||__";
	 logoTexts[2][11] = "         |      |       @   @      @ @    @       |      |";
	 logoTexts[2][12] = "_________|______|_____  @   @@@@@ @   @   @  _____|______|_________";

	 logoTexts[3][0]  = "        ..........       @@@@@    @@@@@   ..........";
	 logoTexts[3][1]  = "         .........      @     @  @     @   .........";
	 logoTexts[3][2]  = "         .........         @@@   @     @    ........";
	 logoTexts[3][3]  = "          .......        @@      @     @     .......";
	 logoTexts[3][4]  = "           .....        @@@@@@@   @@@@@  th   .......";
	 logoTexts[3][5]  = "           .....      -----------------------  ......";
	 logoTexts[3][6]  = "            ...         C  E  N  T  U  R  Y      .....";
	 logoTexts[3][7]  = "            ..        -----------------------     ....";
	 logoTexts[3][8]  = "            ..        @@@@@ @@@@@ @   @ @@@@@       ...";
	 logoTexts[3][9]  = "            ==          @   @      @ @    @          ==";
	 logoTexts[3][10] = "          __||__        @   @@@@    @     @        __||__";
	 logoTexts[3][11] = "         |      |       @   @      @ @    @       |      |";
	 logoTexts[3][12] = "_________|______|_____  @   @@@@@ @   @   @  _____|______|_________";

	 logoTexts[4][0]  = "          .........      @@@@@    @@@@@     ..........";
	 logoTexts[4][1]  = "          .........     @     @  @     @     .........";
	 logoTexts[4][2]  = "          .........        @@@   @     @      ........";
	 logoTexts[4][3]  = "           .......       @@      @     @       ........";
	 logoTexts[4][4]  = "           ......       @@@@@@@   @@@@@  th     .......";
	 logoTexts[4][5]  = "           .....      -----------------------    ......";
	 logoTexts[4][6]  = "            ...         C  E  N  T  U  R  Y       .....";
	 logoTexts[4][7]  = "            ..        -----------------------       ...";
	 logoTexts[4][8]  = "            ..        @@@@@ @@@@@ @   @ @@@@@        ..";
	 logoTexts[4][9]  = "            ==          @   @      @ @    @          ==";
	 logoTexts[4][10] = "          __||__        @   @@@@    @     @        __||__";
	 logoTexts[4][11] = "         |      |       @   @      @ @    @       |      |";
	 logoTexts[4][12] = "_________|______|_____  @   @@@@@ @   @   @  _____|______|_________";

	 logoTexts[5][0]  = "            .........    @@@@@    @@@@@        ..........";
	 logoTexts[5][1]  = "            .........   @     @  @     @       ..........";
	 logoTexts[5][2]  = "            ........       @@@   @     @        .........";
	 logoTexts[5][3]  = "            .......      @@      @     @         .......";
	 logoTexts[5][4]  = "            ......      @@@@@@@   @@@@@  th       ......";
	 logoTexts[5][5]  = "            .....     -----------------------      .....";
	 logoTexts[5][6]  = "            ....        C  E  N  T  U  R  Y         ....";
	 logoTexts[5][7]  = "            ...       -----------------------        ..";
	 logoTexts[5][8]  = "            ..        @@@@@ @@@@@ @   @ @@@@@        ..";
	 logoTexts[5][9]  = "            ==          @   @      @ @    @          ==";
	 logoTexts[5][10] = "          __||__        @   @@@@    @     @        __||__";
	 logoTexts[5][11] = "         |      |       @   @      @ @    @       |      |";
	 logoTexts[5][12] = "_________|______|_____  @   @@@@@ @   @   @  _____|______|_________";

	 logoTexts[6][0]  = "              .......... @@@@@    @@@@@           .........";
	 logoTexts[6][1]  = "              ......... @     @  @     @          .........";
	 logoTexts[6][2]  = "             .........     @@@   @     @           ........";
	 logoTexts[6][3]  = "             .......     @@      @     @            ......";
	 logoTexts[6][4]  = "             ......     @@@@@@@   @@@@@  th         ......";
	 logoTexts[6][5]  = "            ......    -----------------------        ....";
	 logoTexts[6][6]  = "            .....       C  E  N  T  U  R  Y          ...";
	 logoTexts[6][7]  = "            ....      -----------------------        ...";
	 logoTexts[6][8]  = "            ..        @@@@@ @@@@@ @   @ @@@@@        ..";
	 logoTexts[6][9]  = "            ==          @   @      @ @    @          ==";
	 logoTexts[6][10] = "          __||__        @   @@@@    @     @        __||__";
	 logoTexts[6][11] = "         |      |       @   @      @ @    @       |      |";
	 logoTexts[6][12] = "_________|______|_____  @   @@@@@ @   @   @  _____|______|_________";

	 logoTexts[7][0]  = "            ..........   @@@@@    @@@@@             ...........";
	 logoTexts[7][1]  = "            .........   @     @  @     @            ..........";
	 logoTexts[7][2]  = "            ........       @@@   @     @             ........";
	 logoTexts[7][3]  = "            .......      @@      @     @             ........";
	 logoTexts[7][4]  = "            ......      @@@@@@@   @@@@@  th          .......";
	 logoTexts[7][5]  = "            .....     -----------------------        .....";
	 logoTexts[7][6]  = "            ....        C  E  N  T  U  R  Y          ....";
	 logoTexts[7][7]  = "            ...       -----------------------        ...";
	 logoTexts[7][8]  = "            ..        @@@@@ @@@@@ @   @ @@@@@        ..";
	 logoTexts[7][9]  = "            ==          @   @      @ @    @          ==";
	 logoTexts[7][10] = "          __||__        @   @@@@    @     @        __||__";
	 logoTexts[7][11] = "         |      |       @   @      @ @    @       |      |";
	 logoTexts[7][12] = "_________|______|_____  @   @@@@@ @   @   @  _____|______|_________";

	 logoTexts[8][0]  = "          ...........    @@@@@    @@@@@               ...........";
	 logoTexts[8][1]  = "          ..........    @     @  @     @              ..........";
	 logoTexts[8][2]  = "          .........        @@@   @     @              .........";
	 logoTexts[8][3]  = "           ........      @@      @     @              ........";
	 logoTexts[8][4]  = "           ......       @@@@@@@   @@@@@  th          ........";
	 logoTexts[8][5]  = "           .....      -----------------------        .......";
	 logoTexts[8][6]  = "            ....        C  E  N  T  U  R  Y          .....";
	 logoTexts[8][7]  = "            ...       -----------------------        ....";
	 logoTexts[8][8]  = "            ..        @@@@@ @@@@@ @   @ @@@@@        ...";
	 logoTexts[8][9]  = "            ==          @   @      @ @    @          ==";
	 logoTexts[8][10] = "          __||__        @   @@@@    @     @        __||__";
	 logoTexts[8][11] = "         |      |       @   @      @ @    @       |      |";
	 logoTexts[8][12] = "_________|______|_____  @   @@@@@ @   @   @  _____|______|_________";

	 logoTexts[9][0]  = "        ...........      @@@@@    @@@@@                 ...........";
	 logoTexts[9][1]  = "        ..........      @     @  @     @                ..........";
	 logoTexts[9][2]  = "         ........          @@@   @     @               ..........";
	 logoTexts[9][3]  = "          .......        @@      @     @               .........";
	 logoTexts[9][4]  = "          ......        @@@@@@@   @@@@@  th           ........";
	 logoTexts[9][5]  = "           .....      -----------------------         .......";
	 logoTexts[9][6]  = "           ....         C  E  N  T  U  R  Y          .......";
	 logoTexts[9][7]  = "            ...       -----------------------        .....";
	 logoTexts[9][8]  = "            ..        @@@@@ @@@@@ @   @ @@@@@        ...";
	 logoTexts[9][9]  = "            ==          @   @      @ @    @          ==";
	 logoTexts[9][10] = "          __||__        @   @@@@    @     @        __||__";
	 logoTexts[9][11] = "         |      |       @   @      @ @    @       |      |";
	 logoTexts[9][12] = "_________|______|_____  @   @@@@@ @   @   @  _____|______|_________";

	 logoTexts[10][0]  = "      ...........        @@@@@    @@@@@                   .........";
	 logoTexts[10][1]  = "      ..........        @     @  @     @                  .........";
	 logoTexts[10][2]  = "       .........           @@@   @     @                 .........";
	 logoTexts[10][3]  = "        .......          @@      @     @                 ........";
	 logoTexts[10][4]  = "         ......         @@@@@@@   @@@@@  th             ........";
	 logoTexts[10][5]  = "          ....        -----------------------          ........";
	 logoTexts[10][6]  = "           ...          C  E  N  T  U  R  Y           .......";
	 logoTexts[10][7]  = "            ..        -----------------------         .....";
	 logoTexts[10][8]  = "            ..        @@@@@ @@@@@ @   @ @@@@@        ...";
	 logoTexts[10][9]  = "            ==          @   @      @ @    @          ==";
	 logoTexts[10][10] = "          __||__        @   @@@@    @     @        __||__";
	 logoTexts[10][11] = "         |      |       @   @      @ @    @       |      |";
	 logoTexts[10][12] = "_________|______|_____  @   @@@@@ @   @   @  _____|______|_________";

	 logoTexts[11][0]  = "    ...........          @@@@@    @@@@@                      ......";
	 logoTexts[11][1]  = "     ..........         @     @  @     @                    .......";
	 logoTexts[11][2]  = "      ........             @@@   @     @                   ........";
	 logoTexts[11][3]  = "       .......           @@      @     @                  .........";
	 logoTexts[11][4]  = "        ......          @@@@@@@   @@@@@  th              ........";
	 logoTexts[11][5]  = "         .....        -----------------------           ........";
	 logoTexts[11][6]  = "          ....          C  E  N  T  U  R  Y            .......";
	 logoTexts[11][7]  = "           ...        -----------------------         .....";
	 logoTexts[11][8]  = "            ..        @@@@@ @@@@@ @   @ @@@@@        ...";
	 logoTexts[11][9]  = "            ==          @   @      @ @    @          ==";
	 logoTexts[11][10] = "          __||__        @   @@@@    @     @        __||__";
	 logoTexts[11][11] = "         |      |       @   @      @ @    @       |      |";
	 logoTexts[11][12] = "_________|______|_____  @   @@@@@ @   @   @  _____|______|_________";

	 logoTexts[12][0]  = " .............           @@@@@    @@@@@                      ......";
	 logoTexts[12][1]  = "   ...........          @     @  @     @                    .......";
	 logoTexts[12][2]  = "    ..........             @@@   @     @                   ........";
	 logoTexts[12][3]  = "     .........           @@      @     @                  .........";
	 logoTexts[12][4]  = "      ........          @@@@@@@   @@@@@  th              ........";
	 logoTexts[12][5]  = "       .......        -----------------------           ........";
	 logoTexts[12][6]  = "         .....          C  E  N  T  U  R  Y            .......";
	 logoTexts[12][7]  = "          ....        -----------------------         .....";
	 logoTexts[12][8]  = "           ...        @@@@@ @@@@@ @   @ @@@@@        ...";
	 logoTexts[12][9]  = "            ==          @   @      @ @    @          ==";
	 logoTexts[12][10] = "          __||__        @   @@@@    @     @        __||__";
	 logoTexts[12][11] = "         |      |       @   @      @ @    @       |      |";
	 logoTexts[12][12] = "_________|______|_____  @   @@@@@ @   @   @  _____|______|_________";

	 logoTexts[13][0]  = "............             @@@@@    @@@@@                      ......";
	 logoTexts[13][1]  = " ...........            @     @  @     @                    .......";
	 logoTexts[13][2]  = "   ..........              @@@   @     @                   ........";
	 logoTexts[13][3]  = "    .........            @@      @     @                  .........";
	 logoTexts[13][4]  = "     ........           @@@@@@@   @@@@@  th              ........";
	 logoTexts[13][5]  = "      ........        -----------------------           ........";
	 logoTexts[13][6]  = "       .......          C  E  N  T  U  R  Y            .......";
	 logoTexts[13][7]  = "         .....        -----------------------         .....";
	 logoTexts[13][8]  = "           ...        @@@@@ @@@@@ @   @ @@@@@        ...";
	 logoTexts[13][9]  = "            ==          @   @      @ @    @          ==";
	 logoTexts[13][10] = "          __||__        @   @@@@    @     @        __||__";
	 logoTexts[13][11] = "         |      |       @   @      @ @    @       |      |";
	 logoTexts[13][12] = "_________|______|_____  @   @@@@@ @   @   @  _____|______|_________";

	 logoTexts[14][0]  = "..........               @@@@@    @@@@@                     .......";
	 logoTexts[14][1]  = "..........              @     @  @     @                   ........";
	 logoTexts[14][2]  = " ..........                @@@   @     @                  ........";
	 logoTexts[14][3]  = "   ........              @@      @     @                 ........";
	 logoTexts[14][4]  = "    ........            @@@@@@@   @@@@@  th             ........";
	 logoTexts[14][5]  = "     .......          -----------------------           .......";
	 logoTexts[14][6]  = "       ......           C  E  N  T  U  R  Y            ......";
	 logoTexts[14][7]  = "         ....         -----------------------         .....";
	 logoTexts[14][8]  = "           ...        @@@@@ @@@@@ @   @ @@@@@        ...";
	 logoTexts[14][9]  = "            ==          @   @      @ @    @          ==";
	 logoTexts[14][10] = "          __||__        @   @@@@    @     @        __||__";
	 logoTexts[14][11] = "         |      |       @   @      @ @    @       |      |";
	 logoTexts[14][12] = "_________|______|_____  @   @@@@@ @   @   @  _____|______|_________";

	 logoTexts[15][0]  = ".......                  @@@@@    @@@@@                   .........";
	 logoTexts[15][1]  = "........                @     @  @     @                 .........";
	 logoTexts[15][2]  = ".........                  @@@   @     @                .........";
	 logoTexts[15][3]  = " .........               @@      @     @                ........";
	 logoTexts[15][4]  = "   .......              @@@@@@@   @@@@@  th            ........";
	 logoTexts[15][5]  = "    .......           -----------------------          ......";
	 logoTexts[15][6]  = "      ......            C  E  N  T  U  R  Y           .....";
	 logoTexts[15][7]  = "        .....         -----------------------         ....";
	 logoTexts[15][8]  = "           ...        @@@@@ @@@@@ @   @ @@@@@        ...";
	 logoTexts[15][9]  = "            ==          @   @      @ @    @          ==";
	 logoTexts[15][10] = "          __||__        @   @@@@    @     @        __||__";
	 logoTexts[15][11] = "         |      |       @   @      @ @    @       |      |";
	 logoTexts[15][12] = "_________|______|_____  @   @@@@@ @   @   @  _____|______|_________";

	 logoTexts[16][0]  = ".....                    @@@@@    @@@@@                 ........";
	 logoTexts[16][1]  = "......                  @     @  @     @               ........";
	 logoTexts[16][2]  = ".......                    @@@   @     @               ........";
	 logoTexts[16][3]  = "........                 @@      @     @              ........";
	 logoTexts[16][4]  = " ........               @@@@@@@   @@@@@  th           .......";
	 logoTexts[16][5]  = "   .......            -----------------------         .....";
	 logoTexts[16][6]  = "     ......             C  E  N  T  U  R  Y          .....";
	 logoTexts[16][7]  = "       .....          -----------------------        ....";
	 logoTexts[16][8]  = "          ...         @@@@@ @@@@@ @   @ @@@@@        ...";
	 logoTexts[16][9]  = "            ==          @   @      @ @    @          ==";
	 logoTexts[16][10] = "          __||__        @   @@@@    @     @        __||__";
	 logoTexts[16][11] = "         |      |       @   @      @ @    @       |      |";
	 logoTexts[16][12] = "_________|______|_____  @   @@@@@ @   @   @  _____|______|_________";

	 logoTexts[17][0]  = ".....                    @@@@@    @@@@@              ...........";
	 logoTexts[17][1]  = "......                  @     @  @     @             ..........";
	 logoTexts[17][2]  = ".......                    @@@   @     @             .........";
	 logoTexts[17][3]  = "........                 @@      @     @             ........";
	 logoTexts[17][4]  = " ........               @@@@@@@   @@@@@  th          .......";
	 logoTexts[17][5]  = "   .......            -----------------------        ......";
	 logoTexts[17][6]  = "     ......             C  E  N  T  U  R  Y          .....";
	 logoTexts[17][7]  = "       .....          -----------------------        ....";
	 logoTexts[17][8]  = "          ...         @@@@@ @@@@@ @   @ @@@@@        ...";
	 logoTexts[17][9]  = "            ==          @   @      @ @    @          ==";
	 logoTexts[17][10] = "          __||__        @   @@@@    @     @        __||__";
	 logoTexts[17][11] = "         |      |       @   @      @ @    @       |      |";
	 logoTexts[17][12] = "_________|______|_____  @   @@@@@ @   @   @  _____|______|_________";

	 logoTexts[18][0]  = ".....                    @@@@@    @@@@@            ...........";
	 logoTexts[18][1]  = "......                  @     @  @     @           ..........";
	 logoTexts[18][2]  = ".......                    @@@   @     @           .........";
	 logoTexts[18][3]  = "........                 @@      @     @            .......";
	 logoTexts[18][4]  = " ........               @@@@@@@   @@@@@  th         ......";
	 logoTexts[18][5]  = "   .......            -----------------------       ......";
	 logoTexts[18][6]  = "     ......             C  E  N  T  U  R  Y          ....";
	 logoTexts[18][7]  = "       .....          -----------------------        ....";
	 logoTexts[18][8]  = "          ...         @@@@@ @@@@@ @   @ @@@@@        ...";
	 logoTexts[18][9]  = "            ==          @   @      @ @    @          ==";
	 logoTexts[18][10] = "          __||__        @   @@@@    @     @        __||__";
	 logoTexts[18][11] = "         |      |       @   @      @ @    @       |      |";
	 logoTexts[18][12] = "_________|______|_____  @   @@@@@ @   @   @  _____|______|_________";

}
																    


void UpdateLogo()
{
	for (int i = 0; i < 13; i++)
	{
		SetPosition(2, 5 + i);
		printf(logoTexts[index][i]);

	}

	index++;
	if (index > 18)
	{
		index = 0;
	}
}
