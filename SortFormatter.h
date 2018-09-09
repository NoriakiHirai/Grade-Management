/**
* @file SortFormatter.h
* @brief �\�[�g�t�H�[�}�b�^���i�̃w�b�_�[�t�@�C��
* @author ths80587-Hirai
* @date 2018.09.04
*/
#ifndef _SORTFORMATTER_H_
#define _SORTFORMATTER_H_

/* -------------------------------------------------------------------------- */
/* �C���N���[�h�錾															  */
/* -------------------------------------------------------------------------- */
#include"StudentGrade.h"

/* -------------------------------------------------------------------------- */
/* �v���g�^�C�v�錾															  */
/* -------------------------------------------------------------------------- */
/**
 * �\�[�g�t�H�[�}�b�^
 *   ���э\���̂Ɏw�肵���\�[�g�L�[��ݒ肵�A�\���̔z��̊e�v�f�����X�g�`���ɂȂ�
 *
 * �����FstudentGrade...���э\����
 *		sortKey...�\�[�g�L�[(���ȁA�񋓌^�ϐ�)
 */
GradeSortFormatter(studentGrade *studentGrade, enum Subject sortKey);

#endif // _SORTFORMATTER_H_