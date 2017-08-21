#include <iostream>
#include <limits>
#include <iomanip>

using namespace std ;

int absval (int x) {
	if (x < 0)
		return -x ;
	else
		return x ;
}

float absval (float x) {
	if (x < 0)
		return -x ;
	else
		return x ;	
}

long int absval (long int x) {
	if (x < 0)
		return -x ;
	else
		return x ;
}


int main (int argc , char *argv[] ) {
	int i{std::numeric_limits<int>::lowest() + 1} ;
	float f{std::numeric_limits<float>::lowest()} ;
	long int l{std::numeric_limits<long int>::lowest() + 1} ;

	std::cout << "abs(" << i << ") - " << absval(i) << endl ;
	std::cout << "abs(" << fixed << setprecision(0) << f <<  ") - " << fixed << setprecision(0) << absval(i) << endl ;
	std::cout << "abs(" << l << ") - " << absval(l) << endl ;

	return EXIT_SUCCESS ;

}