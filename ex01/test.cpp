#include "Fixed.hpp"

int main( void ) {
Fixed a;
Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
std::cout << a << std::endl;
std::cout << ++a << std::endl;
std::cout << "After increment: " << a << std::endl;
std::cout << a++ << std::endl;
std::cout << "After (post) increment: " << a << std::endl;
std::cout << a << std::endl;
std::cout << b << std::endl;
std::cout << "Min test: " << Fixed::min( a, b ) << '\n';
std::cout << "Max test: " << Fixed::max( a, b ) << std::endl;
return 0;
}