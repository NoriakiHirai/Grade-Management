/**
 * @file SortFormatter.c
 * @brief 構造体の任意の項目を比較対象として設定する
 * @author ths80587-Hirai
 * @date 2018.09.04
 */

/* -------------------------------------------------------------------------- */
/* インクルード宣言															  */
/* -------------------------------------------------------------------------- */
#include<stdio.h>

#include"SortFormatter.h"
#include"StudentScore.h"
#include"Error.h"

studentScore *ScoreSortFormatter(studentScore *studentScore, enum Subject subject)
{
	/* validation */
	// 必須項目チェック
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
