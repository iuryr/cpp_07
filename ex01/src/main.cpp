#include "iter.hpp"
#include "qolMacros.hpp"

void print_int_and_newline(int x)
{
	println(x);
}

int sum_10_and_print_with_newline(float x)
{
	x += 10;
	println(x);
	return 10;
}

int main(void)
{
	println("Tests with array of ints");
	int array_of_ints[] = {10, 20, 30, 40, 50};

	iter(array_of_ints, 5, print_int_and_newline);

	println("");
	println("Tests with array of floats");
	float array_of_floats[] = {10.f, 5.f, 10.5f, 8.9f};

	iter(array_of_floats, 4, sum_10_and_print_with_newline);

}
