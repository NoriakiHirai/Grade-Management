/**
 * @file BubleSort.c
 * @brief �o�u���\�[�g���i
 * @author ths80587-Hirai
 * @date 2018.09.05
 */

/* -------------------------------------------------------------------------- */
/* �C���N���[�h�錾															  */
/* -------------------------------------------------------------------------- */
#include<stdio.h>

#include"BubleSort.h"
#include"StudentGrade.h"
#include"Error.h"

/* -------------------------------------------------------------------------- */
/* ������																	  */
/* -------------------------------------------------------------------------- */
studentGrade *BubleSortByAsc(studentGrade *studentGrade)
{
	int dirty;
	/* validation */
	if (studentGrade->next == NULL)return studentGrade;	// ���X�g�����݂��Ȃ��Ȃ珈�����f

	do
	{
		struct studentGrade_list *crt;
		dirty = 0;

		// �ׂ̓��_�Ɣ�r���āA�ׂ̓��_�̕�����������Γ���ւ���B
		if (studentGrade->sortKey > studentGrade->next->sortKey) {
			struct studentGrade_list *tmp = studentGrade;
			studentGrade = studentGrade->next;
			studentGrade->previous = tmp->previous;
			tmp->next = studentGrade->next;
			tmp->previous = studentGrade;
			studentGrade->next = tmp;
			dirty = 1;
		}

		// ���X�g�̌��݈ʒu����E�ɂ��炷
		crt = studentGrade;
		while (crt->next != NULL)
		{
			if (crt->next->next == NULL)break;	// 2�E�̃��X�g�����݂��Ȃ��Ȃ烋�[�v�𔲂���
			if (crt->next->sortKey > crt->next->next->sortKey) {
				struct studentGrade_list* tmp = crt->next;
				crt->next = crt->next->next;
				crt->previous = crt->next->previous;
				tmp->next = crt->next->next;
				tmp->previous = crt;
				crt->next->next = tmp;
				//crt->next->previous = crt;
				dirty = 1;
			}
			crt = crt->next;
		}
	} while (dirty);
	return studentGrade;
}

studentGrade *BubleSortByDesc(studentGrade *studentGrade)
{
	int dirty;
	/* validation */
	if (studentGrade->next == NULL)return studentGrade;	// ���X�g�����݂��Ȃ��Ȃ珈�����f

	do
	{
		struct studentGrade_list *crt;
		dirty = 0;

		// �ׂ̓��_�Ɣ�r���āA�ׂ̓��_�̕�����������Γ���ւ���B
		if (studentGrade->sortKey < studentGrade->next->sortKey) {
			struct studentGrade_list *tmp = studentGrade;
			studentGrade = studentGrade->next;
			studentGrade->previous = tmp->previous;
			tmp->next = studentGrade->next;
			tmp->previous = studentGrade;
			studentGrade->next = tmp;
			dirty = 1;
		}

		// ���X�g�̌��݈ʒu����E�ɂ��炷
		crt = studentGrade;
		while (crt->next != NULL)
		{
			if (crt->next->next == NULL)break;	// 2�E�̃��X�g�����݂��Ȃ��Ȃ烋�[�v�𔲂���
			if (crt->next->sortKey < crt->next->next->sortKey) {
				struct studentGrade_list* tmp = crt->next;
				crt->next = crt->next->next;
				crt->previous = crt->next->previous;
				tmp->next = crt->next->next;
				tmp->previous = crt;
				crt->next->next = tmp;
				dirty = 1;
			}
			crt = crt->next;
		}
	} while (dirty);
	return studentGrade;
}