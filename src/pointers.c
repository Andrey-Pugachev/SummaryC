/*
 УКАЗАТЕЛИ =======================================
 
 int x = 54;  ->  Переменная с именем x типом int и значением 54.
 int* p = &x;  ->  Переменная адресного типа с именем p и значением в виде адреса переменной x, содержащей значение типа int (адрес берется при помощи оператора &).
 *p = 76; или y = *p;  ->  Доступ к значению, хоанящемуся по адресу, содержащемуся в переменной p через разыменование при помощи оперетора *.
 
 int** pp = &p;  ->  Переменная адресного типа с именем pp и значением в виде адреса переменной p, содержащей значение в виде адреса переменной типа int* с именем х и значение 54 (адрес берется при помощи оператора &).
 *pp  ->  Доступ к значению (адресу переменной x), хоанящемуся по адресу, содержащемуся в переменной pp через разыменование при помощи оперетора *.
 *p  ->  Доступ к значению (значение переменной x), хоанящемуся по адресу, содержащемуся в переменной p через разыменование при помощи оперетора *.
 
 int x[3] = {3, 5, 2};  ->  Имя массива, в гашем случае x - это указатель на первый элемент массива.
 char str[] = "Hello, World!";  ->  Имя str это указательна первый элемент массива символов, то есть строки, то есть ячейку памяти в котрой зранится буква 'H'.
 str + 1  ->  Адресс смещается на одну величину, занимаемую одной ячейкой памяти типа char то есть 1 байт и начинает указывать на ячейку со значением 'e'.
 x + 2  ->  Адресс смещается на две величины, занимаемую одной ячейкой памяти типа int то есть два раза по 4 или 8 байт и начинает указывать на ячейку со значением 2
 
 Пробежка по строке её распечатка:
 for (char* p = str; *p != '\0', p++)
    printf("%c", *p);
 
 
 */
