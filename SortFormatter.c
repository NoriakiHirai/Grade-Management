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
#include"StudentScore.h"
#include"Error.h"

studentScore *ScoreSortFormatter(studentScore *studentScore, enum Subject subject)
{
	/* validation */
	// �K�{���ڃ`�F�b�N
	if (studentScore == NULL) {
		int errCode = XXX_NULL_PARAMETER;
		e_pt = &errCode;
		return;
	}

	while (studentScore != NULL)
	{
		studentScore->sortKey = studentScore->tokuten[subject];
	}
}
