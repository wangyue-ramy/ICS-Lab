1. main函数为主调用函数，位于main.c；
2. mysum函数为int类型的求和函数，函数原型为：
	int mysum(int n, ...);

3. myfsum函数为float类型的求和函数(未完成)，函数原型为：
	float myfsum(int n, ...);
4. 链接指令为gcc -o main main.c mysum.c myfsum.c.