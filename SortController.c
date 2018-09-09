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

#include"SortController.h"
#include"SortFormatter.h"
#include"BubleSort.h"
#include"StudentScore.h"
#include"Error.h"

/* -------------------------------------------------------------------------- */
/* プロトタイプ宣言															  */
/* -------------------------------------------------------------------------- */
/**
 * 成績情報読み込み
 *
 * 引数:studentScore...成績情報構造体
 */
studentScore *readGrade(studentScore *studentScore);

/**
 * 成績情報書き出し(CSV形式)
 *
 * 引数:studentScore...成績情報構造体
 */
studentScore *writeGradeInCSV(studentScore *studentScore);

/**
 * 成績情報表示
 *
 * 引数：studentScore...成績情報構造体
 */
void displayScore(studentScore *studentScore, enum Subject subject);

/* -------------------------------------------------------------------------- */
/* 処理部																	  */
/* -------------------------------------------------------------------------- */
/* SortController */
void SortController(enum SortLogic sortLogic, enum Subject sortKey)
{
	int errCode;
	
	// 学籍番号と5教科分の得点を入力する
	studentGrade = readGrade();

	//// ソートキーを設定する
	//switch (sortKey)
	//{
	//case ENGLISH:
	//	studentScore = ScoreSortFormatter(studentScore, ENGLISH);
	//	break;
	//case LANGUAGE:
	//	studentScore = ScoreSortFormatter(studentScore, LANGUAGE);
	//	break;
	//case MATH:
	//	studentScore = ScoreSortFormatter(studentScore, MATH);
	//	break;
	//case SCIENCE:
	//	studentScore = ScoreSortFormatter(studentScore, SCIENCE);
	//	break;
	//case SOCIETY:
	//	studentScore = ScoreSortFormatter(studentScore, SOCIETY);
	//	break;
	//case ALL:
	//	studentScore = ScoreSortFormatter(studentScore, ALL);
	//	break;
	//default:
	//	errCode = XXX_INVALID_PARAMETER;
	//	e_pt->errorCode = errCode;
	//	e_pt->errorMesage[0] = "Selected sortKey is invalid.";
	//	return;
	//}

	//// ソート実行
	//switch (sortLogic)
	//{
	//case BUBLESORT_BY_ASC:
	//	studentScore = BubleSortByAsc(studentScore);
	//	break;
	//case BUBLESORT_BY_DESC:
	//	studentScore = BubleSortByDesc(studentScore);
	//	break;
	//default:
	//	errCode = XXX_INVALID_PARAMETER;
	//	e_pt->errorCode = errCode;
	//	e_pt->errorMesage[0] = "Selected sortLogic is invalid.";
	//	return;
	//}

	// ソート結果を画面に表示
	//displayScore(studentScore, ALL);

	// ソート結果をCSV形式で表示

	// ソート結果をCSV形式でファイルに出力（コントローラ

}
