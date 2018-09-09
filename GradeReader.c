/* -------------------------------------------------------------------------- */
/* File:GradeReader.c														  */
/* Overview:                                                                  */
/*	���я���ǂݍ��ފ֐����`����B	                                              */
/*                                                                            */
/*                                                Author : HAL Tokyo - Hirai  */
/*                                                Date   : 2018.09.08         */
/* -------------------------------------------------------------------------- */

/* -------------------------------------------------------------------------- */
/* �C���N���[�h�錾															  */
/* -------------------------------------------------------------------------- */
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

#include"StudentScore.h"
#include"GradeReader.h"
#include"Display.h"
#include"Config.h"

/* -------------------------------------------------------------------------- */
/* GradeReader��`															  */
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

	// �o�͐�t���p�X����
	char pathname[PATHNAME_SIZE];  // �t�@�C���p�X
	memset(pathname, '\0', PATHNAME_SIZE);	// �ϐ�������
	getcwd(pathname, PATHNAME_SIZE);	// �J�����g�f�B���N�g���擾
	strcat(pathname, STUDENT_MASTER);
	fprintf(stdout, "�o�͐�t�@�C���p�X:%s\n", pathname);

	// �t�@�C���I�[�v��
	//if((gf_pt = fopen()))
	//// ���я����̓X�^�[�g��ʕ\��
	//void displayInputStart();

	//// ���я����͓��e�擾
	//// ^Z(Ctrl+Z)�����͂����܂œ��͂��J��Ԃ��B
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
	//// �f�[�^���\���̂Ɋi�[
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
	//printf("\n�f�[�^��\�����܂�\n");
	//rewind(gf_pt);
	//for (j = 0; j < i; j++)
	//{
	//	printf("ID�F%-5s �p��F%3d ���w�F%3d ����F%3d ���ȁF%3d �Љ�F%3d\n",
	//		g_pt->id,
	//		g_pt->tokuten[ENGLISH],
	//		g_pt->tokuten[MATH],
	//		g_pt->tokuten[LANGUAGE],
	//		g_pt->tokuten[SCIENCE],
	//		g_pt->tokuten[SOCIETY]);
	//	g_pt++;
	//}

	//printf("�f�[�^����͂��Ă�������(�I����f n)\n");
	//rewind(stdin);
	//g_pt = gakusei;

	//// �f�[�^���\���̂ɓ���
	//fseek(gf_pt, 0L, SEEK_SET);
	//rewind(gf_pt);
	//for (i = 0; fscanf(gf_pt, "%10s %3d", gakusei[i].name,
	//	&(gakusei[i].ten)) != EOF; i++);

	//// �i�[�����f�[�^�̏���
	//printf("\n�f�[�^��\�����܂�\n");
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
