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
  /*变量定义*/
  BiTree T;//新建根结点

  /*二叉树创建*/
  printf("<=========================[二叉树的创建]=========================>\n");
  printf("[?]例：AB00C00表示A为根结点、B为左孩子、C为右孩子的二叉树，0代表空格\n");
  printf("[@]请按先序输入二叉树：");
  CreateBiTree(T); // 建立二叉树T
  printf("\n");

  /*二叉树深度遍历*/
  printf("<=======================[二叉树的深度遍历]=======================>\n");
  printf("|先序遍历为：");
  PreOrderTraverse(T,visit);
  printf("\n|中序遍历为：");
  InOrderTraverse(T,visit);
  printf("\n|后序遍历为：");
  PostOrderTraverse(T,visit);
  printf("\n\n");

  /*二叉树目录输出*/
  printf("<=======================[二叉树的目录输出]=======================>\n");
  printf("按目录形式输出二叉树：\n");
  PrintTree(T,0);
  printf("\n");

  /*二叉树销毁*/
  if(!DestroyBiTree(T))
    printf("[!]二叉树T销毁失败!");
  else
    printf("[!]二叉树T销毁成功!");
  return 0;
}