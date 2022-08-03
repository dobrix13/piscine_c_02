#ifndef C_01
#define C_01

//includes
#include <unistd.h>
#include <stdlib.h>
#include "../c_00/ex00.h"

//function prototypes:
void	ft_ft(int *n);
void	ft_ultimate_ft(int *********nbr);
void	ft_swap(int *a, int *b);
void	ft_div_mod(int a, int b, int *div, int *mod);
void	ft_ultimate_div_mod(int *a, int *b);
void	ft_putstr(char *str);
int		ft_strlen(char *str);
void	ft_rev_int_tab(int *tab, int size);
void	ft_sort_int_tab(int *tab, int size);
void	ft_strcpy(char *dest, const char *src);
void	ft_strncpy(char *dest, const char *src, unsigned int n);
int		ft_str_is_alpha(const char *str);
int		ft_str_is_numeric(const char *str);
int		ft_str_is_lowercase(const char *str);
int		ft_str_is_uppercase(const char *str);
int		ft_str_is_printable(const char *str);


#endif