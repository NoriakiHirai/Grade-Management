/**
 * @file StudentScore.h
 * @brief 生徒の得点情報構造体を定義したヘッダーファイル
 *			得点情報構造体を使用する場合は、当ファイルをインクルードする
 * @author ths80587-Hirai
 * @date 2018.09.04
 */
#ifndef _STUDENTSCORE_H_
#define _STUDENTSCORE_H_

 /* -------------------------------------------------------------------------- */
 /* 列挙型宣言															  */
 /* -------------------------------------------------------------------------- */
enum Subject {
	ENGLISH, LANGUAGE, MATH, SCIENCE, SOCIETY, TOTAL
};

/* -------------------------------------------------------------------------- */
/* 構造体宣言															  */
/* -------------------------------------------------------------------------- */
typedef struct studentScore_list {
	int id;
	char name[20];
	int english, language, math, science, society, totalScore;
	int sortKey;
	struct score *next;
} studentScore;

#endif // _STUDENTSCORE_H_