/**
 * @file StudentScore.h
 * @brief ���k�̓��_���\���̂��`�����w�b�_�[�t�@�C��
 *			���_���\���̂��g�p����ꍇ�́A���t�@�C�����C���N���[�h����
 * @author ths80587-Hirai
 * @date 2018.09.04
 */
#ifndef _STUDENTSCORE_H_
#define _STUDENTSCORE_H_

 /* -------------------------------------------------------------------------- */
 /* �񋓌^�錾															  */
 /* -------------------------------------------------------------------------- */
enum Subject {
	ENGLISH, LANGUAGE, MATH, SCIENCE, SOCIETY, ALL
};

/* -------------------------------------------------------------------------- */
/* �\���̐錾															  */
/* -------------------------------------------------------------------------- */
typedef struct studentScore_list {
	int id;
	char name[20];
	int tokuten[ALL];
	int total;
	int sortKey;
	struct studentScore_list *next;
} studentScore;

#endif // _STUDENTSCORE_H_