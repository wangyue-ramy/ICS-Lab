float myfsum(int nr_num) {
	int i;
	float value, sum = 0;
	float *esp = &nr_num + 1;

	for (i = 0; i < nr_num; i++) {
		value = *(esp);
		esp += 2;
		sum += value;
	}
	return sum;
}
