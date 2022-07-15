//Экзаменационное задание: Задание 2: Реализовать полнофункциональную систему тестирования.
#pragma once
#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Database
{

	class Test //представить в виде вектора а не дерева
	{
	public:
		string question; //поле вопрос
		int variant; //поле вариант
		Test* next; //указатель односвязного списка

		//через map - вопрос создается ключом
		//вопросы и ответы в одном файле
		//результаты выполнения теста сделать в виде вектора и записывать в файл, с правильными ответами и ответами пользователя
	};
	class Catalogue {
		//подпапки по темам, в каждую тему записывать по файлу
		class Theme; //класс для перемещения по директории и вывода вопроса теста 
	};
	

	//тестирование производится из класса пользователя

	class User { //класс пользователя сделать через наследование
		string user, password;
		class Admin;
		void auth();
		void cypher(); //шифрование методом Цезаря 
		//https://ru.stackoverflow.com/questions/737102/%D0%A8%D0%B8%D1%84%D1%80-%D0%A6%D0%B5%D0%B7%D0%B0%D1%80%D1%8F-c
	};

	class Tree //дерево для хранения данных
	{
	public:
		Tree* parent;
		Tree* left;
		Tree* right;
		int number;
		Test* list;
	};

private: //элементы дерева базы данных
	int size;
	Tree* root;

public:
	
	Database();
	~Database();

	void add(int value, string question); //добавление вопроса с правильным ответом
	void add(Tree*&, Tree*, int variant, string question); //перегрузка add для формирования дерева
	void PrintAll(Tree*); //вывод всех вопросов теста
	void PrintNumber(int input); // вывод конкретного вопроса 
	Tree* PrintNumber(Tree* root, int input);
	
	void DeleteAll(Tree* temp); //функция деструктора
};


int main() {
	vector <double> v; 
	int read_double(v)
	{
		int i = 0;
		while (i<size() && cin >> v[i]); i++; return i;);
	};
}
