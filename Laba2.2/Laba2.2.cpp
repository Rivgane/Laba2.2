// Laba2.2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <chrono>
#include <vector>
using namespace std;
using namespace chrono;

//funcs
short int main_menu();
short int case1_menu();
short int case5_menu();
void Task1a();
void Task1b();
void Task2();
void Task3();
void Task4();
void Task5a();
void Task5b();
void Task6();
void Task7();
void Task8();

//globals
int arrN;
double c2time, c4time_ins, c4time_del, c6time, c8time;

int main()
{
	setlocale(LC_ALL, "Russian");
	short int mmenu;

returntomainmenu:
	while (1)
	{
		mmenu = main_menu();
		switch (mmenu)
		{
		case 1:
			goto case1;
		case 2:
			Task2(); system("pause"); system("cls");
			break;
		case 3:
			Task3(); system("pause"); system("cls");
			break;
		case 4:
			Task4(); system("pause"); system("cls");
			break;
		case 5:
			goto case5;
		case 6:
			Task6(); system("pause"); system("cls");
			break;
		case 7:
			Task7(); system("pause"); system("cls");
			break;
		case 8:
			Task8(); system("pause"); system("cls");
			break;
		case 0:
			return 0;
			break;
		}
		cout << endl;
	}

case1:

	short int c1menu;
	while (1)
	{
		c1menu = case1_menu();
		switch (c1menu)
		{
		case 1:
			Task1a(); system("pause"); system("cls");
			break;
		case 2:
			Task1b(); system("pause"); system("cls");
			break;
		case 0:
			goto returntomainmenu;
		}
		cout << endl;
	}


case5:

	short int c5menu;
	while (1)
	{
		c5menu = case5_menu();
		switch (c5menu)
		{
		case 1:
			Task5a(); system("pause"); system("cls");
			break;
		case 2:
			Task5b(); system("pause"); system("cls");
			break;
		case 0:
			goto returntomainmenu;
		}
		cout << endl;
	}

}



short int main_menu()
{
	system("cls");
	short int i;
	cout << "Лабораторная работа №2 \n\n";
	cout << "Введите цифру от 0 до 8, чтобы выполнить соответствующую задачу:\n";
	cout << "1. Создается динамический целочисленный массив;\n";
	cout << "\t 1) пользователь вводит количество элементов в массиве, который будет автоматически заполняться случайными числами (0 до 99);\n";
	cout << "\t 2) пользователь вводит в консоль элементы массива, N определяется автоматически по количеству введенных элементов.\n";
	cout << "2. Определение скорости создания динамического массива п. 1.\n";
	cout << "3. Вставка, удаление и получение элемента массива.\n";
	cout << "4. Определение скорости вставки, удаления и получения элемента массива п. 3.\n";
	cout << "5. Формируется двусвязный список размерности N; \n";
	cout << "\t 1) пользователь вводит количество элементов в списке, который будет автоматически заполняться случайными числами (0 до 99);\n";
	cout << "\t 2) пользователь вводит в консоль элементы списка, N определяется автоматически по количеству введенных элементов;\n";
	cout << "6. Определение скорости создания двусвязного списка п. 5.\n";
	cout << "7. Вставка, удаление и получение элемента двусвязного списка.\n";
	cout << "8. Определение скорости вставки, удаление и получения элемента двусвязного списка п. 7.\n";
	cout << "0. Выход.\n" << endl;
	cout << "Перейти к задаче: ";

	while (1)
	{
		cin >> i;
		if ((i >= 0) & (i <= 8))
			break;
		else
			cout << "Некорректный ввод, повторите попытку.\n";
	}
	cout << "\n";
	return i;
}



short int case1_menu()
{
	system("cls");
	short int i;
	cout << "1. Создается динамический целочисленный массив;\n";
	cout << "\t 1) пользователь вводит количество элементов в массиве, который будет автоматически заполняться случайными числами (0 до 99);\n";
	cout << "\t 2) пользователь вводит в консоль элементы массива, N определяется автоматически по количеству введенных элементов.\n";
	cout << "0. Выход.\n\n";
	cout << "Перейти к задаче: ";
	while (1)
	{
		cin >> i;
		if ((i >= 0) & (i <= 2))
			break;
		else
			cout << "Некорректный ввод, повторите попытку.\n";
	}
	cout << "\n";

	return i;
}


