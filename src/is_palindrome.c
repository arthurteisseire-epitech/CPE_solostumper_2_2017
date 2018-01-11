/*
** EPITECH PROJECT, 2017
** File Name : is_palindrome.c
** File description:
** by Arthur Teisseire
*/

#include "my.h"
#include "palindrome.h"

int is_palindrome(char const *str)
{
	int end = my_strlen(str) - 1;
	int begin = 0;

	while (end > 0) {
		if (low_case(str[end]) != low_case(str[begin]))
			return (0);
		begin++;
		end--;
	}
	return (1);
}

char low_case(char const c)
{
	if (c >= 'A' && c <= 'Z')
		return (c + 'a' - 'A');
	return (c);
}
