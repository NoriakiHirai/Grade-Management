/* -------------------------------------------------------------------------- */
/* File:GradeWriter.c														  */
/* Overview:                                                                  */
/*	���я����������ފ֐����`����B	                                              */
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
#include"GradeWriter.h"
#include"Display.h"
#include"Config.h"
#include"Error.h"

/* -------------------------------------------------------------------------- */
/* writeGradeInCSVFormat													  */
/* -------------------------------------------------------------------------- */
void writeGradeInCSVFormat(studentGrade *studentsGrade, const char *subject, const char *sortPattern)
{
	int errCode, i = 0, j = 0;
	char outputFile[50];
	FILE *gf_pt;

	/* validation */
	if (studentsGrade == NULL || subject == NULL || sortPattern == NULL) {
		errCode = XXX_NULL_PARAMETER;
		e_pt->errorCode = errCode;
		e_pt->errorMesage[0] = "Parameter is NULL.";
		return;
	}

	// �t�@�C�����̐���
	sprintf(outputFile, "%s%s%s%s%s", BASE_FILE_NAME, subject, SORT_ADJ, sortPattern, EXTENSION_CSV);
	
	// �t�@�C���I�[�v��
	if ((gf_pt = fopen(outputFile, "w+")) == NULL)
	{
		printf("FILE OPEN ERROR\n");
		exit(EXIT_FAILURE);
	}

	// �t�@�C���|�C���^�Ƀf�[�^�̓ǂݍ���
	while (studentsGrade != NULL)
	{
		fprintf(gf_pt, "\"%s\",%d,%d,%d,%d,%d,%d\n",
			studentsGrade->name,
			studentsGrade->tokuten[ENGLISH],
			studentsGrade->tokuten[LANGUAGE],
			studentsGrade->tokuten[MATH],
			studentsGrade->tokuten[SCIENCE],
			studentsGrade->tokuten[SOCIETY],
			studentsGrade->tokuten[ALL]
		);
		studentsGrade = studentsGrade->next;
	}

	// �t�@�C���N���[�Y
	if (fclose(gf_pt) == EOF)
	{
		printf("FILE CLOSE ERROR\n");
		exit(EXIT_FAILURE);
	}
}