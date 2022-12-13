/*
LINKED LIST  -  ОДНОСВЯЗНЫЙ СПИСОК =================================================

#include <stdio.h>
#include <stdlib.h>
typedef struct Data {  //->  Создаём новы тип данных, содержащий все элементы данных одного звена, что бы можно было передавать их в качестве одной переменной.
    char name[20];
    int age;
    char occupation[20];
} Data;
typedef struct Friends {  //->  Создаём протатип звена нашего односвязного списка.
    Data info;
    struct Friends* next;
} Friends;
int isEmpty(const Friends* head);  //->  Функция проверяющая наличие элементов в спискеи возвращающая 1 - если список пуст и 0 - если нет.
void push(Friends** head, Data info);  //->  Функция добавляющая элемент в начало списка.
Data pop(Friends** head);  //->  Функция удаляющая элемент из списка и возвращающая данные данного звена.
void printList(Friends* head);  //->  Функция печатающая список начиная с последнего добавленного.

int main(void) {
    Friends* head = NULL;
    Data Vitalik = {"Vitalik", 37, "flight attendant"};
    Data Anatoliy = {"Anatoliy", 35, "flight attendant"};
    Data Evgeniy = {"Evgeny", 34, "lawyer"};
    push(&head, Vitalik);
    push(&head, Anatoliy);
    push(&head, Evgeniy);
    printf("Empty: %s\n", isEmpty(head) ? "YES" : "NO");
    printList(head);
    if (head != NULL)
        pop(&head);
    else
        printf("List is empty.\n");
    return 0;
}

int isEmpty(const Friends* head) {
    return head == NULL;
}
void printList(Friends* head) {
    if (head != NULL)
        for (Friends* p = head; p != NULL; p = p->next)
            printf("%s %d %s\n", p->info.name, p->info.age, p->info.occupation);
    else
        printf("List is empty.\n");
}
void push(Friends** head, Data info) {
    Friends* p = malloc(sizeof(Friends));
    p->info = info;
    p->next = *head;
    *head = p;
}
Data pop(Friends** head) {
    Data tmpData = (*head)->info;
    Friends* tmpAdress = *head;
    *head = (*head)->next;
    free(tmpAdress);
    return tmpData;
}


 LINKED LIST  -  ДВУСВЯЗНЫЙ СПИСОК =================================================

*/



