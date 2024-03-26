//����������� ����� Human.������� ��������� �������� ������ Human;
//�������� ��������� �������(�� �������� �������� �������� ���� � �����������);
//�������� getter'� � setter'� ��� ��������� �����;
//����������� �������� ����� � Human.��������, Student, Character � ��;
//������������������ ��������� � ��������� �������� �������� � ������������ �������;
//�������� ��������� ����������� �� ��������� ���������(������� ������ �� ������� �� 5 �������);
//�������������������� � ������������� �������������;
//�������������������� � ������������ �������� / ������������.
//
//������ ��� ����������� � ������� ��������!
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

	Human(int& _Age, string& _Name, int& _Heigh)
	{
		Age = _Age;
		Name = _Name;
		Heigh = _Heigh;
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

	void SetAge(int& _Age)
	{
		if (_Age < 0)
		{
			cout << "Age cannot be lower then 0!";
			return;
		}
		Age = _Age;
	}

	void SetName(string& _Name)
	{
		Name = _Name;
	}

	void SetHeigh(int& _Heigh)
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

int main() {
	
}