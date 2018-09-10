/**
 * @file StudentGrade.h
 * @brief 生徒の成績情報構造体を定義したヘッダーファイル
 *			成績情報構造体を使用する場合は、当ファイルをインクルードする
 * @author ths80587-Hirai
 * @date 2018.09.04
 */
#ifndef _STUDENTGRADE_H_
#define _STUDENTGRADE_H_

 /* -------------------------------------------------------------------------- */
 /* 列挙型宣言	   															   */
 /* -------------------------------------------------------------------------- */
enum Subject {
	ENGLISH, LANGUAGE, MATH, SCIENCE, SOCIETY, ALL, MAX_LENGTH
};

/* -------------------------------------------------------------------------- */
/* グローバル変数宣言	   														  */
/* -------------------------------------------------------------------------- */
static char *SUBJECT[] = { "English",
						"Language",
						"Math",
						"Science",
						"Society",
						"Total"
};

static char *SORT_PATTERN[] = { "ASC",
								"DESC"
};

/* -------------------------------------------------------------------------- */
/* 構造体宣言															  */
/* -------------------------------------------------------------------------- */
typedef struct studentGrade_list {
	char id[5];
	char name[20];
	int tokuten[MAX_LENGTH];
	int total;
	int sortKey;
	struct studentGrade_list *previous, *next;
} studentGrade;

#endif // _STUDENTGRADE_H_