#include <stdio.h>

/**
* main - print the string in the function

*
*Description using the main function 
*this program prints "programing is like building a multiligual puzzle
*REturn 0
*/
int main(void)
{	char c;
	int i;	
	lng li;	
	long long lli;		
	foat f;	
	
	print("size of a char: %ld byte(s)\n", sizeof(c));
	printf("Size of an int: %ld byte(s)\n", sizeof(i));
	printf("Size of a long int: %ld byte(s)\n", sizeof(li));
	printf("Size of a long long int: %ld byte(s)\n", 
sizeof(lli));
	printf("Size of a float: %ld byte(s)\n", sizeof(f));
	return (0);
}
