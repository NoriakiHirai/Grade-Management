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
#include"StudentGrade.h"
#include"Error.h"

/* -------------------------------------------------------------------------- */
/* 処理部																	  */
/* -------------------------------------------------------------------------- */
studentGrade *BubleSortByAsc(studentGrade *studentGrade)
{
	int dirty;
	/* validation */
	if (studentGrade->next == NULL)return studentGrade;	// リストが存在しないなら処理中断

	do
	{
		struct studentGrade_list *crt;
		dirty = 0;

		// 隣の得点と比較して、隣の得点の方が小さければ入れ替える。
		if (studentGrade->sortKey > studentGrade->next->sortKey) {
			struct studentGrade_list *tmp = studentGrade;
			studentGrade = studentGrade->next;
			studentGrade->previous = tmp->previous;
			tmp->next = studentGrade->next;
			tmp->previous = studentGrade;
			studentGrade->next = tmp;
			dirty = 1;
		}

		// リストの現在位置を一つ右にずらす
		crt = studentGrade;
		while (crt->next != NULL)
		{
			if (crt->next->next == NULL)break;	// 2つ右のリストが存在しないならループを抜ける
			if (crt->next->sortKey > crt->next->next->sortKey) {
				struct studentGrade_list* tmp = crt->next;
				crt->next = crt->next->next;
				crt->previous = crt->next->previous;
				tmp->next = crt->next->next;
				tmp->previous = crt;
				crt->next->next = tmp;
				//crt->next->previous = crt;
				dirty = 1;
			}
			crt = crt->next;
		}
	} while (dirty);
	return studentGrade;
}

studentGrade *BubleSortByDesc(studentGrade *studentGrade)
{
	int dirty;
	/* validation */
	if (studentGrade->next == NULL)return studentGrade;	// リストが存在しないなら処理中断

	do
	{
		struct studentGrade_list *crt;
		dirty = 0;

		// 隣の得点と比較して、隣の得点の方が小さければ入れ替える。
		if (studentGrade->sortKey < studentGrade->next->sortKey) {
			struct studentGrade_list *tmp = studentGrade;
			studentGrade = studentGrade->next;
			studentGrade->previous = tmp->previous;
			tmp->next = studentGrade->next;
			tmp->previous = studentGrade;
			studentGrade->next = tmp;
			dirty = 1;
		}

		// リストの現在位置を一つ右にずらす
		crt = studentGrade;
		while (crt->next != NULL)
		{
			if (crt->next->next == NULL)break;	// 2つ右のリストが存在しないならループを抜ける
			if (crt->next->sortKey < crt->next->next->sortKey) {
				struct studentGrade_list* tmp = crt->next;
				crt->next = crt->next->next;
				crt->previous = crt->next->previous;
				tmp->next = crt->next->next;
				tmp->previous = crt;
				crt->next->next = tmp;
				dirty = 1;
			}
			crt = crt->next;
		}
	} while (dirty);
	return studentGrade;
}