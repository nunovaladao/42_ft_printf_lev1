#include "../includes/ft_printf.h"

int print_str(char *str)
{
    if (!str)
        return (print_str("(null)"));
    else 
        return (write(1, str, ft_strlen(str)));
}