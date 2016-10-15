#include <stdio.h>
#include "mystring.h"

#define KNRM  "\x1B[0m"
#define KRED  "\x1B[31m"
#define KGRN  "\x1B[32m"
#define KYEL  "\x1B[33m"
#define KBLU  "\x1B[34m"
#define KMAG  "\x1B[35m"
#define KCYN  "\x1B[36m"
#define KWHT  "\x1B[37m"

int test(const char *name, int result, int require){
	if(result == require) {
		printf("%s%s - OK\n%s", KGRN, name, KNRM);
	} else {
		printf("%s%s - ERROR, REQUIRE %d, RECEIVED = %d\n%s", KRED, name, require, result, KNRM);
	}
}

int main(){

	test("asdsa is palindrom", isPalindrom("asdsa"), 1);
	test("a is palindrom", isPalindrom("a"), 1);
	test("as is not palindrom", isPalindrom("as"), 1);
	test("assa is palindrom", isPalindrom("assa"), 1);

	return 0;

}