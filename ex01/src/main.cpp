#include "iter.hpp"
#include "sum_10_and_print_newline.hpp"
#include "qolMacros.hpp"

int main(void)
{
	println("Tests with array of ints");
	int array_of_ints[] = {10, 20, 30, 40, 50};

	iter(array_of_ints, 5, sum_10_and_print_newline<int>);

	println("");
	println("Tests with array of floats");
	float array_of_floats[] = {10.f, 5.f, 10.5f, 8.9f};

	iter(array_of_floats, 4, sum_10_and_print_newline<float>);

}
