/**
 * @file StructSortFormatter.c
 * @brief \‘¢‘Ì‚Ì1€–Ú‚ð”äŠr‘ÎÛ‚Æ‚·‚éƒŠƒXƒg‚ð¶¬‚·‚é
 * @author ths80587-Hirai
 * @date 2018.09.04
 */

void appendElement(struct singly_list *crt, int tokuten) {
	while (crt->next != NULL) {
		crt = crt->next;
	}
	crt->next = makeElement(tokuten);
}