#include <stdio.h>
/**
 * main - a program that prints the size of various types on the computer
 * Return: 0 (success)
 */

int main(void)
{
	printf("Size of a char: %lu byte(s)", sizeof(char));
	printf("size of an int: %lu byte(s)", sizeof(int));
	printf("Size of a long int: %lu byte(s)", sizeof(long int));
	printf("Size of a long long int: %lu byte(s)", sizeof(long long int));
	printf("size of float: %lu byte(s)", sizeof(float));
	return (0);
}
