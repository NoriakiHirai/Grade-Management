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
#include"StudentScore.h"
#include"SortController.h"

/* -------------------------------------------------------------------------- */
/* プロトタイプ宣言															  */
/* -------------------------------------------------------------------------- */
/**
 * 昇順バブルソート
 *
 * 引数：studentScore...成績構造体
 */
studentScore *BubleSortByAsc(studentScore *studentScore);

/**
 * 降順バブルソート
 *
 * 引数：studentScore...成績構造体
 */
studentScore *BubleSortByDesc(studentScore *studentScore);

#endif // _BUBLESORT_H_