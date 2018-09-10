/* -------------------------------------------------------------------------- */
/* 修了課題																	  */
/*                                                                            */
/*     成績管理プログラム													      */
/*		コンソールから入力された点数を合計点及び各教科ごとにソートして出力する。		  */
/*																              */
/*                                                File	 : Main.c             */
/*                                                Author : Hirai Noriaki	  */
/*                                                Date   : 2018.09.03         */
/* -------------------------------------------------------------------------- */

/* -------------------------------------------------------------------------- */
/* インクルード宣言															  */
/* -------------------------------------------------------------------------- */
#include<stdio.h>
#include<stdlib.h>

#include"StudentGrade.h"
#include"GradeReader.h"
#include"BubleSort.h"
#include"SortController.h"
#include"SortFormatter.h"
#include"Display.h"
#include"Error.h"

/* -------------------------------------------------------------------------- */
/* プロトタイプ宣言															  */
/* -------------------------------------------------------------------------- */
/**
 * 終了処理
 *	エラー構造体を確認し、メッセージを出力する
 */
void finalize(void);

/* -------------------------------------------------------------------------- */
/* 処理部																	  */
/* -------------------------------------------------------------------------- */
int main(void)
{
	displayTitle();
	displaySequenceEnd();

	studentGrade *studentsGrade;

	// 学籍番号と5教科分の得点を入力する
	studentsGrade = readGrade();

	// 合計得点の高い順にソート
	SortController(studentsGrade, BUBLESORT_BY_ASC, ALL);
	
	//// 各教科ごとの得点の低い順にソート
	SortController(studentsGrade, BUBLESORT_BY_DESC, ENGLISH);
	//SortController(studentsGrade, BUBLESORT_BY_DESC, MATH);
	//SortController(studentsGrade, BUBLESORT_BY_DESC, LANGUAGE);
	//SortController(studentsGrade, BUBLESORT_BY_DESC, SCIENCE);
	//SortController(studentsGrade, BUBLESORT_BY_DESC, SOCIETY);

	// 終了処理
	finalize();

	rewind(stdin);
	getchar();
	exit(EXIT_SUCCESS);
}

void finalize()
{
	// エラー構造体を確認し、メッセージを出力する

	// 終了メッセージ表示
	displayEndMsg();

	return;
}
