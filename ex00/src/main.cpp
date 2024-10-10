#include "min.hpp"
#include "max.hpp"
#include "swap.hpp"
#include "qolMacros.hpp"
#include "Data.hpp"

int main(void)
{
	int a = 2;
	int b = 3;

	println("int a = 2;");
	println("int b = 3;");
	println("swap(a,b)");
	::swap(a,b);
	println("println(a: \" << a \" << \" b: \" << b)");
	println("a: " << a << " b: " << b);
	println("min(a,b)");
	println(::min(a, b));
	println("max(a,b)");
	println(::max(a, b));
	println("");

	float c = 42.42f;
	float d = 10.5f;
	println("float c = 42.42f;");
	println("float d = 10.5f;");
	println("swap(c, d);");
	::swap(c, d);
	println("println(c: \" << c \" << \" d: \" << d)");
	println("c: " << c << " d: " << d);
	println("min(c,d)");
	println(::min(c, d));
	println("max(c,d)");
	println(::max(c, d));
	println("");

	char e = 'e';
	char f = 'f';
	println("char e = 'e';");
	println("char f = 'f';");
	println("swap(e,f);");
	::swap(e,f);
	println("println(e: \" << e \" << \" f: \" << f)");
	println("e: " << e << " f: " << f);
	println("min(e,f)");
	println(::min(e, f));
	println("max(e,f)");
	println(::max(e, f));
	println("");

	std::string g("String 1");
	std::string h("String 2");
	println("std::string g(\"String 1\");");
	println("std::string h(\"String 2\");");
	println("swap(g,h);");
	::swap(g,h);
	println("println(g: \" << g \" << \" h: \" << h)");
	println("g: " << g << " h: " << h);
	println("min(g,h)");
	println(::min(g, h));
	println("max(g,h)");
	println(::max(g, h));
	println("");


	//uncomment to see compilaton error
	//comparison is not defined for Data objects
	// Data d1;
	// Data d2;
	// ::min(d1, d2);
}
