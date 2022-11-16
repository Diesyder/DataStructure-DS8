#include "public1.h"

typedef char TElemType ;

//二叉树的二叉链表存储结构

typedef struct BiTNode{
  TElemType data;
  struct BiTNode *Lchild,*Rchild;
}BiTNode,*BiTree;

Status CreateBiTree(BiTree &T); /* 根据完全先序序列建立二叉树 */
void visit(TElemType e);
Status PreOrderTraverse(BiTree T,void(*Visit)(TElemType));/* 先序遍历二叉树 */
Status InOrderTraverse(BiTree T,void(*Visit)(TElemType)); /* 中序遍历二叉树 */
Status PostOrderTraverse(BiTree T,void(*Visit)(TElemType)); /* 后序遍历二叉树 */
Status PrintTree(BiTree bt, int nLayer);  /* 按竖向树状打印的二叉树 */
Status DestroyBiTree(BiTree &T); /* 销毁二叉树 */
