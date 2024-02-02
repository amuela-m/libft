/*
DESCRIPCIÓN
     La función strchr() localiza la primera aparición de c (convertido a un
     char) en la cadena apuntada por s. El carácter nulo de terminación se
     considera parte de la cadena; por tanto, si c es '\0', las funciones
     localizan la terminación '\0'.

VALORES DE RETORNO
     Las funciones strchr() y strrchr() devuelven un puntero al carácter localizado
     o NULL si el carácter no aparece en la cadena.
*/

#include <stdio.h>

char *ft_strchr(const char *s, int c)
{
     int  i;
     char c1; 

     i = 0;
     c1 = (char) c;
     while (s[i] != '\0') 
     {
          if (s[i] == c)
               return ((char *) &s[i]);
          i++;
     }
     return (NULL);
}

int  main(void)
{
     const     char *s;
     char  c; 
     
     s = "pablo";
     c = 'b';
     printf("%s\n", ft_strchr(s, c));
     return (0);
}