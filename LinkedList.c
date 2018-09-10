/* -------------------------------------------------------------------------- */
/* File:LinkedList.c														  */
/* Overview:                                                                  */
/*	�P�������X�g���������邽�߂̊֐����`����B                                     */
/*                                                                            */
/*                                                Author : HAL Tokyo - Hirai  */
/*                                                Date   : 2018.09.10         */
/* -------------------------------------------------------------------------- */

/* -------------------------------------------------------------------------- */
/* �C���N���[�h�錾															  */
/* -------------------------------------------------------------------------- */
#include<stdio.h>
#include<stdlib.h>

#include"LinkedList.h"

/* -------------------------------------------------------------------------- */
/* appendElement															  */
/* -------------------------------------------------------------------------- */
studentGrade *appendElement(studentGrade *crt)
{
	studentGrade *rightEnd;
	rightEnd = getRightEnd(crt);
	// �n���ꂽ���X�g��NULL�ł���΁A�V�K�̃��X�g�̗v�f���쐬���ĕԋp����
	if (rightEnd == NULL) {
		return makeElement(NULL);
	}

	rightEnd->next = makeElement(rightEnd);
	return rightEnd;
}

/* -------------------------------------------------------------------------- */
/* makeElement																  */
/* -------------------------------------------------------------------------- */
studentGrade *makeElement(studentGrade *left)
{
	studentGrade *newElement;
	newElement = (studentGrade *)calloc(1, sizeof(studentGrade));
	newElement->previous = left;
	return newElement;
}

/* -------------------------------------------------------------------------- */
/* getRightEnd																  */
/* -------------------------------------------------------------------------- */
studentGrade *getRightEnd(const studentGrade *crt)
{
	/* validation */
	if (crt == NULL) return NULL;

	while (crt->next != NULL)
	{
		crt = crt->next;
	}
	return (studentGrade *)crt;
}

/* -------------------------------------------------------------------------- */
/* fetchList																  */
/* -------------------------------------------------------------------------- */
void fetchList(const studentGrade *crt)
{
	printf("--- List ---\n");		// ���o��
									// ���X�g�̍ŏ�����\�����邽�߂ɍ��[�̗v�f�̃A�h���X�����߂�
	//crt = getLeftEnd(crt);
	while (crt != NULL)
	{
		//printf("tokuten: %d\n", crt->tokuten);	// �v�f�̓��_��\��
		crt = crt->next;				// ���X�g�̌��݈ʒu��i�߂�
	}
	printf("\n");
}