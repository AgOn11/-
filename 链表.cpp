#include <stdio.h>
#include <stdlib.h>

typedef struct node{
	int data;        //�ڵ��������DataTypeΪ��������
	struct node *next;  //���ָ���� 
}ListNode,*LinkList;    //����������

LinkList Create_LinkList2(){
	LinkList head =(LinkList)malloc(sizeof(ListNode));
	head->next=NULL;  //�ձ�
	ListNode *s; //���뵽��λ���½ڵ�S
	ListNode *r=head; //��βָ��R
	int x; //int ����
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
    printf("ʹ��β���뷨��������-1����\n");
     head=Create_LinkList2();
    printf("β���뷨����Ϊ��");
     print(head);
    printf("\nʹ��ͷ���뷨��������-1����\n");
    head=Create_LinkList2();
    printf("β���뷨����Ϊ��");
     print(head);
 
}
 
