#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;

////对象的初始化和清理
////1.构造函数初始化
////2.析构函数清理
//
//class Person
//{
//public:
//	//1.1构造函数  无返回值，不用void
//	//函数名与类名相同
//	//构造函数可以有参数，可重载
//	//创造对象时，构造函数自动调用
//	Person()
//	{
//		cout << "Person 构造函数调用" << endl;
//	}
//
//	//2.析构函数  无返回值，不用void
//	//函数名与类名相同，还需在名称前加 ~
//	//析构函数不可以有参数，不发生重载
//	//对象在销毁前自动调用析构函数，只调用一次
//	~Person()
//	{
//		cout<< "Person 析构函数调用" << endl;
//	}
//};
//
////构造和析构都是必须有的实现，如果自己不提供，编译器会提供一个空实现的构造和析构
//
//void test01()
//{
//	Person p;//在栈上的数据,test执行后释放对象
//}
//
//int main()
//{
//	//test01();
//	Person p;
//	system("pause");
//	return 0;
//}

//1.构造函数的分类及调用
//分类
//  按照参数分类  无参构造  有参构造
//class Person
//{
//public:
//	//构造函数
//	Person()
//	{
//		cout << "Person的无参构造函数调用" << endl;
//	}
//	Person(int a)
//	{
//		age = a;
//		cout << "Person的有参构造函数调用" << endl;
//	}
//	//拷贝构造函数
//	Person( const Person &p )
//	{
//		//将传入的人身上所有属性拷贝到我身上
//		cout << "Person的拷贝构造函数调用" << endl;
//		age = p.age;
//	}
//
//
//	~Person()
//	{
//		cout<< "Person的析构函数调用" << endl;
//	}
//
//	int age;
//};
//
//// 调用
//void test01()
//{
//	//括号法
//	//Person p1;//默认构造函数调用
//	//Person p2(10);//有参构造函数调用
//	//Person p3(p2);//拷贝构造函数
//	// 
//	//注意事项1
//	// 调用默认构造函数时不要加（）
//	// 因为这行代码Person p1()，编译器会认为是函数声明,不会创建对象
//	//
//	//cout << "p2的年龄：" << p2.age << endl;
//	//cout << "p3的年龄：" << p3.age << endl;
//	
//	//显示法
//	//Person p1;
//	//Person p2 = Person(10);//有参构造
//	//Person p3 = Person(p2);//拷贝构造
//	// 
//	//注意事项2
//	// 不要利用拷贝构造函数初始化一个匿名对象
//	// 编译器认为 Person(p3)==Person p3，是对象声明
//	// 
//	//Person(10);//匿名对象，当前行执行结束后，系统立即回收匿名对象
//	//cout << "aaaaa" << endl;
//
//	//隐式转换法
//	Person p4 = 10;//相当于写了 Person p4=Person(10)
//	//有参构造
//	Person p5 = Person(p4);//拷贝构造
//}
//
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}


//拷贝构造函数调用时机
//class Person
//{
//public:
//	Person()
//	{
//		cout << "Person默认构造函数调用" << endl;
//	}
//	Person(int age)
//	{
//		cout << "Person有参构造函数调用" << endl;
//		m_Age = age;
//	}
//	Person(const Person &p)
//	{
//		cout << "Person拷贝构造函数调用" << endl;
//		m_Age = p.m_Age;
//	}
//	~Person()
//	{
//		cout << "Person析构函数调用" << endl;
//	}
//
//	int m_Age;
//};
//
////1,使用一个已经创建完毕的对象来初始化新对象
//void test01()
//{
//	Person p1(20);
//	Person p2(p1);
//	cout << "p2的年龄：" << p2.m_Age << endl;
//}
//
////2,值传递的方式给函数参数传值
//void doWork(Person p)//值传递有副本，相当于拷贝
//{
//
//}
//void test02()
//{
//	Person p;
//	doWork(p);
//}
//
////3,值传递返回局部对象
//Person doWork2()
//{
//	Person p1;
//	cout << (int*)&p1 << endl;
//	return p1;
//}
//void test03()
//{
//	Person p = doWork2();
//	cout << (int*)&p << endl;
//}
//
//
//int main()
//{
//	//test01();
//	//test02();
//	test03();
//	system("pause");
//	return 0;
//}


//构造函数调用规则
//1.创建一个类，C++编译器都会给每个类添加至少3个函数
//默认构造（空实现）
//析构函数（）
//拷贝构造（值拷贝）

