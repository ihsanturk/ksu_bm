```c
#include <stdio.h>
#include <stdlib.h>
int main()
{
	double atof( const char *nPtr ); // Converts the string nPtr to double.
	int atoi( const char *nPtr );    // Converts the string nPtr to int.
	long atol( const char *nPtr );   // Converts the string nPtr to long int.
	double strtod( const char *nPtr, char **endPtr ); // Converts the string nPtr to double.
	long strtol( const char *nPtr, char **endPtr, int base ); // Converts the string nPtr to long.
	unsigned long strtoul( const char *nPtr, char **endPtr, int base ); // Converts the string nPtr to unsigned long.
}
```