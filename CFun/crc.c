/*
 * returns the nth bit with 0 indexing
 */
char nthBit(char byteMe, int n) {
	return 0x1 & (byteMe >> n);
}

char crc8(char* arr, int arrLen) {
	char res =0x7; // 00000111, grab the lower 3 bits

}
