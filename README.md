<h1>Домашняя работа к лабораторной №9</h1>
<h2>Выаолнил: Кравченко А.С.</h2>

<h1>Вариант 14</h1>
<h2>Условие задачи</h2>
Написать программу, выводящую на экран заданную геометрическую фигуру, нарисованную с помощью заданного с клавиатуры символа, условие заполнения фигуры и задаваемые параметры фигуры в таблице (остальные можно взять константные)<br>
<img width="787" height="163" alt="image" src="https://github.com/user-attachments/assets/755b4558-48f2-4c8e-98f7-6ab58e5310eb" />

<h2>Алгоритм</h2>

```
1. Начало.
2. Инициализируем переменные
  char sim;
  int a, b, c.
3. Если a<b+c && b<a+c && c<b+a:
      i = 0;
      Пока i <= c:
        i++;
        Если i < c:
          j = 0;
          Пока j < i*2 - 1:
            j++;
            printf("*");
        Иначе: 
          j = 0
          Пока j < i*2 - 2:
            j++;
            printf("%c", sim);
        Если i > 0:
          printf("%c", sim);
        printf("\n");
4. Конец.
```
            
<h2>Код программы</h2>

```
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
```

<h2>Схема</h2>
<img width="667" height="713" alt="image" src="https://github.com/user-attachments/assets/e311641e-3f72-4db8-9012-52c807d71aa6" />

<h2>Консоль</h2>
<img width="437" height="350" alt="image" src="https://github.com/user-attachments/assets/f60be949-7b9f-42a2-9745-56db9ed0cc0d" />
         
