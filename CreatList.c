#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>

struct LinkNode {
    int value;
    struct LinkNode* next;
};

struct LinkNode *creat(int *a , int n) {
    struct LinkNode *head, *node, *end;//定义头节点，普通节点，尾部节点；
    head = (struct LinkNode *) malloc(sizeof(struct LinkNode));//分配地址
    end = head;         //若是空链表则头尾节点一样
    for (int i = 0; i < n; i++) {
        node = (struct LinkNode *) malloc(sizeof(struct LinkNode));
        node->value = a[i];
        end->next = node;
        end = node;
    }
    end->next = NULL;//结束创建
    return head;
}

int main() {
    int m;
    int n[100];
    scanf("%d" , &m);
    for ( int i = 0 ; i < m ; i++ )
        scanf("%d", &n[i]);
    struct LinkNode* h = creat(n , m );
    while (h->next != NULL) {
        h = h->next;
        printf("%d  ", h->value);
    }
    return 0;
}