//#ifndef TOOL_H
//#define TOOL_H
//#include<string>
//#include<iostream>
//class Tool
//{
//public:
//	Tool() = default;
//	Tool(int, const std::string&, int, int);
//	virtual ~Tool() = default;
//	virtual void display(void);
//
//private:
//	std::string factor_;
//	int tire_number_;
//	int limited_seat_;
//	int limited_weight_;
//};
//
//Tool::Tool(int tire_number, const std::string &factor, int seat, int weight) :factor_(factor), tire_number_(tire_number), limited_seat_(seat), limited_weight_(weight) {}
//void Tool::display(void)
//{
//	std::cout << "�������ң� " << factor_ << '\n'
//		<< "��̥���� " << tire_number_ << '\n'
//		<< "���������� " << limited_seat_ << '\n'
//		<< "���������� " << limited_weight_ << std::endl;
//}
//class Motor:public Tool
//{
//public:
//	Motor()=default;
//	Motor(int, const std::string&, int, int, int);
//	virtual ~Motor()=default;
//	virtual void display(void) override;
//private:
//	int horsepower_;
//};
//
//Motor::Motor(int tire_number, const std::string &factor, int seat, int weight,int horsepower):Tool(tire_number,factor,seat,weight),horsepower_(horsepower){}
//void Motor::display(void)
//{
//	Tool::display();
//	std::cout << "�������� " << horsepower_ << std::endl;
//}
//
//
//class Bicycle :public Tool
//{
//public:
//	Bicycle() = default;
//	Bicycle(int, const std::string&, int, int, int);
//	virtual ~Bicycle() = default;
//	virtual void display(void) override;
//protected:
//	int  diameter_ratio_;//̤������ֱ̥����
//};
//
//Bicycle::Bicycle(int tire_number, const std::string &factor, int seat, int weight, int diameter_ratio) :Tool(tire_number, factor, seat, weight), diameter_ratio_(diameter_ratio) {}
//void Bicycle::display(void)
//{
//	Tool::display();
//	std::cout << "̤������ֱ̥���ȣ� " << diameter_ratio_ << std::endl;
//}
//
//class Car:public Motor
//{
//public:
//	Car()=default;
//	Car(int, const std::string&, int, int, int, int);
//	virtual ~Car()=default;
//	virtual void display(void)override;
//
//private:
//	int one_way_fare_;
//};
//Car::Car(int tire_number, const std::string &factor, int seat, int weight, int horsepower,int one_way_fare) :Motor(tire_number, factor, seat, weight,horsepower), one_way_fare_(one_way_fare){}
//void Car::display(void)
//{
//	Motor::display();
//	std::cout << "���̷��ã� " << one_way_fare_ << std::endl;
//}
//
//
//
//class Bus :public Motor
//{
//public:
//	Bus() = default;
//	Bus(int, const std::string&, int, int, int, int);
//	virtual ~Bus() = default;
//	virtual void display(void)override;
//
//private:
//	int unit_price_;//���˵���
//};
//Bus::Bus(int tire_number, const std::string &factor, int seat, int weight, int horsepower, int unit_price) :Motor(tire_number, factor, seat, weight, horsepower), unit_price_(unit_price) {}
//void Bus::display(void)
//{
//	Motor::display();
//	std::cout << "���˵��ۣ� " << unit_price_ << std::endl;
//}
//
//
//class Truck :public Motor
//{
//public:
//	Truck() = default;
//	Truck(int, const std::string&, int, int, int, int);
//	~Truck() = default;
//	virtual void display(void)override;
//
//private:
//	int unit_price_;//���ص���
//};
//Truck::Truck(int tire_number, const std::string &factor, int seat, int weight, int horsepower, int unit_price) :Motor(tire_number, factor, seat, weight, horsepower), unit_price_(unit_price) {}
//void Truck::display(void)
//{
//	Motor::display();
//	std::cout << "���ص��ۣ� " << unit_price_ << std::endl;
//}
//
//
//
//
//class MotorBicycle:virtual public Motor,virtual public Bicycle
//{
//public:
//	MotorBicycle() = default;
//	MotorBicycle(int, const std::string&, int, int, int, int,int);
//	virtual ~MotorBicycle()=default;
//	virtual void display(void)override;
//private:
//	int market_value_;
//};
//
//MotorBicycle::MotorBicycle(int tire_number, const std::string &factor, int seat, int weight, int horsepower, int diameter_ratio,int market_value ) :Motor(tire_number, factor, seat, weight, horsepower),Bicycle(tire_number, factor, seat, weight, diameter_ratio),market_value_(market_value) {}
//void MotorBicycle::display(void)
//{
//	Motor::display();
//	std::cout << "̤������ֱ̥���ȣ� " << diameter_ratio_ <<'\n'
//		<<"�г��۸�: "<<market_value_<< std::endl;
//
//}
//#endif // !TOOL_H
#ifndef TOOL_H
#define TOOL_H
#include<string>
#include<iostream>
class Tool
{
public:
	Tool() = default;
	Tool(int, const std::string&, int, int);
	virtual ~Tool() = default;
	virtual void display(void);

private:
	std::string factor_;
	int tire_number_;
	int limited_seat_;
	int limited_weight_;
};

