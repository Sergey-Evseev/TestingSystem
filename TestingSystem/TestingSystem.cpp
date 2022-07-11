//Экзаменационное задание: Задание 2: Реализовать полнофункциональную систему тестирования.

#pragma once
#include <iostream>
#include <string>
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


int main()
{
    std::cout << "Hello World!\n";
}
