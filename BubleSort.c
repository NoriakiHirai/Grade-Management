/**
 * @file BubleSort.c
 * @brief バブルソート部品
 * @author ths80587-Hirai
 * @date 2018.09.05
 */

/* -------------------------------------------------------------------------- */
/* インクルード宣言															  */
/* -------------------------------------------------------------------------- */
#include<stdio.h>

#include"BubleSort.h"
#include"StudentScore.h"
#include"Error.h"

/* -------------------------------------------------------------------------- */
/* 処理部																	  */
/* -------------------------------------------------------------------------- */
/* */
studentScore *BubleSortByAsc(studentScore *studentScore)
{
	int dirty;
	/* validation */
	if (studentScore->next == NULL)return studentScore;	// リストが存在しないなら処理中断

	do
	{
		struct studentScore_list *crt;
		dirty = 0;

		// 隣の得点と比較して、隣の得点の方が小さければ入れ替える。
		if (studentScore->sortKey > studentScore->next->sortKey) {
			struct studentScore_list *tmp = studentScore;
			studentScore = studentScore->next;
			tmp->next = studentScore->next;
			studentScore->next = tmp;
			dirty = 1;
		}

		// リストの現在位置を一つ右にずらす
		crt = studentScore;
		while (crt->next != NULL)
		{
			if (crt->next->next == NULL)break;	// 2つ右のリストが存在しないならループを抜ける
			if (crt->next->sortKey > crt->next->next->sortKey) {
				struct studentScore_list* tmp = crt->next;
				crt->next = crt->next->next;
				tmp->next = crt->next->next;
				crt->next->next = tmp;
				dirty = 1;
			}
			crt = crt->next;
		}
	} while (dirty);
	return studentScore;
}

studentScore *BubleSortByAsc(studentScore *studentScore)
{
	int dirty;
	/* validation */
	if (studentScore->next == NULL)return studentScore;	// リストが存在しないなら処理中断

	do
	{
		struct studentScore_list *crt;
		dirty = 0;

		// 隣の得点と比較して、隣の得点の方が小さければ入れ替える。
		if (studentScore->sortKey < studentScore->next->sortKey) {
			struct studentScore_list *tmp = studentScore;
			studentScore = studentScore->next;
			tmp->next = studentScore->next;
			studentScore->next = tmp;
			dirty = 1;
		}

		// リストの現在位置を一つ右にずらす
		crt = studentScore;
		while (crt->next != NULL)
		{
			if (crt->next->next == NULL)break;	// 2つ右のリストが存在しないならループを抜ける
			if (crt->next->sortKey < crt->next->next->sortKey) {
				struct studentScore_list* tmp = crt->next;
				crt->next = crt->next->next;
				tmp->next = crt->next->next;
				crt->next->next = tmp;
				dirty = 1;
			}
			crt = crt->next;
		}
	} while (dirty);
	return studentScore;
}