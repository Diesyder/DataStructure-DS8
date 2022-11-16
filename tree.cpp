/*
�X�T�T�T�[���X�[���X�T�T�T�[�X�T�T�T�[�X�T�T�T�[�X�T�T�T�[�X�T�T�T�[���X�[�����X�[
�U�X�T�[�U�X�a�U���U�X�T�[�U�U�X�T�[�U�U�X�T�[�U�U�X�T�[�U�U�X�T�[�U�X�a�U���X�a�U
�^�a�X�a�U�^�[�U���^�a�X�a�U�U�U�U�U�U�U�^�T�a�U�U�U�U�U�U�^�a�X�a�U�^�[�U���^�[�U
�X�T�a�X�a���U�U���X�T�a�X�a�U�U�U�U�U�^�T�T�[�U�U�U�U�U�U�X�[�^�[�U���U�U�����U�U
�U�U�^�T�[�X�a�^�[�U�U�^�T�[�U�^�T�a�U�X�T�T�a�U�U�^�T�a�U�U�^�T�a�U�X�a�^�[�X�a�^�[
�^�T�T�T�a�^�T�T�a�^�T�T�T�a�^�T�T�T�a�^�T�T�T�a�^�T�T�T�a�^�T�T�T�a�^�T�T�a�^�T�T�a
��1����γ�
*/
#include "BiTree.h"

int main()
{
  /*��������*/
  BiTree T;//�½������

  /*����������*/
  printf("<=========================[�������Ĵ���]=========================>\n");
  printf("[?]����AB00C00��ʾAΪ����㡢BΪ���ӡ�CΪ�Һ��ӵĶ�������0����ո�\n");
  printf("[@]�밴���������������");
  CreateBiTree(T); // ����������T
  printf("\n");

  /*��������ȱ���*/
  printf("<=======================[����������ȱ���]=======================>\n");
  printf("|�������Ϊ��");
  PreOrderTraverse(T,visit);
  printf("\n|�������Ϊ��");
  InOrderTraverse(T,visit);
  printf("\n|�������Ϊ��");
  PostOrderTraverse(T,visit);
  printf("\n\n");

  /*������Ŀ¼���*/
  printf("<=======================[��������Ŀ¼���]=======================>\n");
  printf("��Ŀ¼��ʽ�����������\n");
  PrintTree(T,0);
  printf("\n");

  /*����������*/
  if(!DestroyBiTree(T))
    printf("[!]������T����ʧ��!");
  else
    printf("[!]������T���ٳɹ�!");
  return 0;
}