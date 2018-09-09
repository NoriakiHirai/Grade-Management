/**
 * @file SortFormatter.c
 * @brief �\���̂̔C�ӂ̍��ڂ��r�ΏۂƂ��Đݒ肷��
 * @author ths80587-Hirai
 * @date 2018.09.04
 */

/* -------------------------------------------------------------------------- */
/* �C���N���[�h�錾															  */
/* -------------------------------------------------------------------------- */
#include<stdio.h>

#include"SortFormatter.h"
#include"StudentGrade.h"
#include"Error.h"

GradeSortFormatter(studentGrade *studentsGrade, enum Subject sortKey)
{
	/* validation */
	// �K�{���ڃ`�F�b�N
	if (studentsGrade == NULL) {
		int errCode = XXX_NULL_PARAMETER;
		e_pt->errorCode = errCode;
	}

	while (studentsGrade != NULL)
	{
		studentsGrade->sortKey = studentsGrade->tokuten[sortKey];
		studentsGrade = studentsGrade->next;
	}
}
