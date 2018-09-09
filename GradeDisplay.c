/* -------------------------------------------------------------------------- */
/* File:GradeDisplay.c														  */
/* Overview:                                                                  */
/*	成績の画面表示関数を定義する。		                                          */
/*                                                                            */
/*                                                Author : HAL Tokyo - Hirai  */
/*                                                Date   : 2018.09.09         */
/* -------------------------------------------------------------------------- */

/* -------------------------------------------------------------------------- */
/* インクルード宣言															  */
/* -------------------------------------------------------------------------- */
#include<stdio.h>

#include"GradeDisplay.h"
#include"Display.h"
#include"Error.h"

/* -------------------------------------------------------------------------- */
/* displayGrade  															  */
/* -------------------------------------------------------------------------- */
void displayGrade(studentGrade *studentsGrade, char *subject, char *sortPattern)
{
	int errCode;
	studentGrade cache = *studentsGrade;
		
	/* validation */
	if (studentsGrade == NULL || subject == NULL || sortPattern == NULL) {
		errCode = XXX_NULL_PARAMETER;
		e_pt->errorCode = errCode;
		e_pt->errorMesage[0] = "Parameter is NULL.";
		return;
	}

	// 画面表示
	displayResultTitle();
	displaySubject(subject);
	displaySortPattern(sortPattern);
	displayNewLine();
	displaySortResult(&cache);
	displaySortResultEnd();
	displaySequenceEnd();
}