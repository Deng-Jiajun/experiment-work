#ifndef STUDENT_H
#define STUDENT_H
#include<string>
#include<iostream>
#include<iomanip>
constexpr unsigned numberOfStudent(3);
constexpr unsigned numberOfCourse(3);
const std::string course[3] = { "�������","�źŴ���","���ݽṹ" };
class Student
{
public:
	void GetInformation(void);
	Student() :grade{ 0,0,0 }, studentsName("NULL"){}
	Student(const Student&);
	~Student() = default;
	void PrintInfo(void);
	static void dispfail();

private:
	static unsigned numberOfFail;
	double averageGrade = 0;
	double sumGrade=0;
	double grade[numberOfCourse];
	std::string studentsName;
	std::string studentsId;
};
unsigned Student::numberOfFail = 0;


Student::Student(const Student &stu)
{
	*this = stu;
}
void Student::GetInformation(void)
{
	std::cout << "����������"; std::cin >> studentsName;
	std::cout << "������ѧ��"; std::cin >> studentsId;
	for (unsigned i = 0; i != numberOfCourse; ++i)
	{
		std::cout << course[i]; std::cin >> grade[i];
		sumGrade += grade[i];
	}
	std::cout << std::endl;
	averageGrade= sumGrade / numberOfCourse;
	bool flag = true;
	for (unsigned i = 0; i != numberOfCourse; ++i)
	{
		if (grade[i] < 60)
		{
			flag = false;
			break;
		}
	}
	if (!flag)numberOfFail++;
}
void Student::PrintInfo(void)
{
	std::cout <<std::left<< std::setw(6) << studentsName << std::setw(6) << studentsId<<std::ends;
	for (unsigned i = 0; i != numberOfCourse; ++i)
	{
		std::cout << std::setw(10)<< grade[i]<<" ";
	}
	std::cout << std::setw(6) << sumGrade << std::setw(10) << averageGrade << std::endl;
} 

void Student::dispfail(void)
{
	std::cout << "��������" << numberOfStudent << " " << "������������ " << numberOfFail << std::endl;
}

void UserInterface(void)
{
	Student s[numberOfStudent];
	for (unsigned i = 0; i != numberOfStudent; ++i)
	{
		std::cout<<std::left << "�����" << i + 1 << "λѧ������Ϣ" << std::endl;
		s[i].GetInformation();
		std::cout << std::flush;
	}
	std::cout << std::string(55, '=') << '\n' <<
		std::setw(6) <<"����"<< std::setw(6) <<"ѧ�� " << std::setw(10) << course[0] << std::setw(10) << course[1] << std::setw(10) << course[2] << std::setw(6)<<"  �ܷ�"<< std::setw(6)<<" ƽ����\n"<< std::string(55, '=') << std::endl;
	for (unsigned i = 0; i != numberOfStudent; ++i)
	{
		s[i].PrintInfo();
	}
	Student::dispfail();	
}
#endif // !STUDENT_H
