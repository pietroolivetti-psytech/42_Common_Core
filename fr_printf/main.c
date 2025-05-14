/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pileonar <pileonar@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 13:14:10 by pileonar          #+#    #+#             */
/*   Updated: 2025/05/13 19:27:48 by pileonar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf/ft_printf.h"
#include <stdio.h>
#include <limits.h>
#include <stdlib.h>

int main()
{
	ft_printf("**********************\n     1 - %%c   \n**********************\n\n");
	ft_printf("Subscenario: simple char \n");
	int orig = printf("OR char: print this %c\n", 'c');
	int ft = ft_printf("FT char: print this %c\n", 'c');
	printf("Original: %d \nFT version: %d\n\n", orig, ft);

	ft_printf("Subscenario: 2 consecutive chars \n");
	orig = printf("OR char: print this %c%c\n", 'c', 'h');
	ft = ft_printf("FT char: print this %c%c\n", 'c', 'h');
	printf("Original: %d \nFT version: %d\n\n", orig, ft);

	ft_printf("Subscenario: symbols as chars \n");
	orig = printf("OR char: print this %c%c\n", '*', '$');
	ft = ft_printf("FT char: print this %c%c\n", '*', '$');
	printf("Original: %d \nFT version: %d\n\n", orig, ft);

	ft_printf("Subscenario: ascii values for a and space \n");
	orig = printf("OR char: print this %c[%c]\n", 65, 32);
	ft = ft_printf("FT char: print this %c[%c]\n", 65, 32);
	printf("Original: %d \nFT version: %d\n\n", orig, ft);

	ft_printf("Subscenario: single linebreak \n");
	orig = printf("OR char: print this %c\n", '\n');
	ft = ft_printf("FT char: print this %c\n", '\n');
	printf("Original: %d \nFT version: %d\n\n", orig, ft);


	ft_printf("\n**********************\n      2 - %%    \n**********************\n\n");
	ft_printf("Subscenario: simple %% \n");
	orig = printf("OR perc: print this %%\n");
	ft = ft_printf("FT perc: print this %%\n");
	printf("Original: %d \nFT version: %d\n\n", orig, ft);

	ft_printf("Subscenario: Only one %% \n");
	/*original -> warning: spurious trailing ‘%’ in format [-Wformat=] orig = printf("OR perc: print this %");*/
	/*if I add __attribute__((format(printf, 1, 2))) in the header for the ft_printf prototype it works just like the original by stopping the function*/
	ft = ft_printf("OR perc: print this %\n");
	printf("\nFT version: %d\n\n", ft);

	ft_printf("Subscenario: multiple %% \n");
	orig = printf("OR perc: print this %%%%%%%%-%%%%%%%%\n");
	ft = ft_printf("FT perc: print this %%%%%%%%-%%%%%%%%\n");
	printf("Original: %d \nFT version: %d\n\n", orig, ft);

	ft_printf("\n**********************\n     3 - %%s    \n**********************\n\n");
	ft_printf("Subscenario: 'sentence' str \n");
	ft = ft_printf("FT string: print this %s\n", "sentence");
	orig = printf("OR string: print this %s\n", "sentence");
	printf("\nOriginal: %d \nFT version: %d\n\n", orig, ft);

	ft_printf("Subscenario: 'empty' str \n");
	ft = ft_printf("FT string: print this %s\n", "");
	orig = printf("OR string: print this %s\n", "");
	printf("\nOriginal: %d \nFT version: %d\n\n", orig, ft);

	char *s = NULL;
	ft_printf("Subscenario: NULL should print (null) \n");
	//ft = ft_printf("OR string: NULL %s NULL\n", NULL);
	orig = printf("OR string: %s \n", s);
	printf("FT version: %d\n\n", ft); // \nOriginal: %d \n


	ft_printf("Subscenario: string with special char like \\n \\t \n");
	ft = ft_printf("FT string: print this -> %s", "tab->\tand now  linebreak->\n");
	orig = printf("OR string: print this -> %s", "tab->\tand now  linebreak->\n");
	printf("\nOriginal: %d \nFT version: %d\n\n", orig, ft);

	s = "Whean? athe toumee uileat mes ang oundreant therues Totuth thevos, tus tory opay, nding hend n th'd ueamary, touz'dietond san psothe a aundend the: ms ce, p: im it dkepaker beatis off ofot tullur tind thut, thasithetor whero patrne wher whe of an walerensonorco'depry arthea hery o ileeilar'd s als 's g an maves d blanthe her, af ove, corrof ace thathedruinthutheleree coula The ty gswe 'd s isl thea t a aur gamat an. tie bencthubepang thay thtrr, Whthe wsanatond cothesspreangat d ouzlus rth be,";
	ft_printf("Subscenario: long gibberish string \n");
	ft = ft_printf("FT string: print this %s\n", s);
	orig = printf("OR string: print this %s\n", s);
	printf("\nOriginal: %d \nFT version: %d\n\n", orig, ft);

	ft_printf("\n**********************\n 4 - %%d or %%i \n**********************\n\n");
	ft_printf("Subscenario: -123 int \n");
	ft = ft_printf("OR int: print this %d\n", -123);
	orig = printf("FT int: print this %d\n", -123);
	printf("\nOriginal: %d \nFT version: %d\n\n", orig, ft);

	ft_printf("Subscenario: INT_MIN \n");
	ft = ft_printf("FT int: print this %d\n", INT_MIN);
	orig = printf("OR int: print this %d\n", INT_MIN);
	printf("\nOriginal: %d \nFT version: %d\n\n", orig, ft);

	ft_printf("Subscenario: INT_MAX \n");
	ft = ft_printf("FT int: print this %d\n", INT_MAX);
	orig = printf("OR int: print this %d\n", INT_MAX);
	printf("\nOriginal: %d \nFT version: %d\n\n", orig, ft);
	
	ft_printf("Subscenario: empty string -> garbage/memory bits printed \n");
	ft = ft_printf("FT int: print this %d\n", " ");
	//orig = printf("OR int: print this %d\n", " " );
	printf("FT version: %d\n\n", ft);

	ft_printf("Subscenario: print a zero \n");
	ft = ft_printf("FT int: print this %d\n", 0);
	orig = printf("OR int: print this %d\n", 0);
	printf("\nOriginal: %d \nFT version: %d\n\n", orig, ft);


	ft_printf("**********************\n 5 - %%u unsigned int \n**********************\n\n");
	ft_printf("Subscenario: unsigned int c or 99?\n");
	orig = printf("OR u_int: print this %u\n", 'c');
	ft = ft_printf("FT U_int: print this %u\n", 'c');
	printf("Original: %d \nFT version: %u\n\n", orig, ft);

	ft_printf("Subscenario: unsigned int 2^32 +  1 over limit\n");
	orig = printf("OR u_int: print this %u\n", UINT_MAX + 1);
	ft = ft_printf("FT U_int: print this %u\n", UINT_MAX + 1);
	printf("Original: %d \nFT version: %u\n\n", orig, ft);

	ft_printf("Subscenario: unsigned int = 0\n");
	orig = printf("OR u_int: print this %u\n", 0);
	ft = ft_printf("FT u_int: print this %u\n", 0);
	printf("Original: %d \nFT version: %u\n\n", orig, ft);

	ft_printf("Subscenario: UINT_MAX: 4294967295 on most systems\n");
	orig = printf("OR u_int: print this %u\n", UINT_MAX);
	ft = ft_printf("FT u_int: print this %u\n", UINT_MAX);
	printf("Original: %d \nFT version: %u\n\n", orig, ft);

	unsigned int  ui = 97;
	ft_printf("Subscenario: multiple types passing only u_int 97 (except for pointers and *s and *p = "") \n");
	orig = printf("OR u_int: u: [%u], s:[%s], c:[%c], x: [%x], p: [%p]\n", ui, "", ui, ui, (void *)"");
	ft = ft_printf("FT u_int: u: [%u], s:[%s], c:[%c], x: [%x], p: [%p]\n", ui, "", ui, ui, (void *)"");
	printf("Original: %d \nFT version: %u\n\n", orig, ft);

	ft_printf("\n**********************\n 6 - %%X or %%x hexa \n**********************\n\n");
	ft_printf("Subscenario: 123 heXa \n");
	ft = ft_printf("FT hexa: print this %X\n", 123);
	orig = printf("OR hexa: print this %X\n", 123);
	printf("\nOriginal: %d \nFT version: %d\n\n", orig, ft);

	ft_printf("Subscenario: 16010 hexa \n");
	ft = ft_printf("FT hexa: print this %x\n", 16010);
	orig = printf("OR hexa: print this %x\n", 16010);
	printf("\nOriginal: %d \nFT version: %d\n\n", orig, ft);

	ft_printf("Subscenario: zero \n");
	ft = ft_printf("FT hexa: print this %X\n", 0);
	orig = printf("OR hexa: print this %X\n", 0);
	printf("\nOriginal: %d \nFT version: %d\n\n", orig, ft);

	ft_printf("Subscenario: UINT_MAX \n");
	ft = ft_printf("FT hexa: print this %x\n", UINT_MAX);
	orig = printf("OR hexa: print this %x\n", UINT_MAX);
	printf("\nOriginal: %d \nFT version: %d\n\n", orig, ft);

	ft_printf("Subscenario: UINT_MAX + 1 \n");
	ft = ft_printf("FT hexa: print this %x\n", UINT_MAX + 1);
	orig = printf("OR hexa: print this %x\n", UINT_MAX + 1);
	printf("\nOriginal: %d \nFT version: %d\n\n", orig, ft);

	ft_printf("Subscenario: UINT_MAX - 1 \n");
	ft = ft_printf("FT hexa: print this %x\n", UINT_MAX - 1);
	orig = printf("OR hexa: print this %x\n", UINT_MAX - 1);
	printf("\nOriginal: %d \nFT version: %d\n\n", orig, ft);

	ft_printf("Subscenario: -2 \n");
	ft = ft_printf("FT hexa: print this %x\n", -2);
	orig = printf("OR hexa: print this %x\n", -2);
	printf("\nOriginal: %d \nFT version: %d\n\n", orig, ft);

	ft_printf("Subscenario: passing variable ui used above \n");
	ft = ft_printf("FT hexa: as X: [%X],  as c: [%c]\n", ui, ui);
	orig = printf("OR hexa: as X: [%X],  as c: [%c]\n", ui, ui);
	printf("\nOriginal: %d \nFT version: %d\n\n", orig, ft);

	ft_printf("\n**********************\n  7 - %%p pointer  \n**********************\n\n");
	void *p = "abc";
	ft_printf("Subscenario: void *pointer variable \n");
	ft = ft_printf("FT pointer: print this %p\n", p);
	orig = printf("OR pointer: print this %p\n", p);
	printf("\nOriginal: %d \nFT version: %d\n\n", orig, ft);

	int *memp = malloc(sizeof(int));
	*memp = 42;
	ft_printf("Subscenario: Heap-allocated memory\n");
	orig = printf("OR pointer (heap): %p, as x: %x (passed value)\n", memp, *memp);
	ft = ft_printf("FT pointer (heap): %p, as x: %x (passed value)\n", memp, *memp);
	printf("Original: %d \nFT version: %d\n\n", orig, ft);
	free(memp);

	ft_printf("Subscenario: Function pointers\n");
	orig = printf("OR pointer (function): %p\n", (void *)&printf);
	ft = ft_printf("FT pointer (function): %p\n", (void *)&printf);
	printf("Original: %d \nFT version: %d\n\n", orig, ft);

	static int static_var = 100;
	int global_var = 100;
	orig = printf("OR pointer static: %p, global: %p\n", &static_var, &global_var);
	ft = ft_printf("FT pointer static: %p, global: %p\n", &static_var, &global_var);
	printf("Original: %d \nFT version: %d\n\n", orig, ft);
	/*ft_printf("Subscenario: void *p = 0 \n");
	ft = ft_printf("FT: %p %p \n", 0, 0);
	orig = printf("Original: %p %p \n", 0, 0);
	printf("\nOriginal: %d \nFT version: %d\n\n", orig, ft);*/
}