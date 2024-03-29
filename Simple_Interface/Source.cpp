//Реализовать класс Human.Создать несколько объектов класса Human;
//Добавить несколько свойств(не забывать добавить значимые поля в конструктор);
//Добавить getter'ы и setter'ы для созданных полей;
//Реализовать дочерний класс к Human.Например, Student, Character и др;
//Продемонстрировать обращение к свойствам объектов дочерних и родительских классов;
//Добавить несколько наследников от различных родителей(сделать дерево из минимум из 5 классов);
//Поэкспериментировать с множественным наследованием;
//Поэкспериментировать с абстрактными классами / интерфейсами.
//
//Каждый шаг фиксировать с помощью коммитов!
#include <iostream>
#include <string>

using namespace std;

class Human
{
private:

	int Age;
	string Name;
	int Heigh;

public:

	Human(int _Age, string _Name, int _Heigh)
	{
		SetAge(_Age);
		SetName(_Name);
		SetHeigh(_Heigh);
	}

	int GetAge()
	{
		return Age;
	}

	string GetName()
	{
		return Name;
	}

	int GetHeigh()
	{
		return Heigh;
	}

	void SetAge(int _Age)
	{
		if (_Age < 0)
		{
			cout << "Age cannot be lower then 0!";
			return;
		}
		Age = _Age;
	}

	void SetName(string _Name)
	{
		Name = _Name;
	}

	void SetHeigh(int _Heigh)
	{
		if (_Heigh <= 150)
		{
			cout << "Mood morning, karlik";
			Heigh = _Heigh;
			return;
		}

		else if (_Heigh < 0)
		{
			cout << "Heigh cannot be lower then 0!";
			return;
		}

		Heigh = _Heigh;

	}
};

class Student : public Human
{
private:
	int Course;
	string University;
public:

	Student(int _Age, string _Name, int _Heigh, int _Course, string _University) : Human(_Age, _Name, _Heigh) 
	{
		Course = _Course;
		University = _University;
		cout << "Deadline gorit? Da i bes s nim, u menya budet vtoraya komissiya, ya sdam vse dolgo vovremya!";
	}
	
	void SetCourse(int _Course)
	{
		Course = _Course;
	}

	void SetUniversity(string _University)
	{
		University = _University;
	}

	int GetCouse()
	{
		return Course;
	}

	string GetUniversity()
	{
		return University;
	}
};

int main() {
	string name = "Yakov";
	string uni = "FEFU";
	Human human(15, name, 163);
	Student s(15, name, 163, 3, uni);
	cout << s.GetAge();
}