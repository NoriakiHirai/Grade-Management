/**
 * @file SortController.c
 * @brief 渡された引数により動的にソートロジックを選択し、実行する
 * @author ths80587-Hirai
 * @date 2018.09.04
 */

/* -------------------------------------------------------------------------- */
/* インクルード宣言															  */
/* -------------------------------------------------------------------------- */
#include<stdio.h>
#include<string.h>

#include"SortController.h"
#include"SortFormatter.h"
#include"GradeReader.h"
#include"GradeWriter.h"
#include"BubleSort.h"
#include"StudentGrade.h"
#include"GradeDisplay.h"
#include"Error.h"

/* -------------------------------------------------------------------------- */
/* プロトタイプ宣言															  */
/* -------------------------------------------------------------------------- */


/* -------------------------------------------------------------------------- */
/* SortController															  */
/* -------------------------------------------------------------------------- */
void SortController(studentGrade *studentsGrade, enum SortLogic sortLogic, enum Subject sortKey)
{
	int errCode;
	char subject[10];
	char sortPattern[5];
	
	// ソートキーおよび画面出力文字列を設定する
	switch (sortKey)
	{
	case ENGLISH:
		GradeSortFormatter(studentsGrade, ENGLISH);
		strcpy(subject, SUBJECT[ENGLISH]);
		break;
	case LANGUAGE:
		GradeSortFormatter(studentsGrade, LANGUAGE);
		strcpy(subject, SUBJECT[LANGUAGE]);
		break;
	case MATH:
		GradeSortFormatter(studentsGrade, MATH);
		strcpy(subject, SUBJECT[MATH]);
		break;
	case SCIENCE:
		GradeSortFormatter(studentsGrade, SCIENCE);
		strcpy(subject, SUBJECT[SCIENCE]);
		break;
	case SOCIETY:
		GradeSortFormatter(studentsGrade, SOCIETY);
		strcpy(subject, SUBJECT[SOCIETY]);
		break;
	case ALL:
		GradeSortFormatter(studentsGrade, ALL);
		strcpy(subject, SUBJECT[ALL]);
		break;
	default:
		errCode = XXX_INVALID_PARAMETER;
		e_pt->errorCode = errCode;
		e_pt->errorMesage[0] = "Selected sortKey is invalid.";
		return;
	}

	// ソート実行
	switch (sortLogic)
	{
	case BUBLESORT_BY_ASC:
		studentsGrade = BubleSortByAsc(studentsGrade);
		strcpy(sortPattern, SORT_PATTERN[0]);
		break;
	case BUBLESORT_BY_DESC:
		studentsGrade = BubleSortByDesc(studentsGrade);
		strcpy(sortPattern, SORT_PATTERN[1]);
		break;
	default:
		errCode = XXX_INVALID_PARAMETER;
		e_pt->errorCode = errCode;
		e_pt->errorMesage[0] = "Selected sortLogic is invalid.";
		return;
	}

	// ソート結果をCSV形式で出力
	writeGradeInCSVFormat(studentsGrade, subject, sortPattern);
	
	// ソート結果を画面に表示
	displayGrade(studentsGrade, subject, sortPattern);
}
