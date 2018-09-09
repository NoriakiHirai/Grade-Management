/**
 * @file SortController.c
 * @brief �n���ꂽ�����ɂ�蓮�I�Ƀ\�[�g���W�b�N��I�����A���s����
 * @author ths80587-Hirai
 * @date 2018.09.04
 */

/* -------------------------------------------------------------------------- */
/* �C���N���[�h�錾															  */
/* -------------------------------------------------------------------------- */
#include<stdio.h>

#include"SortController.h"
#include"SortFormatter.h"
#include"BubleSort.h"
#include"StudentScore.h"
#include"Error.h"

/* -------------------------------------------------------------------------- */
/* �v���g�^�C�v�錾															  */
/* -------------------------------------------------------------------------- */
/**
 * ���я��ǂݍ���
 *
 * ����:studentScore...���я��\����
 */
studentScore *readGrade(studentScore *studentScore);

/**
 * ���я�񏑂��o��(CSV�`��)
 *
 * ����:studentScore...���я��\����
 */
studentScore *writeGradeInCSV(studentScore *studentScore);

/**
 * ���я��\��
 *
 * �����FstudentScore...���я��\����
 */
void displayScore(studentScore *studentScore, enum Subject subject);

/* -------------------------------------------------------------------------- */
/* ������																	  */
/* -------------------------------------------------------------------------- */
/* SortController */
void SortController(enum SortLogic sortLogic, enum Subject sortKey)
{
	int errCode;
	
	// �w�Дԍ���5���ȕ��̓��_����͂���
	studentGrade = readGrade();

	//// �\�[�g�L�[��ݒ肷��
	//switch (sortKey)
	//{
	//case ENGLISH:
	//	studentScore = ScoreSortFormatter(studentScore, ENGLISH);
	//	break;
	//case LANGUAGE:
	//	studentScore = ScoreSortFormatter(studentScore, LANGUAGE);
	//	break;
	//case MATH:
	//	studentScore = ScoreSortFormatter(studentScore, MATH);
	//	break;
	//case SCIENCE:
	//	studentScore = ScoreSortFormatter(studentScore, SCIENCE);
	//	break;
	//case SOCIETY:
	//	studentScore = ScoreSortFormatter(studentScore, SOCIETY);
	//	break;
	//case ALL:
	//	studentScore = ScoreSortFormatter(studentScore, ALL);
	//	break;
	//default:
	//	errCode = XXX_INVALID_PARAMETER;
	//	e_pt->errorCode = errCode;
	//	e_pt->errorMesage[0] = "Selected sortKey is invalid.";
	//	return;
	//}

	//// �\�[�g���s
	//switch (sortLogic)
	//{
	//case BUBLESORT_BY_ASC:
	//	studentScore = BubleSortByAsc(studentScore);
	//	break;
	//case BUBLESORT_BY_DESC:
	//	studentScore = BubleSortByDesc(studentScore);
	//	break;
	//default:
	//	errCode = XXX_INVALID_PARAMETER;
	//	e_pt->errorCode = errCode;
	//	e_pt->errorMesage[0] = "Selected sortLogic is invalid.";
	//	return;
	//}

	// �\�[�g���ʂ���ʂɕ\��
	//displayScore(studentScore, ALL);

	// �\�[�g���ʂ�CSV�`���ŕ\��

	// �\�[�g���ʂ�CSV�`���Ńt�@�C���ɏo�́i�R���g���[��

}
