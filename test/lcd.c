#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

#include "/home/debian/lkm/lcd/lib/lcd_lib.h"

int main()
{
//	ssize_t byte;
//	int file, f_byte, check_close;
//	Draw_String_t str;
//	lcd_clear_screen();
//	lcd_set_contrast(0x7F);
//
//	int fd;
//	fd = open("/dev/framebuf", O_RDWR);
//	if (fd < 0) {
//		printf("Error open file\n");
//		return fd;
//	}
//
//
//	strcpy(str.message, "HELLOWORLD");
//	str.pixel = 1;
//	str.font = 0;
//
//	if ((f_byte = write(fd, &str, sizeof(str))) < 0) {
//		printf("Error when writing\n");
//		return f_byte;		
//	}
//
//	printf ("Debug byte : %d\n", f_byte);
//
//	check_close = close(fd);
//	printf ("Check file is closed or not : %d\n", check_close);
//	lcd_draw_circle(12, 5, 4, Pixel_Set);
//	lcd_draw_rect(24, 5, 48, 18, Pixel_Set);
//	return 0;
	lcd_clear_screen();
//	lcd_draw_circle(12, 5, 4, Pixel_Set);
//	lcd_gotoxy(24, 5);
	lcd_draw_rect(24, 1, 48, 12, Pixel_Set);
//
//	lcd_gotoxy(24, 20);	
//	lcd_draw_line(24, 1, 24, 16, Pixel_Set);

//	lcd_gotoxy(24,47);
//	lcd_draw_line(24, 47, 70, 47, Pixel_Set);
//	lcd_draw_rect(10, 20, 70, 46, Pixel_Set);
	lcd_gotoxy(0, 24);
	draw_string("HELLO HOAI NAM", Pixel_Set, FontSize_5x7);
//
//	return 0;	



}
