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
#include"StudentScore.h"
#include"Error.h"

/* -------------------------------------------------------------------------- */
/* ������																	  */
/* -------------------------------------------------------------------------- */
/* */
studentScore *BubleSortByAsc(studentScore *studentScore)
{
	int dirty;
	/* validation */
	if (studentScore->next == NULL)return studentScore;	// ���X�g�����݂��Ȃ��Ȃ珈�����f

	do
	{
		struct studentScore_list *crt;
		dirty = 0;

		// �ׂ̓��_�Ɣ�r���āA�ׂ̓��_�̕�����������Γ���ւ���B
		if (studentScore->sortKey > studentScore->next->sortKey) {
			struct studentScore_list *tmp = studentScore;
			studentScore = studentScore->next;
			tmp->next = studentScore->next;
			studentScore->next = tmp;
			dirty = 1;
		}

		// ���X�g�̌��݈ʒu����E�ɂ��炷
		crt = studentScore;
		while (crt->next != NULL)
		{
			if (crt->next->next == NULL)break;	// 2�E�̃��X�g�����݂��Ȃ��Ȃ烋�[�v�𔲂���
			if (crt->next->sortKey > crt->next->next->sortKey) {
				struct studentScore_list* tmp = crt->next;
				crt->next = crt->next->next;
				tmp->next = crt->next->next;
				crt->next->next = tmp;
				dirty = 1;
			}
			crt = crt->next;
		}
	} while (dirty);
	return studentScore;
}

studentScore *BubleSortByAsc(studentScore *studentScore)
{
	int dirty;
	/* validation */
	if (studentScore->next == NULL)return studentScore;	// ���X�g�����݂��Ȃ��Ȃ珈�����f

	do
	{
		struct studentScore_list *crt;
		dirty = 0;

		// �ׂ̓��_�Ɣ�r���āA�ׂ̓��_�̕�����������Γ���ւ���B
		if (studentScore->sortKey < studentScore->next->sortKey) {
			struct studentScore_list *tmp = studentScore;
			studentScore = studentScore->next;
			tmp->next = studentScore->next;
			studentScore->next = tmp;
			dirty = 1;
		}

		// ���X�g�̌��݈ʒu����E�ɂ��炷
		crt = studentScore;
		while (crt->next != NULL)
		{
			if (crt->next->next == NULL)break;	// 2�E�̃��X�g�����݂��Ȃ��Ȃ烋�[�v�𔲂���
			if (crt->next->sortKey < crt->next->next->sortKey) {
				struct studentScore_list* tmp = crt->next;
				crt->next = crt->next->next;
				tmp->next = crt->next->next;
				crt->next->next = tmp;
				dirty = 1;
			}
			crt = crt->next;
		}
	} while (dirty);
	return studentScore;
}