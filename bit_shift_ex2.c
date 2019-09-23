//픽셀의 컬러표현에서 빨간색 값의 추출


#include <stdio.h>

int main(void)
{
	unsigned int color = 0x00380000; //픽셀의 색상
	unsigned int result;

	printf("픽셀의 색상: %#08x\n", color);

	result = (color & 0x00ff0000) >> 16; //마스크연산 후 비트 이동 연산

	printf("추출된 빨간색: %#08x\n", result);

	return 0;
}
