#include "Array.hpp"
#include "qolMacros.hpp"
#include "Animal.hpp"
#include "Dog.hpp"

int main(void)
{
	Array<int> a1;
	Array<int> a2(5);
	Array<int> a3(a2);
	Array<int> a4(a1);
	a4 = a3;
	Array<int> a5(0);
	// Array<int> a6(-2);

	println("a1 size: " << a1.size());
	println("a2 size: " << a2.size());
	println("a3 size: " << a3.size());

	for (unsigned int i = 0; i < a3.size(); i++)
	{
		println(a3[i]);
	}

	Array<float> f1;
	Array<float> f2(5);
	Array<float> f3(f2);
	Array<float> f4(f1);
	f4 = f3;
	Array<float> f5(0);
	// Array<int> f6(-2);

	println("f1 size: " << f1.size());
	println("f2 size: " << f2.size());
	println("f3 size: " << f3.size());

	for (unsigned int i = 0; i < f3.size(); i++)
	{
		println(f3[i]);
	}

	Array<Dog> d1;
	Array<Dog> d2(5);
	for (unsigned int i = 0; i < d2.size(); i++)
	{
		d2[i].makeSound();
	}
}
