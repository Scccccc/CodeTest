#include <stdio.h>

void _swap(char* buf1, char* buf2, int width)
{
	int i = 0;
	for (i = 0; i < width; i++)
	{
		int tmp = buf1;
		buf1 = buf2;
		buf2 = tmp;
		buf1++;
		buf2++;
	}
}


void bubble_sort(void* base, size_t sz, size_t width, int(*cmp)(const void* e1, const void* e2))
{
	size_t i = 0;
	for (i = 0; i < sz; i++)
	{
		size_t j = 0;
		for (j = 0; j < width; j++)
		{
			if (cmp((char*)base + j * width, (char*)base + (j + 1) * width) > 0)
			{
				_swap((char*)base + j * width, (char*)base + (j + 1) * width, width);
			}
		}
	}
}