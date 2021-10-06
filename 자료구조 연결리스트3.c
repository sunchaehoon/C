#include <stdio.h>
#pragma warning(disable: 4996)

typedef struct listnode {
    int data;
    struct listnode* link;
}Node;

int main() {
    //단순 연결리스트
    Node* head = NULL;
    Node* tail = NULL;
    int data;
    int del;

    while (1) {
        Node* newnode = (Node*)malloc(sizeof(Node));
        scanf_s("%d", &data);

        if (data > 0) {
            newnode->data = data;
            newnode->link = NULL;
            if (head == NULL)
                head = newnode;
            else
                tail->link = newnode;
            tail = newnode;
        }
        else {
            printf("end\n");
            break;
        }
    }

    Node* temp = head;

    scanf_s("%d", &del);

    while (temp) {
        if (temp->data == del) {
            temp = temp->link;
            continue;
        }
        printf("%d ", temp->data);
        if (temp != tail) printf("-> ");
        else break;
        temp = temp->link;
    }
}
