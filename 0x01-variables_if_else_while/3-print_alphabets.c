#include<stdio.h>
/**
 * main - prints the alphabet in lowercase, and then uppercase
 * Return: Always 0 (success)
 */
int main(void)
{
int ch;
for (ch = 'a'; ch <= 'z'; ch++)
putchar(ch);
for (ch = 'A'; ch <= 'Z'; ch++)
putchar(ch);
putchat('\n');
return (0);
}