short int case5_menu()
{
	system("cls");
	short int i;
	cout << "5. Формируется двусвязный список размерности N; \n";
	cout << "\t 1) пользователь вводит количество элементов в списке, который будет автоматически заполняться случайными числами (0 до 99);\n";
	cout << "\t 2) пользователь вводит в консоль элементы списка, N определяется автоматически по количеству введенных элементов;\n";
	cout << "0. Выход.\n\n";
	cout << "Перейти к задаче: ";
	while (1)
	{
		cin >> i;
		if ((i >= 0) & (i <= 2))
			break;
		else
			cout << "Некорректный ввод, повторите попытку.\n";
	}
	cout << "\n";

	return i;
}

void Task1a()
{
	
	system("cls");
	cout << "Введите число N эл-тов массива: ";
	cin >> arrN;
	cout << endl;

	int *arr = new int[arrN];

	auto start_arrfill = system_clock::now();

	for (int i = 0; i < arrN; i++)
	{
		arr[i] = rand() % 199 - 99;
	}
	cout << endl;
	system_clock::time_point end_arrfill = system_clock::now();
	duration<double> arrfill_time = end_arrfill - start_arrfill;
	c2time = duration<double>(arrfill_time).count();

	cout << "Полученный массив:";
	for (int i = 0; i < arrN; i++)
	{
		cout << '[' << i << ']' << arr[i] << " ";
	}
	cout << endl << endl;

}



void Task1b()
{
	system("cls");

	vector<int> vect;
	int A;
	cout << "Введите значение эл-та массива, для завершения введите S: " << endl;
	while (cin >> A)
		vect.push_back(A);
	unsigned int vector_size = vect.size();

	system("cls");
	cout << "Ваш массив:" << endl;
	for (int i = 0; i < vector_size; i++) {
		cout << '[' << i << ']' << vect[i] << " ";
	}

}



void Task2()
{
	Task1a();
	cout.precision(8);
	cout << fixed << "Время заполнения массива: " << c2time << endl << endl;
}



