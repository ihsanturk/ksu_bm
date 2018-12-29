#include <stdio.h>

int main()
{
	int getchar( void ); // Inputs the next character from the standard input and returns it as an integer.
	char *fgets( char *s, int n, FILE *stream);// Inputs characters from the specified stream into the array s
						   // until a newline or end-of-file character is encountered, or
						   // until n - 1 bytes are read. In this chapter, we specify the
						   // stream as stdin—the standard input stream, which is typically
						   // used to read characters from the keyboard. A terminating
					 	   // null character is appended to the array. Returns the
						   // string that was read into s.
	int putchar( int c ); // Prints the character stored in c and returns it as an integer.
	int puts( const char *s ); // Prints the string s followed by a newline character. Returns a non-zero integer if successful, or EOF if an error occurs.
	int sprintf( char *s, const char *format, ... ); // Equivalent to printf, except the output is stored in the array s instead of printed on the screen. Returns the number
							 // of characters written to s, or EOF if an error occurs.
	int sscanf( char *s, const char *format, ... ); // Equivalent to scanf, except the input is read from the array
							// s rather than from the keyboard. Returns the number of
							// items successfully read by the function, or EOF if an error occurs.
}
