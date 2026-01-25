#include <cstdio>
using namespace std;

int main() {
	int a;
	int b;
	int c;
	/*
	 * %d specifies that a value of type int is being input.
	 * To input a 64-bit (long long) number,
	 * use %lld instead (some OJs might need %I64 instead).
	 * Many other specifiers are also available; see link for more details.
	 *
	 * Be sure to add a & character (address-of operator) when using
	 * scanf, UNLESS you are inputing a string with %s.
	 *
	 * It is possible to input multiple values at a time as shown below.
	 */
	scanf("%d %d %d", &a, &b, &c);

	/*
	 * Specifiers for printf are mostly the same as those used
	 * by scanf, with the notable exception of floating-point numbers.
	 * Use a backslash character followed by the lowercase
	 * letter n to denote a newline.
	 * The address-of operator (&) is not used here.
	 */
	printf("The sum of these three numbers is %d\n", a + b + c);
}