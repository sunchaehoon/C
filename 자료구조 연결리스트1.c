#include <stdio.h>
#pragma warning(disable: 4996)

typedef struct listnode {
    int data;
    struct listnode* link;
}Node;

int main() {
    //단순 연결리스트
        Node*head = NULL;
        Node*tail = NULL;
        //앞으로 연결 tail temp
        Node* t = head;
        int data;
        while (1) {
            Node* newnode = (Node*)malloc(sizeof(Node));
            scanf("%d", &data);

            if (data > 0) {
                newnode->data = data;
                newnode->link = NULL;
              if (head == NULL)
                    head = newnode;
                else {
                    newnode->link = head;
                    head = newnode;
                }
            }
            else
                break;
        }
  tail = t;

        Node* temp = head;
  while (temp) {
            printf("%d", temp->data);
            temp = temp->link;
            if (temp != tail) printf("->");
            else break;
        }
    }
