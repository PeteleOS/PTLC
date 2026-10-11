struct s {
	char a;
	char b __attribute__((aligned(8)));
};
_Static_assert(__builtin_offsetof(struct s, b) == 8);
