#define _CRT_SECURE_NO_DEPRECATE 
#include <stdio.h>
#include <locale.h>

void main()
{
	setlocale(LC_ALL, "RUS");
	char sim;
	int a;
	int b;
	int c;
	puts("введите символ:");
	scanf("%c", &sim);
	puts("введите а:");
	scanf("%d", &a);
	puts("введите b:");
	scanf("%d", &b);
	puts("введите с:");
	scanf("%d", &c);
	if (a<b+c && b<c+a && c<a+b) {
		for (int i = 0; i <= c; i++) { //вывод правой стороны
			printf("%c", sim);
			if (i < c) {//вывод левой стороны
				for (int j = 0; j < i * 2 - 1; j++) {
					printf("*");
				}
			}
			else {
				for (int j = 0; j < a - 2; j++) {
					printf("%c", sim);
				}
			}
			if (i > 0) {//вывод основания
				printf("%c", sim);
			}
			printf("\n");
		}
	}
}