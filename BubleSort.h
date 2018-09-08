/**
 * @file BubleSort.h
 * @brief �o�u���\�[�g���i�̃w�b�_�[�t�@�C��
 * @author ths80587-Hirai
 * @date 2018.09.04
 */

#ifndef _BUBLESORT_H_
#define _BUBLESORT_H_

/* -------------------------------------------------------------------------- */
/* �C���N���[�h�錾															  */
/* -------------------------------------------------------------------------- */
#include"StudentScore.h"
#include"SortController.h"

/* -------------------------------------------------------------------------- */
/* �v���g�^�C�v�錾															  */
/* -------------------------------------------------------------------------- */
/**
 * �����o�u���\�[�g
 *
 * �����FstudentScore...���э\����
 */
studentScore *BubleSortByAsc(studentScore *studentScore);

/**
 * �~���o�u���\�[�g
 *
 * �����FstudentScore...���э\����
 */
studentScore *BubleSortByDesc(studentScore *studentScore);

#endif // _BUBLESORT_H_