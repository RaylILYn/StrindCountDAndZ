#include <iostream>
#include <stdio.h>
#include <locale.h>

using namespace std;

// Функция определения длины строки
int len_str(char* str)
{
	int i = 0;
	while (*(str + i))
	{
		i++;
	}
	return i;
}
void main()
{
	// Функция посимвольного ввода строки до нажания ENTER
	setlocale(LC_ALL, "ru");
	puts("Введите строку:");
	char* str = (char*)calloc(80, sizeof(char));
	int i = 0;
	while ((*(str + i++) = (char)getchar()) != '\n');
	*(str + --i) = '\0';
	str = (char*)realloc(str, i + 1);
	cout << endl << str << endl;

	for (int i = 0; i < str[i] != 0; i++)
	{
		if (str[i] == '*')
		{
			str[i] = '+';
			str[i + 1] = '+';
			i += 2;
		}
	}
	cout << endl << "Измененная строка:" << endl << str << endl;
	int D = 0;
	int Z = 0;
	for (int i = 0; i < str[i] != 0; i++)
	{
		if (str[i] == 'D')
		{
			D++;
		}
	}
	for (int i = 0; i < str[i] != 0; i++)
	{
		if (str[i] == 'Z')
		{
			Z++;
		}
	}
	cout << endl << "Количество символов D: " << D << endl;
	cout << endl << "Количество символов Z: " << Z << endl << endl;
	system("pause");
}