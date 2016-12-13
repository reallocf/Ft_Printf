/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csummers <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/27 21:31:35 by csummers          #+#    #+#             */
/*   Updated: 2016/11/27 21:31:37 by csummers         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <locale.h>
#include <fcntl.h>
#include "ft_printf.h"

int		main(int argc, char **argv)
{
	int temp;
	int fd;

	(void)argc;
	setlocale(LC_ALL, "");
	if (ft_strequ(argv[1], "go"))
	{
		ft_printf("ret: %d\n", printf("%15.4d\n", -4));
		ft_printf("ret: %d\n", ft_printf("%15.4d\n", -4));
		ft_printf("ret: %d\n", printf("%15.4d\n", -42));
		ft_printf("ret: %d\n", ft_printf("%15.4d\n", -42));
		ft_printf("ret: %d\n", printf("%15.4d\n", -424));
		ft_printf("ret: %d\n", ft_printf("%15.4d\n", -424));
		ft_printf("ret: %d\n", printf("%15.4d\n", -4242));
		ft_printf("ret: %d\n", ft_printf("%15.4d\n", -4242));
		ft_printf("ret: %d\n", printf("%15.4d\n", -424242));
		ft_printf("ret: %d\n", ft_printf("%15.4d\n", -424242));
		ft_printf("ret: %d\n", printf("{%10d}\n", -42));
		ft_printf("ret: %d\n", ft_printf("{%10d}\n", -42));
		ft_printf("ret: %d\n", printf("%+10.5d\n", 4242));
		ft_printf("ret: %d\n", ft_printf("%+10.5d\n", 4242));
		ft_printf("ret: %d\n", printf("%- 5d\n", 42));
		ft_printf("ret: %d\n", ft_printf("%- 5d\n", 42));
		ft_printf("ret: %d\n", printf("%+5d\n", 42));
		ft_printf("ret: %d\n", ft_printf("%+5d\n", 42));
		ft_printf("\n");
		//ft_printf("%5ret: %d\n", printf("%10+d\n", -42));
		//ft_printf("%5ret: %d\n", ft_printf("%10+d\n", -42));
		ft_printf("\n");
		ft_printf("ret: %d\n", printf("%05d\n", -42));
		ft_printf("ret: %d\n", ft_printf("%05d\n", -42));
		ft_printf("ret: %d\n", printf("%05d\n", 42));
		ft_printf("ret: %d\n", ft_printf("%05d\n", 42));
		ft_printf("ret: %d\n", printf("%010.2d\n", -1));
		ft_printf("ret: %d\n", ft_printf("%010.2d\n", -1));
		ft_printf("ret: %d\n", printf("{%010.2d}\n", 0));
		ft_printf("ret: %d\n", ft_printf("{%010.2d}\n", 0));
	}
	else if (ft_strequ(argv[1], "basic"))
	{
		ft_printf("test 1:\n");
		ft_printf("printf(\"abcd\\n\")\n");
		ft_printf("return value: %d\n", printf("abcd\n"));
		ft_printf("ft_printf(\"abcd\\n\")\n");
		ft_printf("return value: %d\n", ft_printf("abcd\n"));
	}
	else if (ft_strequ(argv[1], "int"))
	{
		ft_printf("test i:\n");
		ft_printf("printf(\"i test %%i go\\n\", -94)\n");
		ft_printf("return value: %d\n", printf("i test %i go\n", -94));
		ft_printf("ft_printf(\"i test %%i go\\n\", -94)\n");
		ft_printf("return value: %d\n\n", ft_printf("i test %i go\n", -94));
		ft_printf("test d:\n");
		ft_printf("printf(\"d test %%d go\\n\", -2006)\n");
		ft_printf("return value: %d\n", printf("d test %d go\n", -2006));
		ft_printf("ft_printf(\"d test %%d go\\n\", -2006)\n");
		ft_printf("return value: %d\n\n", ft_printf("d test %d go\n", -2006));
		ft_printf("test u:\n");
		ft_printf("printf(\"u test %%u go\\n\", -6)\n");
		ft_printf("return value: %d\n", printf("u test %u go\n", -6));
		ft_printf("ft_printf(\"u test %%u go\\n\", -6)\n");
		ft_printf("return value: %d\n\n", ft_printf("u test %u go\n", -6));
		ft_printf("test o:\n");
		ft_printf("printf(\"o test %%o go\\n\", -89)\n");
		ft_printf("return value: %d\n", printf("o test %o go\n", -89));
		ft_printf("ft_printf(\"o test %%o go\\n\", -89)\n");
		ft_printf("return value: %d\n\n", ft_printf("o test %o go\n", -89));
		ft_printf("test x:\n");
		ft_printf("printf(\"x test %%x go\\n\", -16178)\n");
		ft_printf("return value: %d\n", printf("x test %x go\n", -16178));
		ft_printf("ft_printf(\"x test %%x go\\n\", -16178)\n");
		ft_printf("return value: %d\n\n", ft_printf("x test %x go\n", -16178));
		ft_printf("test X:\n");
		ft_printf("printf(\"X test %%X go\\n\", -161616)\n");
		ft_printf("return value: %d\n", printf("X test %X go\n", -161616));
		ft_printf("ft_printf(\"X test %%X go\\n\", -161616)\n");
		ft_printf("return value: %d\n\n", ft_printf("X test %X go\n", -161616));
		ft_printf("test b:\n");
		ft_printf("ft_printf(\"b test %%b go\\n\", 30)\n");
		ft_printf("return value: %d\n\n", ft_printf("b test %b go\n", 30));
		ft_printf("test c:\n");
		ft_printf("printf(\"c test %%c go\\n\", \'-\')\n");
		ft_printf("return value: %d\n", printf("c test %c go\n", 55));
		ft_printf("ft_printf(\"c test %%c go\\n\", \'-\')\n");
		ft_printf("return value: %d\n", ft_printf("c test %c go\n", 55));
	}
	else if (ft_strequ(argv[1], "long"))
	{
		ft_printf("test D:\n");
		ft_printf("printf(\"D test %%D go\\n\", -307)\n");
		ft_printf("return value: %d\n", printf("D test %D go\n", -307));
		ft_printf("ft_printf(\"D test %%D go\\n\", -307)\n");
		ft_printf("return value: %d\n\n", ft_printf("D test %D go\n", -307));
		ft_printf("test O:\n");
		ft_printf("printf(\"O test %%O go\\n\", 6780)\n");
		ft_printf("return value: %d\n", printf("O test %O go\n", 6780));
		ft_printf("ft_printf(\"O test %%O go\\n\", 6780)\n");
		ft_printf("return value: %d\n\n", ft_printf("O test %O go\n", 6780));
		ft_printf("test U:\n");
		ft_printf("printf(\"U test %%U go\\n\", -33)\n");
		ft_printf("return value: %d\n", printf("U test %U go\n", -33));
		ft_printf("ft_printf(\"U test %%U go\\n\", -33)\n");
		ft_printf("return value: %d\n\n", ft_printf("U test %U go\n", -33));
		ft_printf("test C:\n");
		ft_printf("printf(\"C test %%C go\\n\", Ń)\n");
		ft_printf("return value: %d\n", printf("C test %C go\n", L'Ń'));
		ft_printf("ft_printf(\"C test %%C go\\n\", Ń)\n");
		ft_printf("return value: %d\n", ft_printf("C test %C go\n", L'Ń'));
	}
	else if (ft_strequ(argv[1], "str"))
	{
		ft_printf("test s:\n");
		ft_printf("printf(\"s test %%s go\\n\", \"Test1\")\n");
		ft_printf("return value: %d\n", printf("s test %s go\n", "Test1"));
		ft_printf("ft_printf(\"s test %%s go\\n\", \"Test1\")\n");
		ft_printf("return value: %d\n\n", ft_printf("s test %s go\n", "Test1"));
		ft_printf("test S:\n");
		ft_printf("printf(\"S test %%S go\\n\", \"%CTest\")\n", L'♔');
		ft_printf("return value: %d\n", printf("S test %S go\n", L"♔Test"));
		ft_printf("ft_printf(\"S test %%S go\\n\", \"%CTest\")\n", L'♔');
		ft_printf("return value: %d\n", ft_printf("S test %S go\n", L"♔Test"));
	}
	else if (ft_strequ(argv[1], "n"))
	{
		temp = 0;
		ft_printf("test n:\n");
		ft_printf("printf(\"n test %%n go\\n\", &temp)\nft_printf(\"%%d\\n\", temp)\n");
		ft_printf("return value: %d\n", printf("n test %n go\n", &temp));
		ft_printf("%d\n", temp);
		temp = 0;
		ft_printf("ft_printf(\"n test %%n go\\n\", &temp)\nft_printf(\"%%d\\n\", temp)\n");
		ft_printf("return value: %d\n", ft_printf("n test %n go\n", &temp));
		ft_printf("%d\n", temp);
	}
	else if (ft_strequ(argv[1], "w"))
	{
		fd = open(argv[2], O_WRONLY);
		ft_printf("test w:\n");
		ft_printf("ft_printf(\"w test %%w go let's do this\\n%%d\\n%%o\\n%%s\\n\", fd, 13, 9006, \"this is the human race\\nspeaking right now\")\n");
		temp = ft_printf("w test %w go let's do this\n%d\n%o\n%s\n", fd, 13, 9006, "this is the human race\nspeaking right now");
		ft_printf("\nreturn value: %d\n", temp);
	}
	else if (ft_strequ(argv[1], "p"))
	{
		temp = 0;
		ft_printf("test p:\n");
		ft_printf("printf(\"p test %%p go\\n\", &temp)\n");
		ft_printf("return value: %d\n", printf("p test %p go\n", &temp));
		ft_printf("ft_printf(\"p test %%p go\\n\", &temp)\n");
		ft_printf("return value: %d\n", ft_printf("p test %p go\n", &temp));
	}
	else if (ft_strequ(argv[1], "prec"))
	{	
		ft_printf("test 1\n");
		ft_printf("printf(\"1 test %%#.8x\\n\", 304)\n");
		ft_printf("return value: %d\n", printf("1 test %#.8x go\n", 304));
		ft_printf("ft_printf(\"1 test %%#.8x\\n\", 304)\n");
		ft_printf("return value: %d\n", ft_printf("1 test %#.8x go\n", 304));
		ft_printf("test 2\n");
		ft_printf("printf(\"2 test %%.3o\\n\", 10000005)\n");
		ft_printf("return value: %d\n", printf("2 test %.3o go\n", 10000005));
		ft_printf("ft_printf(\"2 test %%.3o\\n\", 10000005)\n");
		ft_printf("return value: %d\n", ft_printf("2 test %.3o go\n", 10000005));
		ft_printf("test 3\n");
		ft_printf("printf(\"3 test %%.*s\\n\", 100, \"abcde\")\n");
		ft_printf("return value: %d\n", printf("3 test %.*s go\n", 100, "abcde"));
		ft_printf("ft_printf(\"3 test %%.*s\\n\", 100, \"abcde\")\n");
		ft_printf("return value: %d\n", ft_printf("3 test %.*s go\n", 100, "abcde"));
		ft_printf("test 4\n");
		ft_printf("printf(\"4 test %%.2s\\n\", \"abcde\")\n");
		ft_printf("return value: %d\n", printf("4 test %.2s go\n", "abcde"));
		ft_printf("ft_printf(\"4 test %%.2s\\n\", \"abcde\")\n");
		ft_printf("return value: %d\n", ft_printf("4 test %.2s go\n", "abcde"));
		ft_printf("test 5\n");
		ft_printf("printf(\"5 test %%.d\\n\", 0)\n");
		ft_printf("return value: %d\n", printf("5 test %.d go\n", 0));
		ft_printf("ft_printf(\"5 test %%.d\\n\", 0)\n");
		ft_printf("return value: %d\n", ft_printf("5 test %.d go\n", 0));
		ft_printf("test 6\n");
		ft_printf("printf(\"6 test %%.*d\\n\", 10, -95)\n");
		ft_printf("return value: %d\n", printf("6 test %.*d go\n", 10, -95));
		ft_printf("ft_printf(\"6 test %%.*d\\n\", 10, -95)\n");
		ft_printf("return value: %d\n", ft_printf("6 test %.*d go\n", 10, -95));
	}
	else if (ft_strequ(argv[1], "width"))
	{	
		ft_printf("test 1\n");
		ft_printf("printf(\"1 test %%8x\\n\", 304)\n");
		ft_printf("return value: %d\n", printf("1 test %8x go\n", 304));
		ft_printf("ft_printf(\"1 test %%8x\\n\", 304)\n");
		ft_printf("return value: %d\n", ft_printf("1 test %8x go\n", 304));
		ft_printf("test 2\n");
		ft_printf("printf(\"2 test %%3o\\n\", 10000005)\n");
		ft_printf("return value: %d\n", printf("2 test %3o go\n", 10000005));
		ft_printf("ft_printf(\"2 test %%3o\\n\", 10000005)\n");
		ft_printf("return value: %d\n", ft_printf("2 test %3o go\n", 10000005));
		ft_printf("test 3\n");
		ft_printf("printf(\"3 test %%*s\\n\", 100, \"abcde\")\n");
		ft_printf("return value: %d\n", printf("3 test %*s go\n", 100, "abcde"));
		ft_printf("ft_printf(\"3 test %%*s\\n\", 100, \"abcde\")\n");
		ft_printf("return value: %d\n", ft_printf("3 test %*s go\n", 100, "abcde"));
		ft_printf("test 4\n");
		ft_printf("printf(\"4 test %%2s\\n\", \"abcde\")\n");
		ft_printf("return value: %d\n", printf("4 test %2s go\n", "abcde"));
		ft_printf("ft_printf(\"4 test %%2s\\n\", \"abcde\")\n");
		ft_printf("return value: %d\n", ft_printf("4 test %2s go\n", "abcde"));
	}
	else if (ft_strequ(argv[1], "prec_and_width"))
	{	
		ft_printf("test 1\n");
		ft_printf("printf(\"1 test %%4.8x\\n\", 304)\n");
		ft_printf("return value: %d\n", printf("1 test %4.8x go\n", 304));
		ft_printf("ft_printf(\"1 test %%4.8x\\n\", 304)\n");
		ft_printf("return value: %d\n", ft_printf("1 test %4.8x go\n", 304));
		ft_printf("test 2\n");
		ft_printf("printf(\"2 test %%50.3o\\n\", 10000005)\n");
		ft_printf("return value: %d\n", printf("2 test %50.3o go\n", 10000005));
		ft_printf("ft_printf(\"2 test %%50.3o\\n\", 10000005)\n");
		ft_printf("return value: %d\n", ft_printf("2 test %50.3o go\n", 10000005));
		ft_printf("test 3\n");
		ft_printf("printf(\"3 test %%*.*s\\n\", 3, 3, \"abcde\")\n");
		ft_printf("return value: %d\n", printf("3 test %*.*s go\n", 3, 3, "abcde"));
		ft_printf("ft_printf(\"3 test %%*.*s\\n\", 3, 3, \"abcde\")\n");
		ft_printf("return value: %d\n", ft_printf("3 test %*.*s go\n", 3, 3, "abcde"));
		ft_printf("test 4\n");
		ft_printf("printf(\"4 test %%1.20s\\n\", \"abcde\")\n");
		ft_printf("return value: %d\n", printf("4 test %1.20s go\n", "abcde"));
		ft_printf("ft_printf(\"4 test %%1.20s\\n\", \"abcde\")\n");
		ft_printf("return value: %d\n", ft_printf("4 test %1.20s go\n", "abcde"));
		ft_printf("test 5\n");
		ft_printf("printf(\"5 test %%8.8x\\n\", 304)\n");
		ft_printf("return value: %d\n", printf("1 test %8.8x go\n", 304));
		ft_printf("ft_printf(\"5 test %%8.8x\\n\", 304)\n");
		ft_printf("return value: %d\n", ft_printf("1 test %8.8x go\n", 304));
	}
	return (0);
}
