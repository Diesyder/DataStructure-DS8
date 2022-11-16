/*
╔═══╗─╔╗─╔═══╗╔═══╗╔═══╗╔═══╗╔═══╗─╔╗──╔╗
║╔═╗║╔╝║─║╔═╗║║╔═╗║║╔═╗║║╔═╗║║╔═╗║╔╝║─╔╝║
╚╝╔╝║╚╗║─╚╝╔╝║║║║║║║╚═╝║║║║║║╚╝╔╝║╚╗║─╚╗║
╔═╝╔╝─║║─╔═╝╔╝║║║║║╚══╗║║║║║║╔╗╚╗║─║║──║║
║║╚═╗╔╝╚╗║║╚═╗║╚═╝║╔══╝║║╚═╝║║╚═╝║╔╝╚╗╔╝╚╗
╚═══╝╚══╝╚═══╝╚═══╝╚═══╝╚═══╝╚═══╝╚══╝╚══╝
软工1班李嘉程
*/
#include "BiTree.h"

int main()
{
  /**/
  BiTree T;//新建根结点
  printf("<=========================[二叉树的部分基础操作]=========================>\n");
  printf("请按先序输入二叉树(如：AB00C00表示A为根结点、B为左孩子、C为右孩子的二叉树，其中0代表空格)：\n");
  CreateBiTree(T); // 建立二叉树T
  printf("\n");

  printf("先序遍历为：");
  PreOrderTraverse(T,visit);
  printf("\n中序遍历为：");
  InOrderTraverse(T,visit);
  printf("\n后序遍历为：");
  PostOrderTraverse(T,visit);
  printf("\n\n");

  printf("按目录形式输出二叉树：\n");
  PrintTree(T,0);
  printf("\n");

  if(!DestroyBiTree(T))// 销毁二叉树T
    printf("销毁失败!");
  else
    printf("销毁成功!");
  return 0;
}