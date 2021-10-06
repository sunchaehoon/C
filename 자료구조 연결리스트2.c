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
  if (head == NULL)
                    head = newnode;
                else
                    tail->link = newnode;
                tail = newnode;
            }
            else
                break;
        }
tail = t;

        Node* temp = head;
while (temp) {
            printf("%d ", temp->data);
            if (temp != tail) printf("-> ");
            else break;
            temp = temp->link;
        }