Tool::Tool(int tire_number, const std::string &factor, int seat, int weight) :factor_(factor), tire_number_(tire_number), limited_seat_(seat), limited_weight_(weight) {}
void Tool::display(void)
{
	std::cout << "�������ң� " << factor_ << '\n'
		<< "��̥���� " << tire_number_ << '\n'
		<< "���������� " << limited_seat_ << '\n'
		<< "���������� " << limited_weight_ << std::endl;
}
class Motor :virtual public Tool
{
public:
	Motor() = default;
	Motor(int, const std::string&, int, int, int);
	virtual ~Motor() = default;
	virtual void display(void) override;
private:
	int horsepower_;
};

Motor::Motor(int tire_number, const std::string &factor, int seat, int weight, int horsepower) :Tool(tire_number, factor, seat, weight), horsepower_(horsepower) {}
void Motor::display(void)
{
	Tool::display();
	std::cout << "�������� " << horsepower_ << std::endl;
}


class Bicycle :virtual public Tool
{
public:
	Bicycle() = default;
	Bicycle(int, const std::string&, int, int, int);
	virtual ~Bicycle() = default;
	virtual void display(void) override;
protected:
	int  diameter_ratio_;//̤������ֱ̥����
};

Bicycle::Bicycle(int tire_number, const std::string &factor, int seat, int weight, int diameter_ratio) :Tool(tire_number, factor, seat, weight), diameter_ratio_(diameter_ratio) {}
void Bicycle::display(void)
{
	Tool::display();
	std::cout << "̤������ֱ̥���ȣ� " << diameter_ratio_ << std::endl;
}

class Car :public Motor
{
public:
	Car() = default;
	Car(int, const std::string&, int, int, int, int);
	virtual ~Car() = default;
	virtual void display(void)override;

private:
	int one_way_fare_;
};
Car::Car(int tire_number, const std::string &factor, int seat, int weight, int horsepower, int one_way_fare) :Motor(tire_number, factor, seat, weight, horsepower), one_way_fare_(one_way_fare), Tool(tire_number, factor, seat, weight) {}
void Car::display(void)
{
	Motor::display();
	std::cout << "���̷��ã� " << one_way_fare_ << std::endl;
}



class Bus :public Motor
{
public:
	Bus() = default;
	Bus(int, const std::string&, int, int, int, int);
	virtual ~Bus() = default;
	virtual void display(void)override;

private:
	int unit_price_;//���˵���
};
Bus::Bus(int tire_number, const std::string &factor, int seat, int weight, int horsepower, int unit_price) :Motor(tire_number, factor, seat, weight, horsepower), unit_price_(unit_price) , Tool(tire_number, factor, seat, weight) {}
void Bus::display(void)
{
	Motor::display();
	std::cout << "���˵��ۣ� " << unit_price_ << std::endl;
}


class Truck :public Motor
{
public:
	Truck() = default;
	Truck(int, const std::string&, int, int, int, int);
	~Truck() = default;
	virtual void display(void)override;

private:
	int unit_price_;//���ص���
};
Truck::Truck(int tire_number, const std::string &factor, int seat, int weight, int horsepower, int unit_price) :Motor(tire_number, factor, seat, weight, horsepower), unit_price_(unit_price) , Tool(tire_number, factor, seat, weight) {}
void Truck::display(void)
{
	Motor::display();
	std::cout << "���ص��ۣ� " << unit_price_ << std::endl;
}




class MotorBicycle : public Motor,  public Bicycle
{
public:
	MotorBicycle() = default;
	MotorBicycle(int, const std::string&, int, int, int, int, int);
	virtual ~MotorBicycle() = default;
	virtual void display(void)override;
private:
	int market_value_;
};

MotorBicycle::MotorBicycle(int tire_number, const std::string &factor, int seat, int weight, int horsepower, int diameter_ratio, int market_value) :Motor(tire_number, factor, seat, weight, horsepower), Bicycle(tire_number, factor, seat, weight, diameter_ratio), market_value_(market_value), Tool(tire_number, factor, seat, weight) {}
void MotorBicycle::display(void)
{
	Motor::display();
	Bicycle::display();
	Tool::display();
	std::cout << "̤������ֱ̥���ȣ� " << diameter_ratio_ << '\n'
		<< "�г��۸�: " << market_value_ << std::endl;

}
#endif // !TOOL_H
