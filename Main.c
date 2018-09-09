/* -------------------------------------------------------------------------- */
/* �C���ۑ�																	  */
/*                                                                            */
/*     ���ъǗ��v���O����													      */
/*		�R���\�[��������͂��ꂽ�_�������v�_�y�ъe���Ȃ��ƂɃ\�[�g���ďo�͂���B		  */
/*																              */
/*                                                File	 : Main.c             */
/*                                                Author : Hirai Noriaki	  */
/*                                                Date   : 2018.09.03         */
/* -------------------------------------------------------------------------- */

/* -------------------------------------------------------------------------- */
/* �C���N���[�h�錾															  */
/* -------------------------------------------------------------------------- */
#include<stdio.h>
#include<stdlib.h>

#include"StudentGrade.h"
#include"BubleSort.h"
#include"SortController.h"
#include"SortFormatter.h"
#include"Display.h"
#include"Error.h"

/* -------------------------------------------------------------------------- */
/* �v���g�^�C�v�錾															  */
/* -------------------------------------------------------------------------- */
/**
 * �I������
 *	�G���[�\���̂��m�F���A���b�Z�[�W���o�͂���
 */
void finalize(void);

/* -------------------------------------------------------------------------- */
/* ������																	  */
/* -------------------------------------------------------------------------- */
int main(void)
{
	displayTitle();
	displaySequenceEnd();

	// ���v���_�̍������Ƀ\�[�g
	SortController(BUBLESORT_BY_ASC, ALL);
	
	//// �e���Ȃ��Ƃ̓��_�̒Ⴂ���Ƀ\�[�g
	//SortController(BUBLESORT_BY_DESC, ENGLISH);
	//SortController(BUBLESORT_BY_DESC, MATH);
	//SortController(BUBLESORT_BY_DESC, LANGUAGE);
	//SortController(BUBLESORT_BY_DESC, SCIENCE);
	//SortController(BUBLESORT_BY_DESC, SOCIETY);

	// �I������
	finalize();

	rewind(stdin);
	getchar();
	exit(EXIT_SUCCESS);
}

void finalize()
{
	// �G���[�\���̂��m�F���A���b�Z�[�W���o�͂���

	return;
}
