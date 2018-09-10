/**
 * @file SortController.h
 * @brief �\�[�g�R���g���[�����i�̃w�b�_�[�t�@�C��
 * @author ths80587-Hirai
 * @date 2018.09.04
 */
#ifndef _SORTCONTROLLER_H_
#define _SORTCONTROLLER_H_

/* -------------------------------------------------------------------------- */
/* �C���N���[�h�錾															  */
/* -------------------------------------------------------------------------- */
#include"StudentGrade.h"

/* -------------------------------------------------------------------------- */
/* �񋓌^�錾																	  */
/* -------------------------------------------------------------------------- */
enum SortLogic {
	BUBLESORT_BY_ASC, BUBLESORT_BY_DESC
};

/* -------------------------------------------------------------------------- */
/* �v���g�^�C�v�錾															  */
/* -------------------------------------------------------------------------- */
/**
 * �\�[�g�R���g���[��
 * 
 * �����FstudentsGrade...���э\����
 *		sortLogic...�\�[�g���W�b�N(�񋓌^�ϐ�)
 *		sortKey...�\�[�g�L�[(���ȁA�񋓌^�ϐ�)
 */
void SortController(studentGrade *studentsGrade, enum SortLogic sortLogic, enum Subject sortKey);

#endif // _SORTCONTROLLER_H_