#include <stdio.h>

struct ListNode
{
     int val;
     struct ListNode *next;
};

struct ListNode *mergeTwoLists(struct ListNode *list1, struct ListNode *list2)
{
     if (list1 == NULL)
          return list2;
     if (list2 == NULL)
          return list1;

     struct ListNode *p1 = list1;
     struct ListNode *p2 = list2;
     struct ListNode *newList = NULL; // 记录新节点的头节点
     struct ListNode *temp = NULL;    // 记录新节点的尾节点

     while (p1 != NULL && p2 != NULL)
     {
          /**
           * 创建新节点
           */
          struct ListNode *newNode = malloc(sizeof(struct ListNode));
          // 内存分配失败
          if (newNode == NULL)
               return NULL;
          // 新节点的next元素应该为空
          newNode->next = NULL;

          /**
           * 赋值新节点,较小值作为新节点的头节点.并且移动原来节点的指针指向下一个节点
           */
          if (p1->val > p2->val)
          {
               newNode->val = p2->val;
               // 更新p2后继节点指向下一个节点
               p2 = p2->next;
          }
          else
          {
               newNode->val = p1->val;
               p1 = p1->next;
          }

          // 因为newList记录新节点newNode的头节点.所以一开始需要给空值赋值
          if (newList == NULL)
          {
               newList = newNode;
               temp = newList; // 赋值尾节点
          }
          else
          {
               // 头节点不为空.赋值尾节点
               temp->next = newNode;
               temp = temp->next; // 这个操作是因为合并链表不丢失相同部分
          }

          // 剩余部分直接链接到链表尾部
          if (p1 == NULL)
               temp->next = p2;
          else
               temp->next = p1;
     }

     return newList; // 因为newList记录了newNode
}
