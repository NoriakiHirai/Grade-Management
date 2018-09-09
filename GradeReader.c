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

#include"StudentScore.h"
#include"GradeReader.h"
#include"Display.h"
#include"Config.h"

/* -------------------------------------------------------------------------- */
/* GradeReader定義															  */
/* -------------------------------------------------------------------------- */
void readGrade(studentScore *sScore[])
{
	/* validation */
	if (sScore == NULL) {
		return;
	}

	FILE *gf_pt;
	studentScore *g_pt;
	int i = 0, j;

	// 出力先フルパス生成
	char pathname[PATHNAME_SIZE];  // ファイルパス
	memset(pathname, '\0', PATHNAME_SIZE);	// 変数初期化
	getcwd(pathname, PATHNAME_SIZE);	// カレントディレクトリ取得
	strcat(pathname, STUDENT_MASTER);
	fprintf(stdout, "出力先ファイルパス:%s\n", pathname);

	// ファイルオープン
	//if((gf_pt = fopen()))
	//// 成績情報入力スタート画面表示
	//void displayInputStart();

	//// 成績情報入力内容取得
	//// ^Z(Ctrl+Z)が入力されるまで入力を繰り返す。
	//g_pt = sScore[0];
	//while (1)
	//{
	//	void displayInput();
	//	scanf("%s %d %d %d %d %d", g_pt->id,
	//		&(g_pt->tokuten[ENGLISH]),
	//		&(g_pt->tokuten[MATH]),
	//		&(g_pt->tokuten[LANGUAGE]),
	//		&(g_pt->tokuten[SCIENCE]),
	//		&(g_pt->tokuten[SOCIETY]));
	//	fprintf(gf_pt, "%-5s %3d %3d %3d %3d %3d",
	//		g_pt->id,
	//		g_pt->tokuten[ENGLISH],
	//		g_pt->tokuten[MATH],
	//		g_pt->tokuten[LANGUAGE],
	//		g_pt->tokuten[SCIENCE],
	//		g_pt->tokuten[SOCIETY]);
	//	// for debug
	//	if (i == 3) {
	//		break;
	//	}
	//	i++;
	//}
	//// データを構造体に格納
	//fseek(gf_pt, 0L, SEEK_SET);
	//rewind(gf_pt);
	//for (i = 0; fscanf(gf_pt, "%5s %3d %3d %3d %3d %3d",
	//	sScore[i]->id,
	//	&(sScore[i]->tokuten[ENGLISH]),
	//	&(sScore[i]->tokuten[MATH]),
	//	&(sScore[i]->tokuten[LANGUAGE]),
	//	&(sScore[i]->tokuten[SCIENCE]),
	//	&(sScore[i]->tokuten[SOCIETY])) != EOF; i++);

	//// for debug
	//printf("\nデータを表示します\n");
	//rewind(gf_pt);
	//for (j = 0; j < i; j++)
	//{
	//	printf("ID：%-5s 英語：%3d 数学：%3d 国語：%3d 理科：%3d 社会：%3d\n",
	//		g_pt->id,
	//		g_pt->tokuten[ENGLISH],
	//		g_pt->tokuten[MATH],
	//		g_pt->tokuten[LANGUAGE],
	//		g_pt->tokuten[SCIENCE],
	//		g_pt->tokuten[SOCIETY]);
	//	g_pt++;
	//}

	//printf("データを入力してください(終了はf n)\n");
	//rewind(stdin);
	//g_pt = gakusei;

	//// データを構造体に入力
	//fseek(gf_pt, 0L, SEEK_SET);
	//rewind(gf_pt);
	//for (i = 0; fscanf(gf_pt, "%10s %3d", gakusei[i].name,
	//	&(gakusei[i].ten)) != EOF; i++);

	//// 格納したデータの処理
	//printf("\nデータを表示します\n");
	//rewind(gf_pt);
	//for (j = 0; j < i; j++)
	//{
	//	w_goukei += g_pt->ten;
	//	printf("%-10s %3d\n", g_pt->name, g_pt->ten);
	//	g_pt++;
	//}
	//printf("	%4d\n", w_goukei);

	//memset(gakusei, 0, sizeof(gakusei));
	//if (fclose(gf_pt) == EOF)
	//{
	//	printf("FILE CLOSE ERROR\n");
	//	exit(EXIT_FAILURE);
	//}
}
