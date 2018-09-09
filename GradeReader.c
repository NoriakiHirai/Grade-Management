/* -------------------------------------------------------------------------- */
/* File:GradeReader.c														  */
/* Overview:                                                                  */
/*	成績情報を読み込む関数を定義する。	                                              */
/*                                                                            */
/*                                                Author : HAL Tokyo - Hirai  */
/*                                                Date   : 2018.09.08         */
/* -------------------------------------------------------------------------- */

/* -------------------------------------------------------------------------- */
/* インクルード宣言															  */
/* -------------------------------------------------------------------------- */
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

#include"StudentGrade.h"
#include"GradeReader.h"
#include"Display.h"
#include"Config.h"

/* -------------------------------------------------------------------------- */
/* GradeReader定義															  */
/* -------------------------------------------------------------------------- */
studentGrade *readGrade()
{
	FILE *gf_pt;
	studentGrade studentsGrade[40], *g_pt;
	int i = 0;

	// 出力先ファイルオープン
	if ((gf_pt = fopen(GREDE_SUMMARY, "w+")) == NULL)
	{
		printf("FILE OPEN ERROR\n");
		exit(EXIT_FAILURE);
	}
	
	// 成績情報入力スタート画面表示
	displayInputStart();

	// 成績情報入力内容取得
	// EOFが入力されるまで入力を繰り返す。
	g_pt = studentsGrade;
	while (1)
	{
		printf("学籍番号:");
		scanf("%s", g_pt->id);
		if (!(strcmp(g_pt->id, END_OF_INPUT))) break;
		
		printf("各教科の得点:");
		scanf("%d %d %d %d %d",
			&(g_pt->tokuten[ENGLISH]),
			&(g_pt->tokuten[LANGUAGE]),
			&(g_pt->tokuten[MATH]),
			&(g_pt->tokuten[SCIENCE]),
			&(g_pt->tokuten[SOCIETY]));
		
		fprintf(gf_pt, "%-5s %3d %3d %3d %3d %3d",
			g_pt->id,
			g_pt->tokuten[ENGLISH],
			g_pt->tokuten[LANGUAGE],
			g_pt->tokuten[MATH],
			g_pt->tokuten[SCIENCE],
			g_pt->tokuten[SOCIETY]);
		
		// 成績情報入力区切り行表示
		displaySeparatorLine();
	}
	
	// データを構造体に格納
	fseek(gf_pt, 0L, SEEK_SET);
	rewind(gf_pt);
	for (i = 0; fscanf(gf_pt, "%5s %3d %3d %3d %3d %3d",
		studentsGrade[i].id,
		&(studentsGrade[i].tokuten[ENGLISH]),
		&(studentsGrade[i].tokuten[LANGUAGE]),
		&(studentsGrade[i].tokuten[MATH]),
		&(studentsGrade[i].tokuten[SCIENCE]),
		&(studentsGrade[i].tokuten[SOCIETY])) != EOF; i++) {
		// 合計点を算出し、構造体に格納
		studentsGrade[i].tokuten[ALL] = 
			studentsGrade[i].tokuten[ENGLISH]
			+ studentsGrade[i].tokuten[LANGUAGE]
			+ studentsGrade[i].tokuten[MATH]
			+ studentsGrade[i].tokuten[SCIENCE]
			+ studentsGrade[i].tokuten[SOCIETY];

		// 構造体配列をリスト形式に変換
		if (i == 0) {
				
				studentsGrade[i].next = NULL;
		}
		else {
			studentsGrade[i - 1].next = &studentsGrade[i];
			studentsGrade[i].next = NULL;
		}
	}
	// 
	// 成績情報入力終了表示
	displayInputEnd();
	// シーケンスの区切りを画面に出力する
	displaySequenceEnd();

	return &studentsGrade[0];

	// for debug
	//printf("\nデータを表示します\n");
	//rewind(gf_pt);
	//for (j = 0; j < i; j++)
	//{
	//	printf("ID：%-5s 英語：%3d 国語：%3d 数学：%3d 理科：%3d 社会：%3d\n",
	//		g_pt->id,
	//		g_pt->tokuten[ENGLISH],
	//		g_pt->tokuten[LANGUAGE],
	//		g_pt->tokuten[MATH],
	//		g_pt->tokuten[SCIENCE],
	//		g_pt->tokuten[SOCIETY]);
	//	g_pt++;
	//}
}