//2.如果写了有参构造函数，编译器就不再提供默认构造，但依然提供拷贝构造
//如果写了拷贝构造函数，编译器不再提供其他普通构造函数
//class Person
//{
//public:
//	Person()
//	{
//		cout << "Person的默认构造函数调用" << endl;
//	}
//
//	Person(int age)
//	{
//		cout << "Person的有参构造函数调用" << endl;
//		m_Age = age;
//	}
//
//	/*Person(const Person &p)
//	{
//		cout << "Person的拷贝构造函数调用" << endl;
//		m_Age = p.m_Age;
//	}*/
//
//	~Person()
//	{
//		cout << "Person的析构函数调用" << endl;
//	}
//
//	int m_Age;
//};
//
//void test01()
//{
//	Person p;
//	p.m_Age = 18;
//
//	Person p2(p);//值拷贝操作，所以不创建也会有
//	cout << "p2的年龄：" << p2.m_Age << endl;
//}
//
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}


//深浅拷贝
//浅拷贝问题是堆区的内存重复释放,需要利用深拷贝解决问题
//
//class Person
//{
//public:
//	Person()
//	{
//		cout << "Person的默认构造函数调用" << endl;
//	}
//	Person(int age,int height)
//	{
//		cout << "Person的有参构造函数调用" << endl;
//		m_Age = age;
//		m_Height = new int(height);
//		
//	}
//
//	//自己实现拷贝构造函数，解决浅拷贝的问题
//	Person(const Person &p)
//	{
//		cout << "Person拷贝函数的调用" << endl;
//		m_Age = p.m_Age;
//		//深拷贝
//		m_Height = new int(*p.m_Height);
//	}
//
//	~Person()
//	{
//		//析构代码将堆区开辟数据做释放操作
//		if (m_Height != NULL)
//		{
//			delete m_Height;
//			m_Height = NULL;
//		}
//		cout << "Person的析构函数调用" << endl;
//	}
//	int m_Age;
//	int* m_Height;
//};
//
//void test01()
//{
//	Person p1(18, 180);
//	cout << "p1的年龄:" << p1.m_Age << " p1的身高:" << *p1.m_Height << endl;
//
//	Person p2(p1);
//	cout << "p2的年龄:" << p2.m_Age << " p2的身高:" << *p2.m_Height << endl;
//}
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}


//初始化列表
//class Person
//{
//public:
//	//传统初始化操作
//	/*Person(int a,int b,int c)
//	{
//		m_A = a;
//		m_B = b;
//		m_C = c;
//	}*/
//
//	//初始化列表初始化属性
//	Person(int a,int b,int c) :m_A(a), m_B(b), m_C(c)
//	{
//
//	}
//	int m_A;
//	int m_B;
//	int m_C;
//};
//
//void test01()
//{
//	//Person p(10,20,30);
//	Person p(30,20,10);
//	cout << "m_A=" <<p.m_A << endl;
//	cout << "m_B=" << p.m_B << endl;
//	cout << "m_C=" << p.m_C << endl;
//}
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}

//类对象作为类成员
//#include<string.h>
//class Phone
//{
//public:
//
//	Phone(string pName)
//	{
//		cout << "Phone构造函数调用" << endl;
//		m_PName = pName;
//	}
//	~Phone()
//	{
//		cout << "Phone析构函数调用" << endl;
//	}
//	string m_PName;
//};
//
//class Person
//{
//public:
//	//Phone m_Phone=pName//隐式转换法
//	Person(string name, string pName):m_Name(name),m_Phone(pName)
//	{
//		cout << "Person构造函数调用" << endl;
//	}
//	~Person()
//	{
//		cout << "Person析构函数调用" << endl;
//	}
//	string m_Name;
//	Phone m_Phone;
//};
////当其他类对象作为本类成员，构造时先构造其他类，再构造本类
////析构函数先释放本类，再释放其他类
//void test01()
//{
//	Person p("张三", "苹果MAX");
//	cout << p.m_Name << "拿着" << p.m_Phone.m_PName << endl;
//}
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}

//静态成员函数
//1.所有对象都共享同一个函数
//2.静态成员函数只能访问静态成员变量
class Person
{
public:
	//静态成员函数
	static void func()
	{
		m_A = 100;//静态成员函数可以访问静态成员变量
		//m_B = 200;//静态成员函数不可以访问非静态成员变量
		cout << "static void func的调用" << endl;
	}

	static int m_A;//静态成员变量
	int m_B;//非静态成员变量

	//静态函数也有访问权限
private:
	static void func2()
	{
		cout << "static void func(2)的调用" << endl;
	}
};

int Person::m_A = 0;

//两种访问方式
void test01()
{
	//1，通过对象
	Person p;
	p.func();

	//2，通过类名
	Person::func();
	//Person::func2();//类外访问不到私有静态成员
}
int main()
{
	test01();
	system("pause");
	return 0;
}