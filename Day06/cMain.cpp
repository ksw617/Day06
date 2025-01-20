#include <stdio.h>
#include <Windows.h>

enum SCENE
{
	LOGO,
	MENU,
	STAGE,
};

void Logo()
{
	printf("Logo\n");
	if (GetAsyncKeyState(VK_RETURN))
	{
	   // //scene을 MENU로 넘겨주세요.
	}
}

void Menu()
{
	printf("Menu\n");
}

void Stage()
{
	printf("Stage\n");
}

int main()
{
	SCENE scene = LOGO;


	while (true)
	{
		//system("cls");
		switch (scene)
		{
		case 0:
			Logo();
			break;
		case 1:
			Menu();
			break;
		case 2:
			Stage();
			break;
		default:
			break;
		}

		Sleep(1000);
	}
	return 0;
}
