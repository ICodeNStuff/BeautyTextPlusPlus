#pragma once
#include <stdio.h>
#include <conio.h>
#include <cwchar>
#include <windows.h>
using namespace std;
#define BLACK 0
#define BLUE 1
#define GREEN 2
#define AQUA 3
#define RED 4
#define PURPLE 5
#define YELLOW 6
#define WHITE 7
int BLACK_BGRND = 07;
class CustomText {
private:
	HANDLE Console;
	__crt_bool isColorValid;
	int RESET_COLOR = WHITE;
	INT RESET_COLOR_BG = BLACK_BGRND;
public:
	CustomText()
	{
		Console = GetStdHandle(STD_OUTPUT_HANDLE);
	}
	bool PRNT_COLORED_CHAR(char BUFF, int Color, bool IsBackground = false)
	{
		if (Color > 270)
			isColorValid = false;
		else isColorValid = true;
		if (IsBackground == true)
		{
			SetConsoleTextAttribute(Console, Color);
			printf("%c", BUFF);
			SetConsoleTextAttribute(Console, RESET_COLOR_BG);
		}
		else
		{
			SetConsoleTextAttribute(Console, Color);
			printf("%c", BUFF);
			SetConsoleTextAttribute(Console, RESET_COLOR);
		}

		return isColorValid;
	}
	bool PRNT_COLORED_TEXT(const char* Text, int Color, bool IsBackground = false)
	{
		if (Color > 270)
			isColorValid = false;
		else isColorValid = true;

		if (IsBackground == true)
		{
			SetConsoleTextAttribute(Console, Color);
			printf("%s", Text);
			SetConsoleTextAttribute(Console, RESET_COLOR_BG);
		}
		else
		{
			SetConsoleTextAttribute(Console, Color);
			printf("%s", Text);
			SetConsoleTextAttribute(Console, RESET_COLOR);
		}


		return isColorValid;
	}
	bool PRNT_COLORED_TEXT_RAINBOW(const char* Text)
	{
		int color = 1;
		for (int i = 0; i < strlen(Text); i++)
		{
			if (color > 6)
			{
				color = 1;
			}
			SetConsoleTextAttribute(Console, color);
			printf("%c", Text[i]);
			if (Text[i] != ' ')
				color++;
		}


		SetConsoleTextAttribute(Console, RESET_COLOR);



		return isColorValid;
	}
	bool SetResetColor(int Color = WHITE, bool IsBackground = false)
	{
		if (Color > 270)
			isColorValid = false;
		else isColorValid = true;
		if (IsBackground == true)
		{
			RESET_COLOR_BG = Color;
		}
		else
		{
			RESET_COLOR = Color;
		}
		return isColorValid;
	}
};
