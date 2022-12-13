/*
 СТРУКТУРЫ ПЕРЕЧИСЛЕНИЯ ОБЪЕДТНЕНИЯ ===================================================
 
 #include <stdio.h>
 #include <string.h>
 typedef  struct MilitaryInfo {
     char rang[50];
     char milOccupation[50];
 } MilitaryInfo;
 typedef struct Friends {
     char name[30];  //->  создаем строку с именем как массив на стеке, что бы можно было менять его значение.
     char age;  //->  для возраста вполне достаточно переменной которая будет содержать значения не более 127.
     char civOccupation[50];
     MilitaryInfo milInfo;
 } Friends;

 int main() {
     //Ниже следуют разные способы инициализации значений полям переменной структурного типа Friends.
     Friends Vitalik = {"Vitalik", 37, "flight attendant", {"lieutenant", "sniper"}};
     Friends Anatoliy = {"Anatoliy", 35, .civOccupation = "flight attendant", {.rang = "captain"}};
     //Доступ к значения полей наших переменных структурного типа Friends
     sprintf(Anatoliy.milInfo.milOccupation, "%s", "hedgehopper");
     printf("%s\n", Anatoliy.milInfo.milOccupation);
     strcpy(Anatoliy.milInfo.milOccupation, "fighter");
     printf("%s\n", Anatoliy.milInfo.milOccupation);
     //Работа с указателями такая же как и с переменными.
     Friends* pointerVitalik = &Vitalik;
     //Доступ к значениям через указатель осуществляется двумя способами:
     //   1. Через разыменование
     printf("%s\n", (*pointerVitalik).civOccupation);
     //   2. Через оператор ->
     printf("%d\n", pointerVitalik->age);
     //Размер структуры не равен размеру всех её полей так как система всегда выравнивает поля по машинному слову и может получится так, что размер структуры будет больше чем сумма размеров её полей.
     printf("%lu\n", sizeof(Friends));
     //Что бы узнать размер поля необходим передать адрес этого поля в функцию sizeof()
     printf("%lu - age | %lu - milInfo\n", sizeof(Vitalik.age), sizeof(Vitalik.milInfo));
     return 0;
 }
 
 #include <stdio.h>
 int main(void) {
     typedef enum {COUNT, PUNDS, PINTS} unitOfMeasury;  //->  создаём перечисление содержащее допустимые виды мер.
     typedef union {   //->  создаём объединение содержащее переменные с видами мер.
         short count;
         float weight;
         float volume;
     } quantity;
     typedef struct {   //->  создаём структуру содержащую имя, страну, колличество, вид меры.
         const char* name;
         const char* country;
         quantity amount;
         unitOfMeasury units;
     } fruitOrder;
     return 0;
 }

 
 */

