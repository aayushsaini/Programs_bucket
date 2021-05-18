#include <stdlib.h>
#include <stdio.h>

typedef struct node{
    int data;
    struct node *next;
}node;

node *createNodes(int n);
node *insertNodes(node *head);
node *deleteNode(node *head);

void displayNodes(node *head);

int main() {
    node *head = NULL;  //Starting Node

    int num = 0;
    int ch = 0;

    while(ch != -1) {
        printf("\nSelect:\t1. Display the linked list\t2. Enter nodes into linked list\t3. Insert new node\t4. Delete Node\t-1. Exit\n=>");
        scanf("%d", &ch);
        if(ch == 1) {
            displayNodes(head);
        } else if(ch == 2) {
            printf("\nNo. of nodes: ");
            scanf("%d", &num);
            head = createNodes(num); 
        } else if(ch == 3) {
            head = insertNodes(head);
        } else if(ch == 4) {
            head = deleteNode(head);
        }
    }   //fetch back the nodes
    

    return 0;
}

node * createNodes(int n) {
    int i = 0;
    node *head = NULL;  //Starting node
    node *temp = NULL;  //Atomic node(s)
    node *ptr = NULL;   //traversal nodes, maybe? ;*

    for(i=0; i<n; i++) {
        //creating atomic nodes
        temp = malloc(sizeof(node));
        printf("\nEnter the data for node(%d) : ", i+1);
        scanf("%d", &temp->data);
        temp->next = NULL;

        //Crucial Part
        if(head == NULL) {
            head = temp;
        } else {
            ptr = head;
            while(ptr->next != NULL) {
                ptr = ptr->next;
            }
            ptr->next = temp;
        }
    }

    return head;
}

void displayNodes(node *head) {
    node *ptr = head;
    printf("\nDisplaying the linked list: \n");
    while(ptr != NULL) {
        printf("%d -> ", ptr->data);
        ptr = ptr->next;
    }
    printf("NULL\n");
}
// 1->2->3->4
//2.5
node *insertNodes(node *head) {
    if(head == NULL) {
        printf("\nCreate a list first!");
        return head;
    }
    else {
        int ch = 0;
        node *ptr = NULL;
        node *temp = NULL;

        temp = malloc(sizeof(node));
        printf("\nEnter the data of the node: ");
        scanf("%d", &temp->data);

        printf("\nSelect: 1) Insert at beg   2) Insert at the end    3) Insert at custom\n=> ");
        scanf("%d", &ch);
        temp->next = NULL;

        if(ch == 1) {
            ptr = head;
            head = temp;
            head->next = ptr;
        } else if(ch == 2) {
            ptr = head;
            while(ptr->next != NULL) {
                ptr = ptr->next;
            }
            ptr->next = temp;
        } else if(ch == 3) {
            ptr = head;
            int ctr = 1;
            int pos = 0;
            printf("\nEnter the pos: ");
            scanf("%d", &pos);
            while(ctr != pos-1) {
                ptr = ptr->next;
                ctr++;
            }
            temp->next = ptr->next;
            ptr->next = temp;
        }
        return head;
    }
}

node *deleteNode(node *head) {
    if(head == NULL) {
        printf("\nCreate a list first");
    } else {
        node *temp = NULL;
        node *ptr = NULL;
        int ch = 0;
        printf("\nDelete from\t1. Beg\t2. Last\n3. Pos\n=> ");
        scanf("%d", &ch);
        if(ch == 1) {
            temp = head->next;
            free(head);
            head = temp;
        } else if( ch == 2) {
            ptr = head;
            while(ptr->next->next != NULL) {
                ptr = ptr->next;
            }
            free(ptr->next);
            ptr->next = NULL;   
        } else if(ch == 3) {
            int pos = 0;
            int ctr = 0;
            printf("\nEnter the position: ");
            scanf("%d", &pos);
            while(ctr != pos-1) {
                ptr = ptr->next;
                ctr++;
            }
            temp = ptr->next->next;
            ptr->next = temp;
        }
    }
    return head;
}
