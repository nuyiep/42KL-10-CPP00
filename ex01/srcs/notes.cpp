
/* learncpp.com */
/* cplusplus.com */

#include <iostream>
#include <string>

/* 1. Creating a class */

class AClass
{
	public:
		void coolSaying()
		{
			std::cout << "preachin to the choir" << std::endl;
		}
};

int main(void)
{
	AClass	AObject;
	AObject.coolSaying();
	return (0);
}

/* 2. Getters and setters */
class BClass
{
	public:
		void setName(std::string x)
		{
			name = x;
		}
		std::string getName()
		{
			return name;
		}
	private:
		std::string name;
};

int main()
{
	BClass bo;
	bo.setName("Sir William Wallace\n");
	std::cout << bo.getName();
	return (0);
}

/* Constructor */
/* same name as class name - automatically called */
/* no return type, not even void */
class CClass
{
	public:
		CClass(std::string z)
		{
			setName(z);
		}
		void setName(std::string x)
		{
			name = x;
		}
		std::string getName()
		{
			return name;
		}
	private:
		std::string name;
};

int main(void)
{
	CClass co("Enola Holmes");
	std::cout << co.getName();
	
	return (0);
}
