#include <stdio.h>
#include <stdlib.h>

typedef struct node{
	int data;        //节点的数据域，DataType为数据类型
	struct node *next;  //结点指针域 
}ListNode,*LinkList;    //定义新类型

LinkList Create_LinkList2(){
	LinkList head =(LinkList)malloc(sizeof(ListNode));
	head->next=NULL;  //空表
	ListNode *s; //插入到表位的新节点S
	ListNode *r=head; //表尾指针R
	int x; //int 类型
	scanf(" %d",&x);
	while (x!=-1){
	
	     s=(ListNode*)malloc(sizeof(ListNode));
		 s->data=x;
		 s->next=NULL;
		 r->next=s;
		 r=s;
		 scanf(" %d",&x);
		 
   } 
  return head ;
}
void print(ListNode *head){
	ListNode *p;
	p=head->next;
	while(p!=NULL){
	
	printf(" %d",p->data);
	p=p->next;}
}

main() {
     LinkList head;
    printf("使用尾插入法建表，输入-1结束\n");
     head=Create_LinkList2();
    printf("尾插入法建表为：");
     print(head);
    printf("\n使用头插入法建表，输入-1结束\n");
    head=Create_LinkList2();
    printf("尾插入法建表为：");
     print(head);
 
}
 
