#include <stdio.h>
/**
 * main - a program that prints the size of various types on the computer
 * Return: 0 (success)
 */

int main(void)
{
	printf("Size of a char: %d byte(s)", sizeof(char));
	printf("size of an int: %d byte(s)", sizeof(int));
	printf("Size of a long int: %d byte(s)", sizeof(long int));
	printf("Size of a long long int: %d byte(s)", sizeof(long long int));
	printf("size of float: %d byte(s)", sizeof(float));
	return (0);
}
