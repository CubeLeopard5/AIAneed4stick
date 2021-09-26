/*
** EPITECH PROJECT, 2020
** lib h
** File description:
** lib
*/

#include "stdlib.h"
#include <fcntl.h>
#include <stdio.h>


#ifndef LIB_H_
#define LIB_H_
char **create_array(int x, int y);
char **fill_array_with(char **array, char c);
//void free_map(char **array);
long my_getnbr(char *str);
int my_pow(int nbr, int n);
void my_putstr(char *dest);
void my_putchar(char c);
int  my_putnbr(int n);
int get_nbr_len(int i);
void my_put_intarray(int *array, int size);
int my_strlen(char *str);
int my_strcmp(char *a, char *b);
int str_begin_by(char *str, char *begin);
char *my_strcat(char *a, char *b);
char **my_realloc_2d_char(char **array, int size_to_add);
int get_charray_size (char **array);
void my_wrerror (char *str);

#endif /* !LIB_H_ */
