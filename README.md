# ft_printf

`ft_printf` es una implementación de la función `printf` en C, desarrollada como parte de un proyecto para imitar su comportamiento utilizando variables variádicas.

## Descripción

El objetivo de este proyecto es crear una función personalizada `ft_printf` que reproduzca el comportamiento de la función `printf` estándar de C. La función `ft_printf` permite formatear e imprimir diferentes tipos de datos, utilizando un conjunto específico de conversiones.

## Características

`ft_printf` admite las siguientes conversiones:

- `%c`: Imprime un solo carácter.
- `%s`: Imprime una cadena de caracteres.
- `%p`: Imprime un puntero `void *` en formato hexadecimal.
- `%d`: Imprime un número decimal (base 10).
- `%i`: Imprime un entero en base 10.
- `%u`: Imprime un número decimal sin signo (base 10).
- `%x`: Imprime un número hexadecimal (base 16) en minúsculas.
- `%X`: Imprime un número hexadecimal (base 16) en mayúsculas.
- `%%`: Imprime el símbolo de porcentaje.

