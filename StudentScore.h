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
	ENGLISH, LANGUAGE, MATH, SCIENCE, SOCIETY, TOTAL
};

/* -------------------------------------------------------------------------- */
/* �\���̐錾															  */
/* -------------------------------------------------------------------------- */
typedef struct studentScore_list {
	int id;
	char name[20];
	int english, language, math, science, society, totalScore;
	int sortKey;
	struct score *next;
} studentScore;

#endif // _STUDENTSCORE_H_