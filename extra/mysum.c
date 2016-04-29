int mysum(int nr_num) {
	int i, value, sum = 0;
	int *esp = &nr_num; 
	for (i = 0; i < nr_num; i++) {
		value = *(++esp);
		sum += value;
	}
	return sum;
}
