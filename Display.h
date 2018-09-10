//* -------------------------------------------------------------------------- */
/* File:Display.h															  */
/* Overview:                                                                  */
/*	画面表示に関する関数宣言を定義する。                                            */
/*                                                                            */
/*                                                Author : HAL Tokyo - Hirai  */
/*                                                Date   : 2018.09.08         */
/* -------------------------------------------------------------------------- */

#ifndef DISPLAY_H_
#define DISPLAY_H_

/* -------------------------------------------------------------------------- */
/* インクルード宣言															  */
/* -------------------------------------------------------------------------- */
#include"StudentGrade.h"

/* -------------------------------------------------------------------------- */
/* プロトタイプ宣言															  */
/* -------------------------------------------------------------------------- */
/* 画面表示汎用部品 */
void displayTitle();
void displaySeparatorLine();
void displaySequenceEnd();
void displayNewLine();
void displayEndMsg();

/* 成績情報入力画面表示 */
void displayInputStart();
void displayInputEnd();

/* ソート結果表示 */
void displayResultTitle();
void displaySubject(char *adjSubject);
void displaySortPattern(char *sortPattern);
void displaySortResult(studentGrade *studentsGrade);
void displaySortResultEnd();

#endif // !DISPLAY_H_