//#include"stack.h"
//#include<iostream>
//template<typename T>
//stack<T>::stack() :stack(10) {};
//template<typename T>
//stack<T>::stack(unsigned n) : size(n), Top(-1)
//{
//	sptr = new T[size];
//}
//template<typename T>
//stack<T>::~stack()
//{
//	delete sptr;
//}
//template<typename T>
//void stack<T>::push(T element)
//{
//	if(!isFull())
//	{
//		++Top;
//		sptr[Top] = element;
//	}
//	else
//	{
//		std::cerr << "ջ����" << std::endl;
//	}
//}
//template<typename T>
//void stack<T>::pop(void)
//{
//	if (!isEmpty())
//		--Top;
//	else
//	{
//		std::cerr << "ջ�գ�" << std::endl;
//	}
//}
//template<typename T>
//bool stack<T>::isEmpty(void)
//{
//	return Top == -1;
//}
//template<typename T>
//bool stack<T>::isFull(void)
//{
//	return Top == size-1;
//}
//template<typename T>
//T stack<T>::TopValue(void)
//{
//	return sptr[Top];
//}
//
//
//
////����ջ״̬����
//template<typename T>
//void StackState(stack<T> &T_stack)
//{
//	if (T_stack.isEmpty())cout << "��" << endl;
//	if (T_stack.isFull())cout << "��" << endl;
//}