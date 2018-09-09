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

#include"StudentGrade.h"
#include"GradeReader.h"
#include"Display.h"
#include"Config.h"

/* -------------------------------------------------------------------------- */
/* GradeReader��`															  */
/* -------------------------------------------------------------------------- */
studentGrade *readGrade()
{
	FILE *gf_pt;
	studentGrade studentsGrade[40], *g_pt;
	int i = 0;

	// �o�͐�t�@�C���I�[�v��
	if ((gf_pt = fopen(GREDE_SUMMARY, "w+")) == NULL)
	{
		printf("FILE OPEN ERROR\n");
		exit(EXIT_FAILURE);
	}
	
	// ���я����̓X�^�[�g��ʕ\��
	displayInputStart();

	// ���я����͓��e�擾
	// EOF�����͂����܂œ��͂��J��Ԃ��B
	g_pt = studentsGrade;
	while (1)
	{
		printf("�w�Дԍ�:");
		scanf("%s", g_pt->id);
		if (!(strcmp(g_pt->id, END_OF_INPUT))) break;
		
		printf("�e���Ȃ̓��_:");
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
		
		// ���я����͋�؂�s�\��
		displaySeparatorLine();
	}
	
	// �f�[�^���\���̂Ɋi�[
	fseek(gf_pt, 0L, SEEK_SET);
	rewind(gf_pt);
	for (i = 0; fscanf(gf_pt, "%5s %3d %3d %3d %3d %3d",
		studentsGrade[i].id,
		&(studentsGrade[i].tokuten[ENGLISH]),
		&(studentsGrade[i].tokuten[LANGUAGE]),
		&(studentsGrade[i].tokuten[MATH]),
		&(studentsGrade[i].tokuten[SCIENCE]),
		&(studentsGrade[i].tokuten[SOCIETY])) != EOF; i++) {
		// ���v�_���Z�o���A�\���̂Ɋi�[
		studentsGrade[i].tokuten[ALL] = 
			studentsGrade[i].tokuten[ENGLISH]
			+ studentsGrade[i].tokuten[LANGUAGE]
			+ studentsGrade[i].tokuten[MATH]
			+ studentsGrade[i].tokuten[SCIENCE]
			+ studentsGrade[i].tokuten[SOCIETY];

		// �\���̔z������X�g�`���ɕϊ�
		if (i == 0) {
				
				studentsGrade[i].next = NULL;
		}
		else {
			studentsGrade[i - 1].next = &studentsGrade[i];
			studentsGrade[i].next = NULL;
		}
	}
	// 
	// ���я����͏I���\��
	displayInputEnd();
	// �V�[�P���X�̋�؂����ʂɏo�͂���
	displaySequenceEnd();

	return &studentsGrade[0];

	// for debug
	//printf("\n�f�[�^��\�����܂�\n");
	//rewind(gf_pt);
	//for (j = 0; j < i; j++)
	//{
	//	printf("ID�F%-5s �p��F%3d ����F%3d ���w�F%3d ���ȁF%3d �Љ�F%3d\n",
	//		g_pt->id,
	//		g_pt->tokuten[ENGLISH],
	//		g_pt->tokuten[LANGUAGE],
	//		g_pt->tokuten[MATH],
	//		g_pt->tokuten[SCIENCE],
	//		g_pt->tokuten[SOCIETY]);
	//	g_pt++;
	//}
}
