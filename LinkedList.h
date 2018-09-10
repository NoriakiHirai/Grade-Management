//* -------------------------------------------------------------------------- */
/* File:LinkedList.h														  */
/* Overview:                                                                  */
/*	�P�������X�g���������邽�߂̊֐��錾���`����B                                  */
/*                                                                            */
/*                                                Author : HAL Tokyo - Hirai  */
/*                                                Date   : 2018.09.10         */
/* -------------------------------------------------------------------------- */

#ifndef LINKEDlIST_H_
#define LINKEDlIST_H_

/* -------------------------------------------------------------------------- */
/* �C���N���[�h�錾															  */
/* -------------------------------------------------------------------------- */
#include"StudentGrade.h"

/* -------------------------------------------------------------------------- */
/* �v���g�^�C�v�錾															  */
/* -------------------------------------------------------------------------- */
studentGrade *getRightEnd(const studentGrade *crt);		// �E�[(�Ō�)�̗v�f�̃A�h���X��Ԃ�

void fetchList(const studentGrade *crt);				// ���X�g�̑S���e��\��
int countListElement(const studentGrade *crt);			// ���X�g���̗v�f����Ԃ�

void removeRightElement(studentGrade *crt);				// �E�̗v�f���폜����

studentGrade *makeElement(studentGrade *left);		// �v�f��ǉ�
studentGrade *appendElement(studentGrade *crt);		// �E�[�ɗv�f�ǉ�

#endif // !LINKEDlIST_H_