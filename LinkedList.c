/* -------------------------------------------------------------------------- */
/* File:LinkedList.c														  */
/* Overview:                                                                  */
/*	単方向リストを実現するための関数を定義する。                                     */
/*                                                                            */
/*                                                Author : HAL Tokyo - Hirai  */
/*                                                Date   : 2018.09.10         */
/* -------------------------------------------------------------------------- */

/* -------------------------------------------------------------------------- */
/* インクルード宣言															  */
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
	// 渡されたリストがNULLであれば、新規のリストの要素を作成して返却する
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
	printf("--- List ---\n");		// 見出し
									// リストの最初から表示するために左端の要素のアドレスを求める
	//crt = getLeftEnd(crt);
	while (crt != NULL)
	{
		//printf("tokuten: %d\n", crt->tokuten);	// 要素の得点を表示
		crt = crt->next;				// リストの現在位置を進める
	}
	printf("\n");
}