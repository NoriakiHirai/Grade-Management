/**
 * @file StudentGrade.h
 * @brief ���k�̐��я��\���̂��`�����w�b�_�[�t�@�C��
 *			���я��\���̂��g�p����ꍇ�́A���t�@�C�����C���N���[�h����
 * @author ths80587-Hirai
 * @date 2018.09.04
 */
#ifndef _STUDENTGRADE_H_
#define _STUDENTGRADE_H_

 /* -------------------------------------------------------------------------- */
 /* �񋓌^�錾	   															   */
 /* -------------------------------------------------------------------------- */
enum Subject {
	ENGLISH, LANGUAGE, MATH, SCIENCE, SOCIETY, ALL, MAX_LENGTH
};

/* -------------------------------------------------------------------------- */
/* �O���[�o���ϐ��錾	   														  */
/* -------------------------------------------------------------------------- */
static char *SUBJECT[] = { "English",
						"Language",
						"Math",
						"Science",
						"Society",
						"Total"
};

static char *SORT_PATTERN[] = { "ASC",
								"DESC"
};

/* -------------------------------------------------------------------------- */
/* �\���̐錾															  */
/* -------------------------------------------------------------------------- */
typedef struct studentGrade_list {
	char id[5];
	char name[20];
	int tokuten[MAX_LENGTH];
	int total;
	int sortKey;
	struct studentGrade_list *previous, *next;
} studentGrade;

#endif // _STUDENTGRADE_H_