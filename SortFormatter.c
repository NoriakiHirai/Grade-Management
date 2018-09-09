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
#include"StudentGrade.h"
#include"Error.h"

GradeSortFormatter(studentGrade *studentsGrade, enum Subject sortKey)
{
	/* validation */
	// 必須項目チェック
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
