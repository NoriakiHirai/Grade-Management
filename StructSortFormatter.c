/**
 * @file StructSortFormatter.c
 * @brief �\���̂�1���ڂ��r�ΏۂƂ��郊�X�g�𐶐�����
 * @author ths80587-Hirai
 * @date 2018.09.04
 */

void appendElement(struct singly_list *crt, int tokuten) {
	while (crt->next != NULL) {
		crt = crt->next;
	}
	crt->next = makeElement(tokuten);
}