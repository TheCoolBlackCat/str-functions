int strlen (char* s) {
	int l;
	for (l = 0; s[l] != '\0'; l++);
	return l;
}
