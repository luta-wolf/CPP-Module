#include "Whatever.hpp"

int main( void )
{
	{
		int a = 1;
		int b = 5;

		std::cout << "-----------INT----------" << std::endl;
		::swap( a, b );
		std::cout << "a = " << a << ", b = " << b << std::endl;
		std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
		std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;


		std::cout << "-----------STRING----------" << std::endl;
		std::string c = "chaine1";
		std::string d = "chaine2";
		::swap(c, d);
		std::cout << "c = " << c << ", d = " << d << std::endl;
		std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
		std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;

		std::cout << "-----------CHAR----------" << std::endl;
		char e = 'a';
		char f = 'z';

		::swap(e, f);
		std::cout << "e = " << e << ", f = " << f << std::endl;
		std::cout << "min( a, z ) = " << ::min(e, f) << std::endl;
		std::cout << "max( a, z ) = " << ::max(e, f) << std::endl;
	}
    return 0;
}

