#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;

////����ĳ�ʼ��������
////1.���캯����ʼ��
////2.������������
//
//class Person
//{
//public:
//	//1.1���캯��  �޷���ֵ������void
//	//��������������ͬ
//	//���캯�������в�����������
//	//�������ʱ�����캯���Զ�����
//	Person()
//	{
//		cout << "Person ���캯������" << endl;
//	}
//
//	//2.��������  �޷���ֵ������void
//	//��������������ͬ������������ǰ�� ~
//	//���������������в���������������
//	//����������ǰ�Զ���������������ֻ����һ��
//	~Person()
//	{
//		cout<< "Person ������������" << endl;
//	}
//};
//
////������������Ǳ����е�ʵ�֣�����Լ����ṩ�����������ṩһ����ʵ�ֵĹ��������
//
//void test01()
//{
//	Person p;//��ջ�ϵ�����,testִ�к��ͷŶ���
//}
//
//int main()
//{
//	//test01();
//	Person p;
//	system("pause");
//	return 0;
//}

//1.���캯���ķ��༰����
//����
//  ���ղ�������  �޲ι���  �вι���
//class Person
//{
//public:
//	//���캯��
//	Person()
//	{
//		cout << "Person���޲ι��캯������" << endl;
//	}
//	Person(int a)
//	{
//		age = a;
//		cout << "Person���вι��캯������" << endl;
//	}
//	//�������캯��
//	Person( const Person &p )
//	{
//		//��������������������Կ�����������
//		cout << "Person�Ŀ������캯������" << endl;
//		age = p.age;
//	}
//
//
//	~Person()
//	{
//		cout<< "Person��������������" << endl;
//	}
//
//	int age;
//};
//
//// ����
//void test01()
//{
//	//���ŷ�
//	//Person p1;//Ĭ�Ϲ��캯������
//	//Person p2(10);//�вι��캯������
//	//Person p3(p2);//�������캯��
//	// 
//	//ע������1
//	// ����Ĭ�Ϲ��캯��ʱ��Ҫ�ӣ���
//	// ��Ϊ���д���Person p1()������������Ϊ�Ǻ�������,���ᴴ������
//	//
//	//cout << "p2�����䣺" << p2.age << endl;
//	//cout << "p3�����䣺" << p3.age << endl;
//	
//	//��ʾ��
//	//Person p1;
//	//Person p2 = Person(10);//�вι���
//	//Person p3 = Person(p2);//��������
//	// 
//	//ע������2
//	// ��Ҫ���ÿ������캯����ʼ��һ����������
//	// ��������Ϊ Person(p3)==Person p3���Ƕ�������
//	// 
//	//Person(10);//�������󣬵�ǰ��ִ�н�����ϵͳ����������������
//	//cout << "aaaaa" << endl;
//
//	//��ʽת����
//	Person p4 = 10;//�൱��д�� Person p4=Person(10)
//	//�вι���
//	Person p5 = Person(p4);//��������
//}
//
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}


//�������캯������ʱ��
//class Person
//{
//public:
//	Person()
//	{
//		cout << "PersonĬ�Ϲ��캯������" << endl;
//	}
//	Person(int age)
//	{
//		cout << "Person�вι��캯������" << endl;
//		m_Age = age;
//	}
//	Person(const Person &p)
//	{
//		cout << "Person�������캯������" << endl;
//		m_Age = p.m_Age;
//	}
//	~Person()
//	{
//		cout << "Person������������" << endl;
//	}
//
//	int m_Age;
//};
//
////1,ʹ��һ���Ѿ�������ϵĶ�������ʼ���¶���
//void test01()
//{
//	Person p1(20);
//	Person p2(p1);
//	cout << "p2�����䣺" << p2.m_Age << endl;
//}
//
////2,ֵ���ݵķ�ʽ������������ֵ
//void doWork(Person p)//ֵ�����и������൱�ڿ���
//{
//
//}
//void test02()
//{
//	Person p;
//	doWork(p);
//}
//
////3,ֵ���ݷ��ؾֲ�����
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


//���캯�����ù���
//1.����һ���࣬C++�����������ÿ�����������3������
//Ĭ�Ϲ��죨��ʵ�֣�
//������������
//�������죨ֵ������

