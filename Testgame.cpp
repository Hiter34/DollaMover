#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
	int search;
	wchar_t test = L'\u1403';
	char test2 = '$';
	system("color 2");
	cout << "DollaMover!" << endl << endl;
	system("color 6");
	cout << "Created by Alex Kostyleff" << endl;
	system("color 5");
	cout << "Advanced by Kirill Rogozin" << endl;
	system("color 7");
	setlocale(LC_ALL, "");
	cin >> test2;
	for (int i = 0; i < 101; i++)
	{
		system("cls");
		cout << i;
	}
	system("cls");
	const int n = 29;	// количество строк
	const int m = 120;	// количество столбцов
	__wchar_t field[n][m];   // само игровое поле 
	for (int i = 1; i < n - 1; i++)	// рамки сверху снизу добавим ниже
	{
		for (int j = 0; j < m; j++)
		{
			field[i][j] =  ' ';
			if (j == 0 || j == m - 1) field[i][j] = '#'; // добавим боковые рамки
		}
	}
	cout << "Field added!" << endl;
	for (int i = 0; i < m; i++)	// добавляем боковые рамки
	{
		field[0][i] = '#';
		field[n - 1][i] = '#';
	}
	cout << "Bounds added!" << endl;
	system("cls");
	int playerX = 5;
	int playerY = 5;
	//----
	int bulX = playerX;
	int bulY = playerY;
	bool isFired = false;
	bool wMove = false, aMove = false, sMove = false, dMove = false;
	while (1) {
		if (isFired) {
			field[bulY][bulX] = '.';
			if (bulY < n - 1) {
				bulY++;
				field[bulY][bulX] = '!';
			}
			else isFired = false;
		}
		system("cls");
		field[playerY][playerX] = L'$';

		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < m; j++)
			{
				wcout << field[i][j];
			}
			cout << '\n';
		}
		// . . $ . . 
		char move;
		move = _getch();
		switch (move) {	// w a s d
		case 'w': {
			field[playerY][playerX] = '.';
			wMove = true, aMove = false, sMove = false, dMove = false;
			if (playerY > 0)playerY--;
			break;
		}
		case 's': {
			field[playerY][playerX] = '.';
			wMove = false, aMove = false, sMove = true, dMove = false;
			if (playerY < n - 1)playerY++;
			break;
		}
		case 'a': {
			field[playerY][playerX] = '.';
			wMove = false, aMove = true, sMove = false, dMove = false;
			if (playerX > 0)playerX--;
			break;
		}
		case 'd': {
			field[playerY][playerX] = '.';
			wMove = false, aMove = false, sMove = false, dMove = true;
			if (playerX < m - 1)playerX++;
			break;
		}
		case 'z': {
			system("cls");
			cout << "$ is happy! Thanks for playing!" << endl;
			return 0;
		}
		case '\n': {
			cin >>  search;
			
		
		}
		case 'r': {
			char dir;
			//cin >> dir;
			if (!isFired) {
				bulX = playerX;
				bulY = playerY;
				isFired = true;
			}
		}
		case 'c': {
			for (int i = 1; i < n - 1; i++)	// рамки сверху снизу добавим ниже
			{
				for (int j = 0; j < m; j++)
				{
					field[i][j] = ' ';
					if (j == 0 || j == m - 1) field[i][j] = '#'; // добавим боковые рамки
				}
			}
			for (int i = 0; i < m; i++)	// добавляем боковые рамки
			{
				field[0][i] = '#';
				field[n - 1][i] = '#';
			}
		}
		default: break;
		}
		
	}


	//const int n = 20;	// количество строк
	//const int m = 50;	// количество столбцов
	//char field[n][m];   // само игровое поле 
	//for (int i = 1; i < n-1; i++)	// рамки сверху снизу добавим ниже
	//{
	//	for (int j = 0; j < m; j++)
	//	{
	//		field[i][j] = '.';
	//		if (j == 0 || j == m - 1) field[i][j] = '#'; // добавим боковые рамки
	//	}
	//}
	//for (int i = 0; i < m; i++)	// добавляем боковые рамки
	//{
	//	field[0][i] = '#';	
	//	field[n - 1][i] = '#';
	//}
	//int PlayerX = 10;
	//int PlayerY = 5;
	//while (1) {
	//	system("cls");
	//	cout << "'a' for left, 'd' for right, 'z' for exit :) \n";
	//	field[PlayerY][PlayerX] = '$';

	//	for (int i = 0; i < n; i++) // выводим наше поле
	//	{
	//		for (int j = 0; j < m; j++)
	//		{
	//			cout << field[i][j];
	//		}
	//		cout << '\n';
	//	}
	//	cout << "------------------------------------\n";
	//	cout << "input yur move: ";
	//	char inp;

	//	//= getchar();
	//	cin >> inp;
	//	cout << "------------------------------------\n";
	//	switch (inp)
	//	{
	//	case 'a': {
	//		field[PlayerY][PlayerX] = '.';
	//		if (PlayerX >1)PlayerX--;
	//		break;
	//	}
	//	case 'd': {
	//		field[PlayerY][PlayerX] = '.';
	//		if (PlayerX <m - 1) PlayerX++;
	//		break;
	//	}
	//	case 'w': {
	//		field[PlayerY][PlayerX] = '.';
	//		if (PlayerY > 1)PlayerY--;
	//		break;
	//	}
	//	case 's': {
	//		field[PlayerY][PlayerX] = '.';
	//		if (PlayerY < n - 1)PlayerY++;
	//		break;
	//	}
	//	case 'z': return 0;
	//	default: break;
	//	}
	//}
	return 0;
}







//int mas[4][5] = {
//	{ 1, 2, 3 },		// строка 0 - 1 2 3 0 0
//	{ 1, 2, 3, 4, 5 },	// строка 1 - 1 2 3 4 5
//	{ 1, 2}				// строка 2 - 1 2 0 0 0
//};						// строка 3 - 0 0 0 0 0


//const int n = 20;	// количество строк
//const int m = 50;	// количество столбцов
//char field[n][m];   // само игровое поле 
//for (int i = 1; i < n-1; i++)	// рамки сверху снизу добавим ниже
//{
//	for (int j = 0; j < m; j++)
//	{
//		field[i][j] = '.';
//		if (j == 0 || j == m - 1) field[i][j] = '#'; // добавим боковые рамки
//	}
//}
//for (int i = 0; i < m; i++)	// добавляем боковые рамки
//{
//	field[0][i] = '#';	
//	field[n - 1][i] = '#';
//}
//int PlayerX = 10;
//int PlayerY = 5;
//
//

/*
while (1) {
system("cls");
cout << "'a' for left, 'd' for right, 'z' for exit :) \n";
field[PlayerY][PlayerX] = '$';

for (int i = 0; i < n; i++) // выводим наше поле
{
for (int j = 0; j < m; j++)
{
cout << field[i][j];
}
cout << '\n';
}
cout << "------------------------------------\n";
cout << "input yur move: ";
char inp;
//= getchar();
cin >> inp;
cout << "------------------------------------\n";
switch (inp)
{
case 'a': {
field[PlayerY][PlayerX] = '.';
if (PlayerX >1)PlayerX--;
break;
}
case 'd': {
field[PlayerY][PlayerX] = '.';
if (PlayerX <m-1) PlayerX++;
break;
}
case 'w': {
field[PlayerY][PlayerX] = '.';
if (PlayerY > 1)PlayerY--;
break;
}
case 's': {
field[PlayerY][PlayerX] = '.';
if (PlayerY < n-1)PlayerY++;
break;
}
case 'z': return 0;
default: break;
}
}
*/