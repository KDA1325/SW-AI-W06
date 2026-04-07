#include <stdio.h>
// 특정 위치의 Node를 찾는 코드이다. 구조체의 내용을 참고하여. 빈 칸의 코드를 작성하시오
typedef struct _listnode{

    int item;

    struct _listnode *next;

} ListNode;



typedef struct _linkedlist{

    int size;

    ListNode *head;

} LinkedList;



ListNode * findNode(LinkedList *ll, int index){

    ListNode *temp;

    // 코드 작성
    temp = ll->head;
    
    int tmp_idx = 0;

    while(temp != NULL)
    {
        if(tmp_idx == index)
        {
            break;
        }
        else{
            temp = temp->next;
            tmp_idx++;
        }
    }

    return temp;
}
