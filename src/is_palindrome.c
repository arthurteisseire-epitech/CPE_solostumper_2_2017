/*
** EPITECH PROJECT, 2017
** File Name : is_palindrome.c
** File description:
** by Arthur Teisseire
*/

#include "my.h"

int is_palindrome(char *str)
{
	int end = my_strlen(str) - 1;
	int begin = 0;

	while (end > 0) {
		if (str[end] != str[begin])
			return (0);
		begin++;
		end--;
	}
	return (1);
}
