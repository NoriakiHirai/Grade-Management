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
#include"StudentGrade.h"
#include"SortController.h"

/* -------------------------------------------------------------------------- */
/* �v���g�^�C�v�錾															  */
/* -------------------------------------------------------------------------- */
/**
 * �����o�u���\�[�g
 *
 * �����FstudentGrade...���э\����
 */
studentGrade *BubleSortByAsc(studentGrade *studentGrade);

/**
 * �~���o�u���\�[�g
 *
 * �����FstudentGrade...���э\����
 */
studentGrade *BubleSortByDesc(studentGrade *studentGrade);

#endif // _BUBLESORT_H_