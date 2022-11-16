#define _CRT_SECURE_NO_WARNINGS 1
#include "BiTree.h"

// 二叉链表的基本操作 

/*创建二叉树*/
Status CreateBiTree(BiTree &T)
{ // 按完全先序序列输入二叉树中结点的值
	TElemType Number=0;
	scanf("%c",&Number);
	if(Number=='0')
		T=NULL;//空树
	else{
		if(!(T=(BiTNode*)malloc(sizeof(BiTNode)))) exit(OVERFLOW);
		T->data=Number; // 生成根结点
		CreateBiTree(T->Lchild); // 递归建(遍历)左子树
		CreateBiTree(T->Rchild); // 递归建(遍历)右子树
	}
	return OK;
}

/*输出用的函数*/
void visit(TElemType e)
{ 
	printf("[%c]",e);
}

/*先序*/
Status PreOrderTraverse(BiTree T,void(*Visit)(TElemType))
{ // 初始条件：二叉树T存在，Visit是对结点操作的应用函数。
	// 操作结果：先序递归遍历T，对每个结点调用函数Visit一次且仅一次
	if(T!=NULL){
		Visit(T->data);
		PreOrderTraverse(T->Lchild,visit);
		PreOrderTraverse(T->Rchild,visit);
	}
	return OK;
}

/*中序*/
Status InOrderTraverse(BiTree T,void(*Visit)(TElemType))
{ // 初始条件：二叉树T存在，Visit是对结点操作的应用函数
	// 操作结果：中序递归遍历T，对每个结点调用函数Visit一次且仅一次
	if(T!=NULL){
		PreOrderTraverse(T->Lchild,visit);
		Visit(T->data);
		PreOrderTraverse(T->Rchild,visit);
	}
	return OK;
}

/*后序*/
Status PostOrderTraverse(BiTree T,void(*Visit)(TElemType))
{ // 初始条件：二叉树T存在，Visit是对结点操作的应用函数
	// 操作结果：后序递归遍历T，对每个结点调用函数Visit一次且仅一次
	if(T!=NULL){
		PreOrderTraverse(T->Lchild,visit);
		PreOrderTraverse(T->Rchild,visit);
		Visit(T->data);
	}
	return OK;
}

/*目录状输出*/
Status PrintTree(BiTree bt,int Layer)  
{ //按竖向树状打印的二叉树
	if(bt!=NULL){
		PrintTree(bt->Lchild,Layer+1);
		for(int i=0;i<=Layer;i++)
			printf("-");
		printf("%c\n",bt->data);
		PrintTree(bt->Rchild,Layer+1);
	}
	return OK;
}

/*销毁*/
Status DestroyBiTree(BiTree &T)
{ // 初始条件：二叉树T存在。操作结果：销毁二叉树T
	if(T!=NULL){
		DestroyBiTree(T->Lchild);
		DestroyBiTree(T->Rchild);
		free(T);
	}
	return OK;
}
