#include "ft_printf.h"

int main()
{
    int *ptr;
    int nb = 3;
    ptr = &nb;
    int *m;

/*char str[] = "";
ft_printf("%s",str);
printf("%s",str);*/

//int result;
//result = printf(" %c %c %c %c", '2', '3', '2', '1');
//printf("Total printed characters are: %d\n",result);
//printf("\n----------------\n");
//ft_printf("hello%c\n ca va ? %c %c %c", 'Z', 'd', 'a', 'h');

/*int result = printf(" %% ");
printf("%d\n",result);
printf("\n----------------\n");
ft_printf(" %% ");

int res = printf("%% %%");
printf("%d\n",res);
ft_printf("%% %%");*/
int result;
result = printf(" %i %i", -45, -50);
printf("\n%i\n",result);
ft_printf(" %i %i", -45, -50);
}