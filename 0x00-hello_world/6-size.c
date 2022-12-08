/*
 * File - 6-size.c
 * Author - Adejumo Ridwan Suleiman
 */
#include <stdio.h>
/**
 * main - print the size of various types on the comp
 * Return: Always 0
 */
int main(void)
{
	printf("Size of a char: %zu byte(s)\n", sizeof(char));
	printf("Size of an int: %zu byte(s)\n", sizeof(int));
	printf("Size of a long: %zu byte(s)\n", sizeof(long int));
	printf("Size of a long long int: %zu byte(s)\n", sizeof(long long int));
	printf("Size of a float: %zu byte(s)\n", sizeof(float));
	return (0);
}