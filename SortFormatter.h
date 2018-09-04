/**
* @file SortFormatter.h
* @brief ソートフォーマッタ部品のヘッダーファイル
* @author ths80587-Hirai
* @date 2018.09.04
*/
#ifndef _SORTFORMATTER_H_
#define _SORTFORMATTER_H_

/* -------------------------------------------------------------------------- */
/* インクルード宣言															  */
/* -------------------------------------------------------------------------- */
#include"StudentScore.h"

/* -------------------------------------------------------------------------- */
/* プロトタイプ宣言															  */
/* -------------------------------------------------------------------------- */
studentScore *ScoreSortFormatter(studentScore *studentScore, enum Subject sortKey);

#endif // _SORTFORMATTER_H_