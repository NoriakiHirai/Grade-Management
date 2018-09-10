//* -------------------------------------------------------------------------- */
/* File:LinkedList.h														  */
/* Overview:                                                                  */
/*	単方向リストを実現するための関数宣言を定義する。                                  */
/*                                                                            */
/*                                                Author : HAL Tokyo - Hirai  */
/*                                                Date   : 2018.09.10         */
/* -------------------------------------------------------------------------- */

#ifndef LINKEDlIST_H_
#define LINKEDlIST_H_

/* -------------------------------------------------------------------------- */
/* インクルード宣言															  */
/* -------------------------------------------------------------------------- */
#include"StudentGrade.h"

/* -------------------------------------------------------------------------- */
/* プロトタイプ宣言															  */
/* -------------------------------------------------------------------------- */
studentGrade *getRightEnd(const studentGrade *crt);		// 右端(最後)の要素のアドレスを返す

void fetchList(const studentGrade *crt);				// リストの全内容を表示
int countListElement(const studentGrade *crt);			// リスト内の要素数を返す

void removeRightElement(studentGrade *crt);				// 右の要素を削除する

studentGrade *makeElement(studentGrade *left);		// 要素を追加
studentGrade *appendElement(studentGrade *crt);		// 右端に要素追加

#endif // !LINKEDlIST_H_