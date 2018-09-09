/**
 * @file BubleSort.h
 * @brief バブルソート部品のヘッダーファイル
 * @author ths80587-Hirai
 * @date 2018.09.04
 */

#ifndef _BUBLESORT_H_
#define _BUBLESORT_H_

/* -------------------------------------------------------------------------- */
/* インクルード宣言															  */
/* -------------------------------------------------------------------------- */
#include"StudentGrade.h"
#include"SortController.h"

/* -------------------------------------------------------------------------- */
/* プロトタイプ宣言															  */
/* -------------------------------------------------------------------------- */
/**
 * 昇順バブルソート
 *
 * 引数：studentGrade...成績構造体
 */
studentGrade *BubleSortByAsc(studentGrade *studentGrade);

/**
 * 降順バブルソート
 *
 * 引数：studentGrade...成績構造体
 */
studentGrade *BubleSortByDesc(studentGrade *studentGrade);

#endif // _BUBLESORT_H_