#include "public1.h"

typedef char TElemType ;

//�������Ķ�������洢�ṹ

typedef struct BiTNode{
  TElemType data;
  struct BiTNode *Lchild,*Rchild;
}BiTNode,*BiTree;

Status CreateBiTree(BiTree &T); /* ������ȫ�������н��������� */
void visit(TElemType e);
Status PreOrderTraverse(BiTree T,void(*Visit)(TElemType));/* ������������� */
Status InOrderTraverse(BiTree T,void(*Visit)(TElemType)); /* ������������� */
Status PostOrderTraverse(BiTree T,void(*Visit)(TElemType)); /* ������������� */
Status PrintTree(BiTree bt, int nLayer);  /* ��������״��ӡ�Ķ����� */
Status DestroyBiTree(BiTree &T); /* ���ٶ����� */
