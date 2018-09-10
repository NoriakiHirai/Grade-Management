//* -------------------------------------------------------------------------- */
/* File:Config.h															  */
/* Overview:                                                                  */
/*	各種設定情報を定義する。													  */
/*                                                                            */
/*                                                Author : HAL Tokyo - Hirai  */
/*                                                Date   : 2018.09.08         */
/* -------------------------------------------------------------------------- */

#ifndef CONFIG_H_
#define CONFIG_H_

/* -------------------------------------------------------------------------- */
/* グローバル変数宣言															  */
/* -------------------------------------------------------------------------- */
// インプットファイル名
static char STUDENT_MASTER[] = { "Student.csv" };

// 定数
static char END_OF_INPUT[5] = { "EOF" };

// アウトプットファイル名
static char BASE_FILE_NAME[15] = "GradeSummaryOf";
static char SORT_ADJ[3] = "By";
static char EXTENSION_CSV[5] = ".csv";

#endif // !CONFIG_H_