//2.���д���вι��캯�����������Ͳ����ṩĬ�Ϲ��죬����Ȼ�ṩ��������
//���д�˿������캯���������������ṩ������ͨ���캯��
//class Person
//{
//public:
//	Person()
//	{
//		cout << "Person��Ĭ�Ϲ��캯������" << endl;
//	}
//
//	Person(int age)
//	{
//		cout << "Person���вι��캯������" << endl;
//		m_Age = age;
//	}
//
//	/*Person(const Person &p)
//	{
//		cout << "Person�Ŀ������캯������" << endl;
//		m_Age = p.m_Age;
//	}*/
//
//	~Person()
//	{
//		cout << "Person��������������" << endl;
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
//	Person p2(p);//ֵ�������������Բ�����Ҳ����
//	cout << "p2�����䣺" << p2.m_Age << endl;
//}
//
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}


//��ǳ����
//ǳ���������Ƕ������ڴ��ظ��ͷ�,��Ҫ��������������
//
//class Person
//{
//public:
//	Person()
//	{
//		cout << "Person��Ĭ�Ϲ��캯������" << endl;
//	}
//	Person(int age,int height)
//	{
//		cout << "Person���вι��캯������" << endl;
//		m_Age = age;
//		m_Height = new int(height);
//		
//	}
//
//	//�Լ�ʵ�ֿ������캯�������ǳ����������
//	Person(const Person &p)
//	{
//		cout << "Person���������ĵ���" << endl;
//		m_Age = p.m_Age;
//		//���
//		m_Height = new int(*p.m_Height);
//	}
//
//	~Person()
//	{
//		//�������뽫���������������ͷŲ���
//		if (m_Height != NULL)
//		{
//			delete m_Height;
//			m_Height = NULL;
//		}
//		cout << "Person��������������" << endl;
//	}
//	int m_Age;
//	int* m_Height;
//};
//
//void test01()
//{
//	Person p1(18, 180);
//	cout << "p1������:" << p1.m_Age << " p1�����:" << *p1.m_Height << endl;
//
//	Person p2(p1);
//	cout << "p2������:" << p2.m_Age << " p2�����:" << *p2.m_Height << endl;
//}
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}


//��ʼ���б�
//class Person
//{
//public:
//	//��ͳ��ʼ������
//	/*Person(int a,int b,int c)
//	{
//		m_A = a;
//		m_B = b;
//		m_C = c;
//	}*/
//
//	//��ʼ���б��ʼ������
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

//�������Ϊ���Ա
//#include<string.h>
//class Phone
//{
//public:
//
//	Phone(string pName)
//	{
//		cout << "Phone���캯������" << endl;
//		m_PName = pName;
//	}
//	~Phone()
//	{
//		cout << "Phone������������" << endl;
//	}
//	string m_PName;
//};
//
//class Person
//{
//public:
//	//Phone m_Phone=pName//��ʽת����
//	Person(string name, string pName):m_Name(name),m_Phone(pName)
//	{
//		cout << "Person���캯������" << endl;
//	}
//	~Person()
//	{
//		cout << "Person������������" << endl;
//	}
//	string m_Name;
//	Phone m_Phone;
//};
////�������������Ϊ�����Ա������ʱ�ȹ��������࣬�ٹ��챾��
////�����������ͷű��࣬���ͷ�������
//void test01()
//{
//	Person p("����", "ƻ��MAX");
//	cout << p.m_Name << "����" << p.m_Phone.m_PName << endl;
//}
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}

//��̬��Ա����
//1.���ж��󶼹���ͬһ������
//2.��̬��Ա����ֻ�ܷ��ʾ�̬��Ա����
class Person
{
public:
	//��̬��Ա����
	static void func()
	{
		m_A = 100;//��̬��Ա�������Է��ʾ�̬��Ա����
		//m_B = 200;//��̬��Ա���������Է��ʷǾ�̬��Ա����
		cout << "static void func�ĵ���" << endl;
	}

	static int m_A;//��̬��Ա����
	int m_B;//�Ǿ�̬��Ա����

	//��̬����Ҳ�з���Ȩ��
private:
	static void func2()
	{
		cout << "static void func(2)�ĵ���" << endl;
	}
};

int Person::m_A = 0;

//���ַ��ʷ�ʽ
void test01()
{
	//1��ͨ������
	Person p;
	p.func();

	//2��ͨ������
	Person::func();
	//Person::func2();//������ʲ���˽�о�̬��Ա
}
int main()
{
	test01();
	system("pause");
	return 0;
}