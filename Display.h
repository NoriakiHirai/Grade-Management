//* -------------------------------------------------------------------------- */
/* File:Display.h															  */
/* Overview:                                                                  */
/*	��ʕ\���Ɋւ���֐��錾���`����B                                            */
/*                                                                            */
/*                                                Author : HAL Tokyo - Hirai  */
/*                                                Date   : 2018.09.08         */
/* -------------------------------------------------------------------------- */

#ifndef DISPLAY_H_
#define DISPLAY_H_

/* -------------------------------------------------------------------------- */
/* �C���N���[�h�錾															  */
/* -------------------------------------------------------------------------- */
#include"StudentGrade.h"

/* -------------------------------------------------------------------------- */
/* �v���g�^�C�v�錾															  */
/* -------------------------------------------------------------------------- */
/* ��ʕ\���ėp���i */
void displayTitle();
void displaySeparatorLine();
void displaySequenceEnd();
void displayNewLine();
void displayEndMsg();

/* ���я����͉�ʕ\�� */
void displayInputStart();
void displayInputEnd();

/* �\�[�g���ʕ\�� */
void displayResultTitle();
void displaySubject(char *adjSubject);
void displaySortPattern(char *sortPattern);
void displaySortResult(studentGrade *studentsGrade);
void displaySortResultEnd();

#endif // !DISPLAY_H_