/*
** EPITECH PROJECT, 2017
** File Name : main.c
** File description:
** by Arthur Teisseire
*/

#include "my.h"
#include "palindrome.h"

int main(int ac, char **av)
{
	if (ac < 2) {
		my_puterror("Error:  not enough arguments.\n");
		return (84);
	} else if (ac > 2) {
		my_puterror("Error:  too much arguments.\n");
		return (84);
	}
	if (is_palindrome(av[1])) {
		my_putstr("palindrome!\n");
	} else {
		my_putstr("not a palindrome.\n");
	}
	return (0);
}
