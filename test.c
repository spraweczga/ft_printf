//* ************************************************************************** */
//*                                                                            */
//*                                                        :::      ::::::::   */
//*   test.c                                             :+:      :+:    :+:   */
//*                                                    +:+ +:+         +:+     */
//*   By: psprawka <psprawka@student.42.fr>          +#+  +:+       +#+        */
//*                                                +#+#+#+#+#+   +#+           */
//*   Created: 2017/11/09 15:11:37 by psprawka          #+#    #+#             */
//*   Updated: 2017/11/09 15:11:40 by psprawka         ###   ########.fr       */
//*                                                                            */
//* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "includes/libftprintf.h"
#include <locale.h>
#include <stddef.h>

int main()
{
	int *b = 47;
	setlocale(LC_ALL, "");
	
	printf("[their:	%%   %   %]\n", "test");
	ft_printf("[mine:	%%   %   %]\n", "test");
	printf("[their:	%%%]\n", "test");
	ft_printf("[mine:	%%%]\n", "test");
	
/* ------------------------ p ---------------------------- */
	ft_printf("m: plus:			[%+p]\n", b);
	printf("t: plus:			[%+p]\n", b);
	ft_printf("width 10:			[%10p]\n", b);
	printf("width 10:			[%10p]\n", b);
	ft_printf("prec -10:			[%.-10p]\n", b);
	printf("prec -10:			[%.-10p]\n", b);
	ft_printf("minus and width 10:		[%-10p]\n", b);
	printf("minus and width 10:		[%-10p]\n", b);
	ft_printf("space:				[% p]\n", b);
	printf("space:				[% p]\n", b);
	ft_printf("hash:				[%#p]\n", b);
	printf("hash:				[%#p]\n", b);
	ft_printf("precyzja 1:			[%.1p]\n", b);
	printf("precyzja 1:			[%.1p]\n", b);
	ft_printf("width 10 prec 1:		[%10.1p]\n", b);
	printf("width 10 prec 1:		[%10.1p]\n", b);
	ft_printf("width 10 prec -1:		[%10.-1p]\n", b);
	printf("width 10 prec -1:		[%10.-1p]\n", b);
	ft_printf("#0 width 12 prec 5:		[%#012.5p]\n", b);
	printf("#0 width 12 prec 5:		[%#012.5p]\n", b);
	ft_printf("width 10 prec -11:		[%10.-11p]\n", b);
	printf("width 10 prec -11:		[%10.-11p]\n", b);
	ft_printf("width 8 prec 13:		[%8.13p]\n", b);
	printf("width 8 prec 13:		[%8.13p]\n", b);
	ft_printf("0 width 10:			[%010p]\n", b);
	printf("0 width 10:			[%010p]\n", b);
	ft_printf("0 width 10 prec 5:		[%010.5p]\n",  b);
	printf("0 width 10 prec 5:		[%010.5p]\n", b);
	ft_printf("0 width 10 prec 1:		[%010.1p]\n", b);
	printf("0 width 10 prec 1:		[%010.1p]\n", b);
	ft_printf("width 10 prec 6:		[%10.6p]\n", b);
	printf("width 10 prec 6:		[%10.6p]\n", b);
	ft_printf("- width 15 prec 3:		[%-15.3p]\n", b);
	printf("- width 15 prec 3:		[%-15.3p]\n", b);
	ft_printf("#+ width 10 prec 10:		[%#+10.10p]\n", b);
	printf("#+ width 10 prec 10:		[%#+10.10p]\n", b);
	ft_printf("hh:				[%hhp]\n", b);
	printf("hh:				[%hhp]\n", b);
	ft_printf("h:				[%hp]\n", b);
	printf("h:				[%hp]\n", b);
	ft_printf("ll:				[%llp]\n", b);
	printf("ll:				[%llp]\n", b);
	ft_printf("l:				[%lp]\n", b);
	printf("l:				[%lp]\n", b);
	ft_printf("z:				[%zp]\n", b);
	printf("z:				[%zp]\n", b);
	ft_printf("j:				[%jp]\n", b);
	printf("j:				[%jp]\n", b);
	ft_printf("normal:				[%p]\n", 0);
	printf("normal:				[%p]\n", 0);
	ft_printf("prec 0:				[%.0p]\n", 0);
	printf("prec 0:				[%.0p]\n", 0);
	ft_printf("prec .:				[%.p]\n", 0);
	printf("prec .:				[%.p]\n", 0);
	ft_printf("width 9 prec 2:			[%9.2p]\n", 1234567);
	printf("width 9 prec 2:			[%9.2p]\n", 1234567);

	
/* ----------------------- s, S ------------------------- */
	printf("plus:				[%+s]\n", "Hello");
	ft_printf("plus:				[%+s]\n", "Hello");
	printf("width 10:			[%10s]\n", "Hello");
	ft_printf("width 10:			[%10s]\n", "Hello");
	printf("0 width 10:			[%010s]\n", "Hello");
	ft_printf("0 width 10:			[%010s]\n", "Hello");
	printf("-0 width 10:			[%-010s]\n", "Hello");
	ft_printf("-0 width 10:			[%-010s]\n", "Hello");
	printf("minus and width 10:		[%-10s]\n", "Hello");
	ft_printf("minus and width 10:		[%-10s]\n", "Hello");
	printf("space:				[% s]\n", "Hello");
	ft_printf("space:				[% s]\n", "Hello");
	printf("hash:				[%#s]\n", "Hello");
	ft_printf("hash:				[%#s]\n", "Hello");
	printf("precyzja 1:			[%.1s]\n", "Hello");
	ft_printf("precyzja 1:			[%.1s]\n", "Hello");
	printf("width 10 prec 1:		[%10.1s]\n", "Hello");
	ft_printf("width 10 prec 1:		[%10.1s]\n", "Hello");
	printf("width 10 prec -3:		[%10.-3s]\n", "Hello");
	ft_printf("width 10 prec -3:		[%10.-3s]\n", "Hello");
	printf("width 10 prec 6:		[%10.6s]\n", "Hello");
	ft_printf("width 10 prec 6:		[%10.6s]\n", "Hello");
	printf("hh:				[%hhs]\n", "Hello");
	ft_printf("hh:				[%hhs]\n", "Hello");
	printf("h:				[%hs]\n", "Hello");
	ft_printf("h:				[%hs]\n", "Hello");
	printf("ll:				[%lls]\n", "Hello");
	ft_printf("ll:				[%lls]\n", "Hello");
	printf("z:				[%zs]\n", "Hello");
	ft_printf("z:				[%zs]\n", "Hello");
	printf("j:				[%js]\n", "Hello");
	ft_printf("j:				[%js]\n", "Hello");
	printf("empty:				[%s]\n", "");
	ft_printf("empty:				[%s]\n", "");
	printf("null:				[%s]\n", NULL);
	ft_printf("null:				[%s]\n", NULL);
	printf("@@:				[%S]\n", L"@");
	ft_printf("@@:				[%S]\n", L"@");
	printf("weird str:			[%S]\n", L"Á±≥");
	ft_printf("weird str:			[%qS]\n", L"Á±≥");
	printf("their chinese:			[%S]\n", L"갔갔");
	ft_printf("mine	chinese q:		[%qS]\n", L"갔갔");
	printf("\n[%s]\n", "100% des gens qui parlent à Ly adorent Ly.");
	ft_printf("[%s]\n", "100% des gens qui parlent à Ly adorent Ly.");
	printf("[%s]\n", "갔갔갔갔갔갔갔갔갔갔갔갔갔갔갔갔갔갔갔갔");
	ft_printf("[%qs]\n", "갔갔갔갔갔갔갔갔갔갔갔갔갔갔갔갔갔갔갔갔");
	printf("[%S%S%S%S%S%S%S%S%S%S%S%S%S%S%S%S%S%S%S%S%S%S%S%S%S ]\n",
		   L"Α α", L"Β β", L"Γ γ", L"Δ δ", L"Ε ε", L"Ζ ζ", L"Η η", L"Θ θ", L"Ι ι", L"Κ κ", L"Λ λ", L"Μ μ",
		   L"Ν ν", L"Ξ ξ", L"Ο ο", L"Π π", L"Ρ ρ", L"Σ σ", L"Τ τ", L"Υ υ", L"Φ φ", L"Χ χ", L"Ψ ψ", L"Ω ω", L"");
	ft_printf("[%qS%qS%qS%qS%qS%qS%qS%qS%qS%qS%qS%qS%qS%qS%qS%qS%qS%qS%qS%qS%qS%qS%qS%qS%qS ]\n\n",
			L"Α α", L"Β β", L"Γ γ", L"Δ δ", L"Ε ε", L"Ζ ζ", L"Η η", L"Θ θ", L"Ι ι", L"Κ κ", L"Λ λ", L"Μ μ",
			L"Ν ν", L"Ξ ξ", L"Ο ο", L"Π π", L"Ρ ρ", L"Σ σ", L"Τ τ", L"Υ υ", L"Φ φ", L"Χ χ", L"Ψ ψ", L"Ω ω", L"");
	printf("prec 4:				[%.4S]\n", L"ÊM-M-^QÊM-^XØ‰∏M-ÂM-^O™ÁM-^L´„M-M-^B");
	ft_printf("prec 4:				[%.4qS]\n", L"ÊM-M-^QÊM-^XØ‰∏M-ÂM-^O™ÁM-^L´„M-M-^B");
	printf("0 width 30:			[%030S]\n", L"ÊM-M-^QÊM-^XØ‰∏M-ÂM-^O™ÁM-^L´„M-M-^B");
	ft_printf("0 width 30:			[%030qS]\n", L"ÊM-M-^QÊM-^XØ‰∏M-ÂM-^O™ÁM-^L´„M-M-^B");
	printf("S chinese:			[%S]\n", L"我是一只猫。");
	ft_printf("S chinese:			[%qS]\n", L"我是一只猫。");
	printf("idk wtf is it:			[a%Sb%sc%S]\n", L"我", "42", L"猫");
	ft_printf("idk wtf is it:			[a%qSb%sc%qS]\n", L"我", "42", L"猫");
	printf("NULL:				[%S]\n", NULL);
	ft_printf("NULL:				[%S]\n", NULL);
	printf("S width 2:			[%2S]\n", L"我是一只猫。");
	ft_printf("S width 2:			[%2qS]\n", L"我是一只猫。");
	printf("width 10 prec -5:		[%10.-5S]\n", L"HELLOO");
	ft_printf("width 10 prec -5:		[%10.-5qS]\n", L"HELLOO");
	printf("prec 3:				[%.3S]\n", L"HELLOO");
	ft_printf("prec 3:				[%.3qS]\n", L"HELLOO");
	printf(" S NULL:			[% S]\n", L"(null)");
	ft_printf(" S NULL:			[% S]\n", L"(null)");
	
	
/* --------------------- c, C -------------------------- */
	printf("plus:				[%+c]\n", 113);
	ft_printf("plus:				[%+c]\n", 113);
	printf("width 10:			[%10c]\n", 'H');
	ft_printf("width 10:			[%10c]\n", 'H');
	printf("minus and width 10:		[%-10c]\n", 'H');
	ft_printf("minus and width 10:		[%-10c]\n", 'H');
	printf("hash:				[%#c]\n", 'H');
	ft_printf("hash:				[%#c]\n", 'H');
	printf("prec 1:				[%.1c]\n", 'H');
	ft_printf("prec 1:				[%.1c]\n", 'H');
	printf("prec 0:				[%.0c]\n", 'H');
	ft_printf("prec 0:				[%.0c]\n", 'H');
	printf("prec -1:			[%.-1c]\n", 'H');
	ft_printf("prec -1:			[%.-1c]\n", 'H');
	printf("width 10 prec 1:		[%10.1c]\n", 'H');
	ft_printf("width 10 prec 1:		[%10.1c]\n", 'H');
	printf("width 10 prec 6:		[%10.6c]\n", 'H');
	ft_printf("width 10 prec 6:		[%10.6c]\n", 'H');
	printf("hh:				[%hhc]\n", 'H');
	ft_printf("hh:				[%hhc]\n", 'H');
	printf("normal:				[%c]\n", L'à');
	ft_printf("normal:				[%c]\n", L'à');
	printf("h:				[%hc]\n", 'H');
	ft_printf("h:				[%hc]\n", 'H');
	printf("ll:				[%llc]\n", 'H');
	ft_printf("ll:				[%llc]\n", 'H');
	printf("l:				[%lc]\n", 'H');
	ft_printf("l:				[%lc]\n", 'H');
	printf("z:				[%zc]\n", 'H');
	ft_printf("z:				[%zc]\n", 'H');
	printf("j:				[%jc]\n", 'H');
	ft_printf("j:				[%jc]\n", 'H');
	printf("finger:				[%C ]\n", L'☞');
	ft_printf("finger:				[%qC ]\n", L'☞');
	printf("brick:				[%C ]\n", L'☲');
	ft_printf("brick:				[%qC ]\n", L'☲');
	printf("spring:				[%C]\n", L'꒺');
	ft_printf("spring:				[%qC]\n", L'꒺');
	printf("C:				[%C]\n", 'A');
	ft_printf("C:				[%C]\n", 'A');
	printf("C:				[%C]\n", L'ÁM-^L´');
	ft_printf("C:				[%qC]\n", L'ÁM-^L´');
	printf("0 width 5 prec .:		[%05.c]\n", 0);
	ft_printf("0 width 5 prec .:		[%05.c]\n", 0);
	printf("0 width 3:			[%03c]\n", 0);
	ft_printf("0 width 3:			[%03c]\n", 0);
	printf("hh:				[%hhC]\n", 0);
	ft_printf("hh:				[%hhC]\n", 0);
	printf("hh:				[%hhC]\n", L'Á±≥');
	ft_printf("hh:				[%hhqC]\n", L'Á±≥');
	printf("width *-15:			[%*c]\n", -15, 0);
	ft_printf("width *-15:			[%*c]\n", -15, 0);
	printf("prec -15:			[%.-15c]\n", 0);
	ft_printf("prec -15:			[%.-15c]\n", 0);
	printf("prec -15:			[%.-15c]\n", 'D');
	ft_printf("prec -15:			[%.-15c]\n", 'D');
	printf("width 3:			[%3c]\n", 0);
	ft_printf("width 3:			[%3c]\n", 0);
	ft_printf("{%*c}\n", -15, 0);
	printf("{%*c}\n", -15, 0);
	
/* --------------------- d, D -------------------------- */
	printf("t:plus:				[%d]\n", 2999999999);
	ft_printf("m:plus:				[%d]\n", 2999999999);
	printf("' ':				[% d]\n", -12);
	ft_printf("' ':				[% d]\n", -12);
	printf("10.6:				[% 10.6d]\n", 12);
	ft_printf("10.6:				[% 10.6d]\n", 12);
	printf("0 10.6:				[%0 10.6d]\n", 12);
	ft_printf("0 10.6:				[%0 10.6d]\n", 12);
	printf("-+10.5:				[%-+10.5d]\n", -12);
	ft_printf("-+10.5:				[%-+10.5d]\n", -12);
	printf("zero:				[%0i]\n", 12);
	ft_printf("zero:				[%0i]\n", 12);
	printf("width 10:			[%10i]\n", 12);
	ft_printf("width 10:			[%10i]\n", 12);
	ft_printf("minus and width 10:		[%-10i]\n", 12);
	printf("minus and width 10:		[%-10i]\n", 12);
	ft_printf("hash:				[%#i]\n", 12);
	printf("hash:				[%#i]\n", 12);
	ft_printf("precyzja 1:			[%.1i]\n", 12);
	printf("precyzja 1:			[%.1i]\n", 12);
	ft_printf("width 10 prec 1:		[%10.1i]\n", 12);
	printf("width 10 prec 1:		[%10.1i]\n", 12);
	ft_printf("width 10 prec 6:		[%10.6i]\n", 12);
	printf("width 10 prec 6:		[%10.6i]\n", 12);
	ft_printf("- width 10 prec 6:		[%-10.6i]\n", 12);
	printf("- width 10 prec 6:		[%-10.6i]\n", 12);
	ft_printf("0 width 4 prec 3:		[%04.3d]\n", -1);
	printf("0 width 4 prec 3:		[%04.3d]\n", -1);
	ft_printf("+ width 10 prec 5:		[%+10.5d]\n", 25);
	printf("+ width 10 prec 5:		[%+10.5d]\n", 25);
	ft_printf("width 10 prec 5:		[%+10.5d]\n", -25);
	printf("width 10 prec 5:		[%+10.5d]\n", -25);
	ft_printf("0 width 3 prec 2:		[%03.2d]\n", -1);
	printf("0 width 3 prec 2:		[%03.2d]\n", -1);
	ft_printf("prec 10:			[%.10d]\n", -12);
	printf("prec 10:			[%.10d]\n", -12);
	ft_printf("width 5 prec .:			[%5.d]\n", 0);
	printf("width 5 prec .:			[%5.d]\n", 0);
	ft_printf("42:				[%d]\n", 42);
	printf("42:				[%d]\n", 42);
	ft_printf("0 width 5 prec *-15:		[%05.*d]\n", -15, 42);
	printf("0 width 5 prec *-15:		[%05.*d]\n", -15, 42);
	ft_printf("width *-5:			[%*d]\n", -5, 42);
	printf("width *-5:			[%*d]\n", -5, 42);
	ft_printf("m: 0 width 3:			[% 04d]\n", 1);
	printf("t: 0 width 3:			[% 04d]\n", 1);
	ft_printf("width 4 prec.:			[%4.d]\n", 0);
	printf("width 4 prec.:			[%4.d]\n", 0);
	ft_printf("m: 0 width 10:			[%010d]\n", 0);
	printf("t: 0 width 10:			[%010d]\n", 0);
	ft_printf("0 width 5:			[%05d]\n", -42);
	printf("0 width 5:			[%05d]\n", -42);
	ft_printf("- width 5:			[%-5d]\n", -42);
	printf("- width 5:			[%-5d]\n", -42);
	ft_printf("+ width 10 prec 5:		[%+10.5d]\n", 4242);
	printf("+ width 10 prec 5:		[%+10.5d]\n", 4242);
	ft_printf("0 width 3 prec 2:		[%03.2d]\n", 0);
	printf("0 width 3 prec 2:		[%03.2d]\n", 0);
	ft_printf("0 width 3 prec 2:		[%03.2d]\n", -1);
	printf("0 width 3 prec 2:		[%03.2d]\n", -1);
	ft_printf("space:				[% d]\n", 42);
	printf("space:				[% d]\n", 42);
	ft_printf("plus:				[%+d]\n", 0);
	printf("plus:				[%+d]\n", 0);
	ft_printf("width 10:			[%10d]\n", 0);
	printf("width 10:			[%10d]\n", 0);
	ft_printf("prec 5:				[%.5d]\n", 0);
	printf("prec 5:				[%.5d]\n", 0);
	ft_printf("' ' width 5:			[% 5d]\n", 4);
	printf("' ' width 5:			[% 5d]\n", 4);
	ft_printf("' ' prec 5:			[%.5d]\n", 4);
	printf("' ' prec 5:			[%.5d]\n", 4);
	ft_printf("' ' prec 5:			[%.5d]\n", 0);
	printf("' ' prec 5:			[%.5d]\n", 0);
	ft_printf("0+ width 5:			[%0+5d]\n", -1);
	printf("0+ width 5:			[%0+5d]\n", -1);
	ft_printf("prec 0:				[%.0d]\n", -1);
	printf("prec 0:				[%.0d]\n", -1);
	ft_printf("++ width 10:			[%++10d]\n", -42);
	printf("++ width 10:			[%++10d]\n", -42);
	ft_printf("width 10:			[%10d]\n", -42);
	printf("width 10:			[%10d]\n", -42);
	ft_printf("+0 width 10:			[%+010d]\n", +42);
	printf("+0 width 10:			[%+010d]\n", +42);
	ft_printf("+0 width 4:			[%+04d]\n", 42);
	printf("+0 width 4:			[%+04d]\n", 42);
	

/* ---------------------- o, O -------------------------- */
	unsigned long long nb = 18446744073709551615;
	
	ft_printf("- width 10 prec 5:		[%-10.5o]\n", 25);
	printf("- width 10 prec 5:		[%-10.5o]\n", 25);
	ft_printf("- width 5 prec 10:		[%-5.10o]\n", 25);
	printf("- width 5 prec 10:		[%-5.10o]\n", 25);
	ft_printf("hh:				[%hho]\n", 1234);
	printf("hh:				[%hho]\n", 1234);
	ft_printf("o:				[%o]\n", 0);
	printf("o:				[%o]\n", 0);
	ft_printf("# prec .:			[%#.o]\n", 0);
	printf("# prec .:			[%#.o]\n", 0);
	ft_printf("# prec 0:			[%#.0o]\n", 0);
	printf("# prec 0:			[%#.0o]\n", 0);
	ft_printf("prec .:				[%.o]\n", 0);
	printf("prec .:				[%.o]\n", 0);
	ft_printf("prec 0:				[%.0o]\n", 0);
	printf("prec 0:				[%.0o]\n", 0);
	ft_printf("l:				[%lo]\n", 0);
	printf("l:				[%lo]\n", 0);
	ft_printf("l:				[%lo]\n", nb);
	printf("l:				[%lo]\n", nb);
	ft_printf("z:				[%zo]\n", 0);
	printf("z:				[%zo]\n", 0);
	ft_printf("z:				[%zo]\n", 18446744073709551615);
	printf("z:				[%zo]\n", 18446744073709551615);
	ft_printf("hh:				[%hhO]\n", 0);
	printf("hh:				[%hhO]\n", 0);
	ft_printf("hh:				[%hhO]\n", 65535);
	printf("hh:				[%hhO]\n", 65535);
	
		   
/* ---------------------- u, U -------------------------- */
	ft_printf("u:				[%u]\n", -1);
	printf("u:				[%u]\n", -1);
	ft_printf("hU:				[%hU]\n", 4294967296);
	printf("hU:				[%hU]\n", 4294967296);
	ft_printf("zu:				[%zu]\n", 18446744073709551614);
	printf("zu:				[%zu]\n", 18446744073709551614);
	ft_printf("zu:				[%zu]\n", 18446744073709551615);
	printf("zu:				[%zu]\n", 18446744073709551615);
	ft_printf("u:				[%u]\n", 0);
	printf("u:				[%u]\n", 0);
	ft_printf("u:				[%u]\n", 4294967296);
	printf("u:				[%u]\n", 4294967296);
	ft_printf("lu:				[%lu]\n", -42);
	printf("lu:				[%lu]\n", -42);
	ft_printf("lu:				[%lu]\n", -42);
	printf("lu:				[%lu]\n", -42);
	ft_printf("zu:				[%zu]\n", -125);
	printf("zu:				[%zu]\n", -125);
	ft_printf("zu:				[%zu]\n", 18446744073709551491);
	printf("zu:				[%zu]\n", 18446744073709551491);
	ft_printf("U:				[%U]\n", 18446744073709551615);
	printf("U:				[%U]\n", 18446744073709551615);
	

		   
/* ------------------------ i -------------------------- */
	ft_printf("h:				[%hi]\n", 121232312213132312);
	printf("h:				[%hi]\n", 121232312213132312);
	ft_printf("ll:				[%lli]\n", 121232312213132312);
	printf("ll:				[%lli]\n", 121232312213132312);
	ft_printf("l:				[%li]\n", 121232312213132312);
	printf("l:				[%li]\n", 121232312213132312);
	ft_printf("z:				[%zi]\n", 121232312213132312);
	printf("z:				[%zi]\n", 121232312213132312);
	ft_printf("j:				[%ji]\n", 121232312213132312);
	printf("j:				[%ji]\n", 121232312213132312);
	
	
/* ---------------------- F, f -------------------------- */
	printf("-2147483649:			[%F]\n", -2147483649.0);
	ft_printf("-2147483649:			[%F]\n", -2147483649.0);
	printf("-2147483648:			[%F]\n", -2147483648.0);
	ft_printf("-2147483648:			[%F]\n", -2147483648.0);
	printf("t: normal:				% \n");
	ft_printf("m: normal:			% \n");
	printf("plus:				[%+f]\n", 12.12);
	ft_printf("plus:				[%+f]\n", 12.12);
	printf("prec 1:				[%.1f]\n", 12.12);
	ft_printf("prec 1:				[%.1f]\n", 12.12);
	printf("zero:				[%0f]\n", 12.12);
	ft_printf("zero:				[%0f]\n", 12.12);
	printf("width 10:			[%10f]\n", 12.12);
	ft_printf("width 10:			[%10f]\n", 12.12);
	printf("space:				[% f]\n", 12.12);
	ft_printf("space:				[% f]\n", 12.12);
	printf("minus and width 10:		[%-10f]\n", 12.12);
	ft_printf("minus and width 10:		[%-10f]\n", 12.12);
	printf("hash:				[%#f]\n", 12.12);
	ft_printf("hash:				[%#f]\n", 12.12);
	printf("width 10 prec 1:		[%10.1f]\n", 12.12);
	ft_printf("width 10 prec 1:		[%10.1f]\n", 12.12);
	printf("+ width 10 prec 1:		[%+10.1f]\n", 12.12);
	ft_printf("+ width 10 prec 1:		[%+10.1f]\n", 12.12);
	printf("width 10 prec 1:		[%+10.1f]\n", -12.12);
	ft_printf("width 10 prec 1:		[%+10.1f]\n", -12.12);
	printf("width 10 prec 6:		[%10.6f]\n", 12.12);
	ft_printf("width 10 prec 6:		[%10.6f]\n", 12.12);
	printf("width 10 prec .:		[%10.f]\n", 12.12);
	ft_printf("width 10 prec .:		[%10.f]\n", 12.12);
	printf("width 10 prec .0:		[%10.0f]\n", 12.12);
	ft_printf("width 10 prec .0:		[%10.0f]\n", 12.12);
	printf("hh:				[%hhf]\n", 12.12);
	ft_printf("hh:				[%hhf]\n", 12.12);
	printf("h:				[%hf]\n", 12.12);
	ft_printf("h:				[%hf]\n", 12.12);
	printf("ll:				[%llf]\n", 12.12);
	ft_printf("ll:				[%llf]\n", 12.12);
	printf("l:				[%lf]\n", 12.12);
	ft_printf("l:				[%lf]\n", 12.12);
	printf("z:				[%zf]\n", 12.12);
	ft_printf("z:				[%zf]\n", 12.12);
	printf("j:				[%jf]\n", 12.12);
	ft_printf("j:				[%jf]\n", 12.12);
	printf("width 10 prec -1:		[%010.-1f]\n", 12.44);
	ft_printf("width 10 prec -1:		[%010.-1f]\n", 12.44);
	printf("0 width 10 prec 1:		[%010.1f]\n", 12.44);
	ft_printf("0 width 10 prec 1:		[%010.1f]\n", 12.44);
	printf("0 width 10 prec 6:		[%010.6f]\n", 12.44);
	ft_printf("0 width 10 prec 6:		[%010.6f]\n", 12.44);
	printf("#0 width 10 prec 6:		[%#010.6f]\n", 12.44);
	ft_printf("#0 width 10 prec 6:		[%#010.6f]\n", 12.44);
	printf("width 10 prec -6:		[%10.-6f]\n", 12.44);
	ft_printf("width 10 prec -6:		[%10.-6f]\n", 12.44);
	printf("number 0:			[%f]\n", 0.0);
	ft_printf("number 0:			[%f]\n", 0.0);
	printf("width 10 prec 2:		[%10.2f]\n", 1.99);
	ft_printf("width 10 prec 2:		[%10.2f]\n", 1.99);
	printf("width 10 prec 6:		[%10.6f]\n", 1.9999);
	ft_printf("width 10 prec 6:		[%10.6f]\n", 1.9999);
	printf("normal:				[%f]\n", 1.99);
	ft_printf("normal:				[%f]\n", 1.99);
	printf("width 10 prec 0:		[%10.0f]\n", 1.99);
	ft_printf("width 10 prec 0:		[%10.0f]\n", 1.99);
	printf("width 10 prec -6:		[%10.-6f]\n", 1.9999);
	ft_printf("width 10 prec -6:		[%10.-6f]\n", 1.9999);
	printf("width 10 prec 0:		[%10.0f]\n", 1.9);
	ft_printf("width 10 prec 0:		[%10.0f]\n", 1.9);
	printf("width 10 prec -6:		[%10.-6f]\n", 1.91);
	ft_printf("width 10 prec -6:		[%10.-6f]\n", 1.91);
	printf("width 10 prec 0:		[%10.0f]\n", 1.8);
	ft_printf("width 10 prec 0:		[%10.0f]\n", 1.8);
	printf("width 10 prec -6:		[%10.-6f]\n", 1.6);
	ft_printf("width 10 prec -6:		[%10.-6f]\n", 1.6);
	printf("width 10 prec -6:		[%10.-6f]\n", 1.5);
	ft_printf("width 10 prec -6:		[%10.-6f]\n", 1.5);
	printf("width 10 prec -6:		[%10.-6f]\n", 1.49);
	ft_printf("width 10 prec -6:		[%10.-6f]\n", 1.49);
	printf("{%f}{%F}\n", 1.42, 1.42);
	ft_printf("{%f}{%F}\n", 1.42, 1.42);
	
	
/* ---------------------- X, x -------------------------- */
	printf("t: normal:			[%x]\n", 1244);
	ft_printf("m: normal:			[%x]\n", 1244);
	printf("plus:				[%+x]\n", 1244);
	ft_printf("plus:				[%+x]\n", 1244);
	printf("zero:				[%0x]\n", 1244);
	ft_printf("zero:				[%0x]\n", 1244);
	printf("width 10:			[%10x]\n", 1244);
	ft_printf("width 10:			[%10x]\n", 1244);
	printf("minus and width 10:		[%-10x]\n", 1244);
	ft_printf("minus and width 10:		[%-10x]\n", 1244);
	printf("space:				[% x]\n", 1244);
	ft_printf("space:				[% x]\n", 1244);
	printf("hash:				[%#x]\n", 1244);
	ft_printf("hash:				[%#x]\n", 1244);
	printf("precyzja 1:			[%.1x]\n", 1244);
	ft_printf("precyzja 1:			[%.1x]\n", 1244);
	printf("width 10 prec -1:		[%010.-1x]\n", 1244);
	ft_printf("width 10 prec -1:		[%010.-1x]\n", 1244);
	printf("width 10 prec 6:		[%010.6x]\n", 1244);
	ft_printf("width 10 prec 6:		[%010.6x]\n", 1244);
	printf("# width 10 prec 6:		[%#010.6x]\n", 1244);
	ft_printf("# width 10 prec 6:		[%#010.6x]\n", 1244);
	printf("width 10 prec -6:		[%.-6x]\n", 1244);
	ft_printf("width 10 prec -6:		[%.-6x]\n", 1244);
	printf("hh:				[%hhx]\n", 1244);
	ft_printf("hh:				[%hhx]\n", 1244);
	printf("h:				[%hx]\n", 1244);
	ft_printf("h:				[%hx]\n", 1244);
	printf("ll:				[%llx]\n", 1244);
	ft_printf("ll:				[%llx]\n", 1244);
	printf("l:				[%lx]\n", 1244);
	ft_printf("l:				[%lx]\n", 1244);
	printf("z:				[%zx]\n", 1244);
	ft_printf("z:				[%zx]\n", 1244);
	printf("j:				[%jx]\n", 1244);
	ft_printf("j:				[%jx]\n", 1244);
	printf("jx:				[%jx]\n", -4294967296);
	ft_printf("jx:				[%jx]\n", -4294967296);
	printf("prec .:				[%.x]\n", 0);
	ft_printf("prec .:				[%.x]\n", 0);
	printf("lx:				[%lx]\n", 4294967296);
	ft_printf("lx:				[%lx]\n", 4294967296);
	printf("x:				[%x]\n", 0);
	ft_printf("x:				[%x]\n", 0);
	printf("X:				[%X]\n", 0);
	ft_printf("X:				[%X]\n", 0);
	printf("x:				[%x]\n", 4294967296);
	ft_printf("x:				[%x]\n", 4294967296);
	printf("X:				[%X]\n", 4294967296);
	ft_printf("X:				[%X]\n", 4294967296);
	printf("hx:				[%hx]\n", 4294967296);
	ft_printf("hx:				[%hx]\n", 4294967296);
	printf("hhX:				[%hhX]\n", 4294967296);
	ft_printf("hhX:				[%hhX]\n", 4294967296);
	printf("#x:				[%#x]\n", 0);
	ft_printf("#x:				[%#x]\n", 0);
	printf("#0 width 8:			[%#08x]\n", 42);
	ft_printf("#0 width 8:			[%#08x]\n", 42);
	printf("# prec .:			[%#.x]\n", 0);
	ft_printf("# prec .:			[%#.x]\n", 0);
	printf("width 5 prec .:			[%5.x]\n", 0);
	ft_printf("width 5 prec .:			[%5.x]\n", 0);
	printf("width 5 prec 0:			[%5.0x]\n", 0);
	ft_printf("width 5 prec 0:			[%5.0x]\n", 0);
	printf("j:				[%jx]\n", -4294967296);
	ft_printf("j:				[%jx]\n", -4294967296);
	printf("j:				[%jx]\n", -4294967297);
	ft_printf("j:				[%jx]\n", -4294967297);
	printf("j:				[%ju]\n", 18446744073709486080);
	ft_printf("j:				[%ju]\n", 18446744073709486080);
	
	
/* ---------------------- the rest -------------------------- */
	

	
	ft_printf("%zo, %zo\n", 0, 18446744073709551615); //unsigned long long int
	printf("%zo, %zo\n", 0, 18446744073709551615);
	ft_printf("%lo, %lo\n", 0, 4294967295); //unsigned long int
	printf("%lo, %lo\n", 0, 4294967295);
	printf("[%s] [%C] [%d] [%x] [%%] [%S]\n", "bonjour ", L'Ë©≤', 42, 42, L"ŸM-^Dÿ≠ŸM-^E ÿÆŸM-^Fÿ...");
	ft_printf("[%s] [%qC] [%d] [%x] [%%] [%qS]\n", "bonjour ", L'Ë©≤', 42, 42, L"ŸM-^Dÿ≠ŸM-^E ÿÆŸM-^Fÿ...");
	ft_printf("{%05.R}\n", 0);
	printf("{%05.R}\n", 0);
	ft_printf("{%30qS}\n", L"ÊM-M-^QÊM-^XØ‰∏M-ÂM-^O™ÁM-^L´„M-M-^B");
	printf("{%30S}\n", L"ÊM-M-^QÊM-^XØ‰∏M-ÂM-^O™ÁM-^L´„M-M-^B");
	ft_printf("%qS\n", L"Á±≥");
	printf("%S\n", L"Á±≥");
	ft_printf("{%*c}\n", -15, 0);
	printf("{%*c}\n", -15, 0);
	ft_printf("%hhqC, %hhqC\n", 0, L'Á±≥');
	printf("%hhC, %hhC\n", 0, L'Á±≥');
	ft_printf("%s %qC %d %p %x %% %qS\n", "bonjour ", L'Ë©≤', 42, &free, 42, L"ŸM-^Dÿ≠ŸM-^E ÿÆŸM-^Fÿ...");
	printf("%s %C %d %p %x %% %S\n", "bonjour ", L'Ë©≤', 42, &free, 42, L"ŸM-^Dÿ≠ŸM-^E ÿÆŸM-^Fÿ...");
	ft_printf("{%05.qS}\n", L"42 c est cool");
	printf("{%05.S}\n", L"42 c est cool");
	ft_printf("%qC\n", L'ÁM-^L´');
	printf("%C\n", L'ÁM-^L´');
	ft_printf("{%030qS}\n", L"ÊM-M-^QÊM-^XØ‰∏M-ÂM-^O™ÁM-^L´„M-M-^B");
	printf("{%030S}\n", L"ÊM-M-^QÊM-^XØ‰∏M-ÂM-^O™ÁM-^L´„M-M-^B");
	ft_printf("%.4qS\n", L"ÊM-M-^QÊM-^XØ‰∏M-ÂM-^O™ÁM-^L´„M-M-^B");
	printf("%.4S\n", L"ÊM-M-^QÊM-^XØ‰∏M-ÂM-^O™ÁM-^L´„M-M-^B");
	ft_printf("{% qS}\n", L"(null)");
	printf("{% S}\n", L"(null)");
	
	return (0);
}
