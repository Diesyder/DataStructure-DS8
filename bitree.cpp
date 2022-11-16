#define _CRT_SECURE_NO_WARNINGS 1
#include "BiTree.h"

// ��������Ļ������� 

/*����������*/
Status CreateBiTree(BiTree &T)
{ // ����ȫ������������������н���ֵ
	TElemType Number=0;
	scanf("%c",&Number);
	if(Number=='0')
		T=NULL;//����
	else{
		if(!(T=(BiTNode*)malloc(sizeof(BiTNode)))) exit(OVERFLOW);
		T->data=Number; // ���ɸ����
		CreateBiTree(T->Lchild); // �ݹ齨(����)������
		CreateBiTree(T->Rchild); // �ݹ齨(����)������
	}
	return OK;
}

/*����õĺ���*/
void visit(TElemType e)
{ 
	printf("[%c]",e);
}

/*����*/
Status PreOrderTraverse(BiTree T,void(*Visit)(TElemType))
{ // ��ʼ������������T���ڣ�Visit�ǶԽ�������Ӧ�ú�����
	// �������������ݹ����T����ÿ�������ú���Visitһ���ҽ�һ��
	if(T!=NULL){
		Visit(T->data);
		PreOrderTraverse(T->Lchild,visit);
		PreOrderTraverse(T->Rchild,visit);
	}
	return OK;
}

/*����*/
Status InOrderTraverse(BiTree T,void(*Visit)(TElemType))
{ // ��ʼ������������T���ڣ�Visit�ǶԽ�������Ӧ�ú���
	// �������������ݹ����T����ÿ�������ú���Visitһ���ҽ�һ��
	if(T!=NULL){
		PreOrderTraverse(T->Lchild,visit);
		Visit(T->data);
		PreOrderTraverse(T->Rchild,visit);
	}
	return OK;
}

/*����*/
Status PostOrderTraverse(BiTree T,void(*Visit)(TElemType))
{ // ��ʼ������������T���ڣ�Visit�ǶԽ�������Ӧ�ú���
	// �������������ݹ����T����ÿ�������ú���Visitһ���ҽ�һ��
	if(T!=NULL){
		PreOrderTraverse(T->Lchild,visit);
		PreOrderTraverse(T->Rchild,visit);
		Visit(T->data);
	}
	return OK;
}

/*Ŀ¼״���*/
Status PrintTree(BiTree bt,int Layer)  
{ //��������״��ӡ�Ķ�����
	if(bt!=NULL){
		PrintTree(bt->Lchild,Layer+1);
		for(int i=0;i<=Layer;i++)
			printf("-");
		printf("%c\n",bt->data);
		PrintTree(bt->Rchild,Layer+1);
	}
	return OK;
}

/*����*/
Status DestroyBiTree(BiTree &T)
{ // ��ʼ������������T���ڡ�������������ٶ�����T
	if(T!=NULL){
		DestroyBiTree(T->Lchild);
		DestroyBiTree(T->Rchild);
		free(T);
	}
	return OK;
}