void Task3()
{
	system("cls");
	cout << "Введите число N эл-тов массива: ";
	cin >> arrN;
	cout << endl;
	vector<int> vect;
	for (int i = 0; i < arrN; i++)
	{
		vect.push_back(rand() % 199 - 99);
	}
	cout << endl;

	cout << "Полученный массив:";
	for (int i = 0; i < arrN; i++)
	{
		cout << '[' << i << ']' << vect[i] << " ";
	}
	cout << endl << endl;
	auto iter = vect.cbegin();

	short int task;
returntotaskmenu:
	cout << "Какую операцию вы желаете совершить? \n";
	cout << "1. Вставка эл-та.  \n";
	cout << "2. Удаление эл-та. \n";
	cout << "3. Получение эл-та.\n";
	cout << "0. Выход из данной задачи.\n\n";

	cout << "Ввод: ";
	while (1)
	{
		cin >> task;
		if ((task >= 0) & (task <= 3))
			break;
		else
			cout << "Некорректный ввод, повторите попытку.\n";
	}
	cout << endl;
	bool vector_general_taskswitchflag = true;
	while (vector_general_taskswitchflag)
	{
		switch (task)
		{
		case 1:
			goto insert; system("pause"); system("cls");
			break;
		case 2:
		goto deletthis; system("pause"); system("cls");
			break;
		case 3:
		goto fetch; system("pause"); system("cls");
			break;
		case 0:
			vector_general_taskswitchflag = false;
			break;
		}
		cout << endl;
	}
	goto yourenotsupposedtobehere;
	
insert:
	{
	int ins_pos;
	int ins_value;
	cout << "На какую позицию вы хотите вставить новый эл-т?	";
	cin >> ins_pos;
	cout << endl << endl;
	cout << "Какое значение принимает новый эл-т?	";
	cin >> ins_value;
	cout << endl << endl;
	auto start_insert = system_clock::now();
	vect.insert(iter + ins_pos, ins_value);
	system_clock::time_point end_insert = system_clock::now();
	duration<double> insert_time = end_insert - start_insert;
	c4time_ins = duration<double>(insert_time).count();
	cout << "Полученный массив:";
	for (int i = 0; i < arrN + 1; i++)
	{
		cout << '[' << i << ']' << vect[i] << " ";
	}
	cout << endl << endl;
	}
	goto returntotaskmenu;
deletthis:
	{
		int del_pos;
		
		short int deltask;
		cout << "Удалить по индексу или по значению? \n";
		cout << "1. По индексу.  \n";
		cout << "2. По значению. \n";
		cout << "0. Выход из данной задачи.\n\n";

		cout << "Ввод: ";
		while (1)
		{
			cin >> deltask;
			if ((deltask >= 0) & (deltask <= 2))
				break;
			else
				cout << "Некорректный ввод, повторите попытку.\n";
		}
		cout << endl;
		bool vector_delete_taskswitchflag = true;
		while (vector_delete_taskswitchflag)
		{
			switch (deltask)
			{
			case 1:
				goto delbyIndex; system("pause"); system("cls");
				break;
			case 2:
				goto delbyValue; system("pause"); system("cls");
				break;
			case 0:
				vector_delete_taskswitchflag = false;
				break;
			}
			cout << endl;
		}
		
	delbyValue:
		{
			int value;
			bool key = false;
			cout << "Введите искомое значение: ";
			cin >> value;
			for (int i = 0; i < arrN - 1; i++) { // поиск перебором
				if (vect[i] == value) {
					key = true;
					del_pos = i;
				}
			}
			if (key == false)
			{
				cout << "Такого элемента нет в массиве." << endl;
				goto returntotaskmenu;
			}
			else
				goto deletevalue;
		}
	delbyIndex:
		cout << "Введите индекс эл-та, который необходимо удалить:	";
		cin >> del_pos;

		deletevalue:
		auto start_delet = system_clock::now();
		vect.erase(iter + del_pos);
		system_clock::time_point end_delet = system_clock::now();
		duration<double> delet_time = end_delet - start_delet;
		c4time_del = duration<double>(delet_time).count();





		cout << "Полученный массив:";
		for (int i = 0; i < arrN - 1; i++)
		{
			cout << '[' << i << ']' << vect[i] << " ";
		}
		cout << endl << endl;
	}
	goto returntotaskmenu;
fetch:
	{
		int fetch_pos;

		short int fetchtask;
		cout << "Найти по индексу или по значению? \n";
		cout << "1. По индексу.  \n";
		cout << "2. По значению. \n";
		cout << "0. Выход из данной задачи.\n\n";

		cout << "Ввод: ";
		while (1)
		{
			cin >> fetchtask;
			if ((fetchtask >= 0) & (fetchtask <= 2))
				break;
			else
				cout << "Некорректный ввод, повторите попытку.\n";
		}
		cout << endl;
		bool vector_fetch_taskswitchflag = true;
		while (vector_fetch_taskswitchflag)
		{
			switch (fetchtask)
			{
			case 1:
				goto fetchbyIndex; system("pause"); system("cls");
				break;
			case 2:
				goto fetchbyValue; system("pause"); system("cls");
				break;
			case 0:
				vector_fetch_taskswitchflag = false;
				break;
			}
			cout << endl;
		}

	fetchbyValue:
		{
			int value;
			bool key = false;
			cout << "Введите искомое значение: ";
			cin >> value;
			for (int i = 0; i < arrN - 1; i++) { // поиск перебором
				if (vect[i] == value) {
					key = true;
					fetch_pos = i;
				}
			}
			if (key == false)
			{
				cout << "Такого элемента нет в массиве." << endl;
				goto returntotaskmenu;
			}
			else
				goto fetchvalue;
		}
	fetchbyIndex:
		cout << "Введите индекс эл-та, который необходимо найти:	";
		cin >> fetch_pos;

		fetchvalue:
		
		if (fetch_pos >= 0 && fetch_pos <= arrN - 1)
		{
			cout << "Запрошенный эл-т: " << "[" << fetch_pos << "] " << vect[fetch_pos];
		}
		else
			cout << "Некорректный ввод.";
		cout << endl << endl;
		goto returntotaskmenu;
	}
yourenotsupposedtobehere:
	system("cls");
}



void Task4()
{
	Task3();
	if (c4time_ins != 0)
	cout << fixed << "Время вставки: "  << c4time_ins << endl << endl;
	if (c4time_del != 0)
	cout << fixed << "Время удаления: " << c4time_del << endl << endl;

}



void Task5a()
{
	cout << "Данный таск делается аналогично таску 1А.\n";
}



void Task5b()
{
	cout << "Данный таск делается аналогично таску 1Б.\n";
}



void Task6()
{
	cout << "Здесь должно быть время выполнения таска 5А.\n";
}



void Task7()
{
	cout << "Данный таск делается аналогично таску 3.\n";
}



void Task8()
{
	cout << "Здесь должно быть время выполнения таска 7.\n";
}





// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
