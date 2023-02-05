#include <bits/stdc++.h>

using namespace std;

//************************************/     CLASS STRUCTURE     /************************************//

/*
class person
{
private:
    string name;
public:
    string surname;
    void setSurname(string isurname)
    {
        surname = isurname;
    }
    void setName(string iname)              // private values can be accessed in class functions
    {
        name = iname;
    }
    person(string iname);                   // class Constructor
    ~person()                               // class Destructors
    {
        cout << name << surname << endl;
    }
};

person::person(string iname)                // predefined functions can be written outside of the class
{
    name = iname;
    cout << name << endl;
}


int main()
{
    person p1("alperen");
    p1.setName("alperenlcr");
    p1.setSurname(" X");
    cout << "end code" << endl;
}
*/

//************************************/     INHERITANCE 1     /************************************//

/*
class Person
{
	int id;
	char name[100];

	public:
		void set_p(int, char[]);
		void display_p();
};

void Person::set_p(int id, char n[])
{
	this->id = id;
	strcpy(this->name, n);	
}

void Person::display_p()
{
	cout << endl << id << "\t" << name;
}

class Student: private Person
{
	char course[50];
	int fee;
	public:
	Student(int, char[], char[], int);
	void display_s();
};

Student::Student(int id, char n[], char c[], int f)
{
	set_p(id, n);
	strcpy(course, c);
	fee=f;
}

void Student::display_s()
{
	display_p();
	cout << "t" << course << "\t" << fee;
}


int main()
{
	Student s(1001, "Ram", "B.Tech", 2000);
	s.display_s();
	return 0;
}
*/

//************************************/     INHERITANCE 2     /************************************//

/*
// C++ Implementation to show that a derived class
// doesn’t inherit access to private data members.
// However, it does inherit a full parent object.
class A {
public:
	int x;

protected:
	int y;

private:
	int z;
};

class B : public A {
	// x is public
	// y is protected
	// z is not accessible from B
};

class C : protected A {
	// x is protected
	// y is protected
	// z is not accessible from C
};

class D : private A // 'private' is default for classes
{
	// x is private
	// y is private
	// z is not accessible from D
};
*/

//************************************/     Operator Overloading      /************************************//

/*
// cpp has function overloading too as java: example -> func(int x) , func(double x) , func(int x, int y)
class Complex {
private:
	int real, imag;
public:
	Complex(int r = 0, int i =0) {real = r; imag = i;}
	
	// This is automatically called when '+' is used with
	// between two Complex objects
	Complex operator + (Complex const &obj) {
		Complex res;
		res.real = real + obj.real;
		res.imag = imag + obj.imag;
		return res;
	}
	void print() { cout << real << " + i" << imag << endl; }
};

int main()
{
	Complex c1(10, 5), c2(2, 4);
	Complex c3 = c1 + c1 + c2; // An example call to "operator+"
	c3.print();
}
*/

//************************************/     POLYMORPHISM      /************************************//

/*
class base
{
public:
	virtual void print ()
	{ cout<< "print base class" <<endl; }

	void show ()
	{ cout<< "show base class" <<endl; }
};

class derived:public base
{
public:
	void print () //print () is already virtual function in derived class, we could also declared as virtual void print () explicitly
	{ cout<< "print derived class" <<endl; }

	void show ()
	{ cout<< "show derived class" <<endl; }
};

//main function
int main()
{
	base *bptr;
	derived d;
	bptr = &d;

	//virtual function, binded at runtime (Runtime polymorphism)
	bptr->print();

	// Non-virtual function, binded at compile time
	bptr->show();

	return 0;
}
*/