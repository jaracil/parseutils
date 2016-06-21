/*
 * parsetest.c
 *
 *  Created on: 15 de ago. de 2015
 *      Author: pepe
 */

#include <stdlib.h>
#include <stdio.h>

#include "parseutils.h"

void print_list(str_list *l){
	str_list *p = l;

	while(p != NULL) {
		puts(p->s);
		p = p->next;
	}
}

int main(){
	char *s = ";=;=;=Hola;Mundo;Cruel;=;=;=", *r;
	str_list *l;

	l = str_split(s, ";=");
    print_list(l);
    str_list_free(l);
    puts("------");
	l = str_split_n(s, ";=", 2);
    print_list(l);
    str_list_free(l);
    puts("------");
	l = str_split_n(s, ";=", 1);
    print_list(l);
    str_list_free(l);
    puts("------");
    r = str_ltrim(s,";=");
    puts(r);
    free(r);
    puts("------");
	r = str_rtrim(s, ";=");
    puts(r);
    free(r);
    puts("------");
    r = str_trim(s,";=");
    puts(r);
    free(r);
    puts("------");
    r = str_upper(s);
    puts(r);
    free(r);
    puts("------");
    r = str_lower(s);
    puts(r);
    free(r);
    puts("------");

    return 0;
}
