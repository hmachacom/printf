#include <limits.h>
#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
    int len;
    int len2;
    /*char *str = "Al venir al mundo fueron delicadamente mecidas por las manos de la lustral Doniazada, su buena tía, que grabó sus nombres sobre hojas de oro coloreadas de húmedas pedrerías y las cuidó bajo el terciopelo de sus pupilas hasta la adolescencia dura, para esparcirlas después, voluptuosas y libres, sobre el mundo oriental, eternizado por su sonrisa. Yo os las entrego tales como son, en su frescor de carne y de rosa. Sólo existe un método honrado y lógico de traducción:";*/
   /* unsigned int ui;
    void *addr;*/

    len = _printf("Let's try to printf a simple sentence.\n");
    len2 = printf("Let's try to printf a simple sentence.\n");
    printf("%d%d\n", len, len2);
    _printf("Let's print a simple sentence.\n");
    printf("Let's print a simple sentence.\n");
    _printf("%c", 'S');
    printf("%c", 'S');
    printf("-----");
    _printf("A char inside a sentence: %c. Did it work?\n", 'F');
     printf("+++++");
    printf("A char inside a sentence: %c. Did it work?\n", 'F');
    printf("-----");
    _printf("Let'see if the cast is correctly done: %c. Did it work?\n", 48);
    printf("+++++");
    printf("Let'see if the cast is correctly done: %c. Did it work?\n", 48);
     printf("-----");
    _printf("%s", "This sentence is retrieved from va_args!\n");
    printf("+++++");
    printf("%s", "This sentence is retrieved from va_args!\n");
    printf("-----");
    _printf("Complete the sentence: You %s nothing, Jon Snow.\n", "know");
    printf("+++++");
    printf("Complete the sentence: You %s nothing, Jon Snow.\n", "know");
    printf("-----");
    _printf("Complete the sentence: You %s nothing, Jon Snow.\n", (char *)0);
    printf("+++++");
    printf("Complete the sentence: You %s nothing, Jon Snow.\n", (char *)0);
    printf("-----");
    _printf("%c%cth %s%s a%cg%s: Y%sou %s no%ching%s Snow.%c", 'W', 'i', "some ", "more", 'r', "s", "", "know", 't', ", Jon", '\n');
    printf("+++++");
    printf("%c%cth %s%s a%cg%s: Y%sou %s no%ching%s Snow.%c", 'W', 'i', "some ", "more", 'r', "s", "", "know", 't', ", Jon", '\n');
    printf("-----");
    _printf("%%");
    printf("+++++");
    printf("%%");
    printf("-----");
    _printf("Should print a single percent sign: %%\n");
    printf("+++++");
    printf("Should print a single percent sign: %%\n");
    printf("-----");
    _printf("%s%c%c%c%s%%%s%c", "Loading ", '.', '.', '.', " 99", " Please wait", '\n');
    printf("+++++");
    printf("%s%c%c%c%s%%%s%c", "Loading ", '.', '.', '.', " 99", " Please wait", '\n');
    printf("-----");
    _printf("css%ccs%scscscs", 'T', "Test");
    printf("+++++");
    printf("css%ccs%scscscs", 'T', "Test");
    printf("-----");
    _printf(NULL);
    printf("+++++");
    printf(NULL);
    printf("-----");
    _printf("%c", '\0');
    printf("+++++");
    printf("%c", '\0');
    printf("-----");
    _printf("%");
    printf("+++++");
    printf("%");
    printf("-----");
    _printf("%!\n");
    printf("+++++");
    printf("%!\n");
    printf("-----");
    _printf("%K\n");
    printf("+++++");
    printf("%K\n");
    printf("-----");
   /* _printf(str);
    printf(str);*/
    _printf("Percent:[%]\n");
    printf("+++++");
    printf("Percent:[%]\n");
    printf("-----");
    /*ui = (unsigned int)INT_MAX + 1024;
    addr = (void *)0x7ffe637541f0;
    _printf("Length:[%d, %i]\n", len, len);
    printf("Length:[%d, %i]\n", len2, len2);
    _printf("Negative:[%d]\n", -762534);
    printf("Negative:[%d]\n", -762534);
    _printf("Unsigned:[%u]\n", ui);
    printf("Unsigned:[%u]\n", ui);
    _printf("Unsigned octal:[%o]\n", ui);
    printf("Unsigned octal:[%o]\n", ui);
    _printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
    printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui)*/;
   /* _printf("Character:[%c]\n", 'S');
    printf("Character:[%c]\n", 'S');
    _printf("String:[%s]\n", '\0');
    printf("String:[%s]\n", '\0');*/
   /* _printf("Address:[%p]\n", addr);*/
   /* printf("Address:[%p]\n", addr);*/
   /* len = _printf("Percent:[%%]\n");
    len2 = printf("Percent:[%%]\n");*/
    /*_printf("Len:[%d]\n", len);
    printf("Len:[%d]\n", len2);*/
   /* _printf("Unknown:[%r]\n");
    printf("Unknown:[%r]\n");*/
    return (0);
}