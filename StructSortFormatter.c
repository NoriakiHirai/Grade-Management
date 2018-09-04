/**
 * @file StructSortFormatter.c
 * @brief 構造体の1項目を比較対象とするリストを生成する
 * @author ths80587-Hirai
 * @date 2018.09.04
 */

void appendElement(struct singly_list *crt, int tokuten) {
	while (crt->next != NULL) {
		crt = crt->next;
	}
	crt->next = makeElement(tokuten);
}