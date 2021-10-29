#include <stdio.h>
#include <stdlib.h>
struct Node {
    int data;
    struct Node* next;
};
struct Node* head;
void Insert(int x){
    struct Node* temp = malloc(sizeof(struct Node));
    temp->data = x;
    temp->next = head;
    head = temp;
}
void Print(){
    struct Node* temp= head;
    printf("The List is: ");
    while(temp!=NULL){
        printf("%d",temp->data);
        temp = temp->next;
    }
    printf("\n");
}
int main(){
    head = NULL;
    Insert(4);
    Insert(7);
    Insert(9);
    Insert(10);
    Insert(2);
    Print();
}