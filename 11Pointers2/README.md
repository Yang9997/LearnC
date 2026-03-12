# void指针
可代表任何类型
``` c
void *memcpy(void *s1, void *s2, size_t n);
```
作为泛型函数，防止大量写重复函数
```c
memcpy_int(int *a, int *b, int count);
memcpy_float(float *a, float *b, int count);
memcpy_double(double *a, double *b, int count);
memcpy_char(char *a, char *b, int count);
memcpy_unsigned_char(unsigned char *a, unsigned char *b, int count);
```
# 指针
```c
char *p = str;
// *p = ... 带 * 修改的是p指向的变量的值
*p = 'h';
//  p = ... 不带 * 修改的是指针的指向
p = str1;
```
