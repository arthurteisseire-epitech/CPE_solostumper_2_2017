/*
** EPITECH PROJECT, 2017
** File Name : test_palindrome.c
** File description:
** by Arthur Teisseire
*/

#include <criterion/criterion.h>
#include "my.h"
#include "palindrome.h"

Test(palindrome, basic_success)
{
	cr_assert(is_palindrome("tot") == 1);
	cr_assert(is_palindrome("kayak") == 1);
	cr_assert(is_palindrome("anna") == 1);
	cr_assert(is_palindrome("ANNA") == 1);
	cr_assert(is_palindrome("hihih") == 1);
}

Test(palindrome, advanced_success)
{
	cr_assert(is_palindrome("Tot") == 1);
	cr_assert(is_palindrome("KayAk") == 1);
	cr_assert(is_palindrome("aNNA") == 1);
	cr_assert(is_palindrome("ANNA") == 1);
	cr_assert(is_palindrome("hIHIH") == 1);
}

Test(palindrome, failure)
{
	cr_assert(is_palindrome("tO") == 0);
	cr_assert(is_palindrome("kYAk") == 0);
	cr_assert(is_palindrome("nna") == 0);
	cr_assert(is_palindrome("NnA") == 0);
	cr_assert(is_palindrome("hAAa") == 0);
}

Test(palindrome, empty_chain)
{
	cr_assert(is_palindrome("") == 1);
}
