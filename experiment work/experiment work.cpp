/*N阶矩阵相加*/
//#include<iostream>
//#include<vector>
//using namespace std;
//
//vector<vector<int>> cul_result(const vector<vector<int>> &ivecvec1, const vector<vector<int>> &ivecvec2)
//{
//	unsigned N = static_cast<unsigned>(ivecvec1.size());
//	vector<vector<int>> ivecvec(N);
//	for (unsigned i = 0; i != N; ++i)
//	{
//		for (unsigned j = 0; j != N; ++j)
//		{
//			int tmp = ivecvec1[i][j] + ivecvec2[i][j];
//			ivecvec[i].push_back(tmp);
//		}
//	}
//	return ivecvec;
//}
//vector<vector<double>> cul_result(const vector<vector<double>> &dvecvec1, const vector<vector<double>> &dvecvec2)
//{
//	unsigned N = static_cast<unsigned>(dvecvec1.size());
//	vector<vector<double>> dvecvec(N);
//	for (unsigned i = 0; i != N; ++i)
//	{
//		for (unsigned j = 0; j != N; ++j)
//		{
//			double tmp = dvecvec1[i][j] + dvecvec2[i][j];
//			dvecvec[i].push_back(tmp);
//		}
//	}
//	return dvecvec;
//}
//vector<vector<int>> create_int(void)
//{
//	unsigned N;
//	cout << "Enter N : ";
//	cin >> N;
//	vector<vector<int>> ivecvec(N);
//	for (auto &ivec : ivecvec)
//	{
//		for (int i = 0; i != N; ++i)
//		{
//			int tmp;
//			cin >> tmp;
//			ivec.push_back(tmp);
//		}
//	}
//	return ivecvec;
//}
//
//vector<vector<double>> create_double(void)
//{
//	unsigned N;
//	cout << "Enter N : ";
//	cin >> N;
//	vector<vector<double>> dvecvec(N);
//	for (auto &dvec : dvecvec)
//	{
//		for (unsigned i = 0; i != N; ++i)
//		{
//			double tmp;
//			cin >> tmp;
//			dvec.push_back(tmp);
//		}
//	}
//	return dvecvec;
//}
//template<typename T>
//void Print(const vector<vector<T>> &Tvecvec)
//{
//	for (const auto &Tvec : Tvecvec)
//	{
//		for (const auto &T : Tvec)
//			cout << T<<" ";
//		cout << endl;
//	}
//}
//int main(void)
//{
//	vector<vector<int>> ivecvec1 = create_int();
//	vector<vector<int>> ivecvec2 = create_int();
//	vector<vector<int>> ivecvec=cul_result(ivecvec1, ivecvec2);
//	Print(ivecvec);
//	vector<vector<double>> dvecvec1 = create_double();
//	vector<vector<double>> dvecvec2 = create_double();
//	vector<vector<double>> dvecvec = cul_result(dvecvec1, dvecvec2);
//	Print(dvecvec);
//	system("pause");
//	return 0;
//}


//#include<iostream>
//#include<string>
//#include"bank.h"
//using namespace std;
//int main(void)
//{
//	bank b("123012016", 1000);
//	b.UserInterface();
//	system("pause");
//}


//#include<iostream>
//#include"student.h"
//using namespace std;
//int main(void)
//{
//	UserInterface();
//	system("pause");
//	return 0;
//}


//#include<iostream>
//#include<vector>
//using namespace std;
//template<typename T>
//T MinimalValue(void)
//{
//	cout << "Enter the value" << endl;
//	T tmp, min;
//	cin >> min;
//	while (cin >> tmp)
//	{
//		if (tmp < min)
//			min = tmp;
//	}
//	return min;
//}
//
//int main(void)
//{
//	
//	cout<<MinimalValue<char>();
//	system("pause");
//	return 0;
//}

//#include<iostream>
//#include"stack.h"
//#include"stack.cpp"
//using namespace std;
//
//int main(void)
//{
//	stack<int> istack(5);
//
//	StackState(istack);
//	
//	int tmp(0);
//	while (!istack.isFull())
//	{
//		istack.push(++tmp);
//		cout << istack.TopValue() << endl;
//	}
//	StackState(istack);
//
//
//	while (!istack.isEmpty())
//	{
//		cout << istack.TopValue() << endl;
//		istack.pop();
//	}
//	StackState(istack);
//
//
//	stack<char> cstack(6);
//	//stack<char>* cstack = new stack<char>(6);
//	char ctmp='a';
//	StackState(cstack);
//
//
//
//	while (!cstack.isFull())
//	{
//		cstack.push(ctmp++);
//		cout << cstack.TopValue() << endl;
//	}
//	StackState(cstack);
//	//cstack.push('y');test
//
//	while (!cstack.isEmpty())
//	{
//		cout << cstack.TopValue() << endl;
//		cstack.pop();
//	}
//	StackState(cstack);
//	
//	/*StackState(*cstack);
//
//
//	
//	while (!cstack->isFull())
//	{
//		cstack->push(ctmp++);
//		cout << cstack->TopValue() << endl;
//	}
//	StackState(*cstack);
//
//
//	while (!cstack->isEmpty())
//	{
//		cout << cstack->TopValue() << endl;
//		cstack->pop();
//	}
//	StackState(*cstack);
//	delete cstack;*/
//	system("pause");
//	return 0;
//}

//#include<iostream>
//#include"Tool.h"
//int main(void)
//{
//	Tool To(1, "changjia", 1, 2);
//	To.display();
//	Motor M(1, "changjia", 1, 2, 3);
//	M.display();
//	Car C(1,"厂家",2,3,4,5);
//	C.display();
//	Bus B(1, "changjia", 2, 3, 4, 5);
//	B.display();
//	Truck T(1, "C", 2, 3, 4, 5);
//	T.display();
//	std::cout << "***********\n";
//	MotorBicycle MB(1, "CHANGJIA", 2, 3, 4, 5, 6);
//	MB.display();
//	system("pause");
//	return 0;
//}