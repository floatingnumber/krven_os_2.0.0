#ifndef INCLUDE_KEYBOARD_H_
#define INCLUDE_KEYBOARD_H_

#include "types.h"

void init_keyboard();
void keyboard_handler();
int keyboard_buffer_handler(void *arg);

//键盘映射
typedef
struct keymap_t{
	
	int8_t 	ascii;
	uint8_t make_1;
	uint8_t make_2;
	uint8_t break_1;
	uint8_t break_2;

}keymap_t;

#ifndef BUFFER_SIZE
	#define BUFFER_SIZE 1024
#endif

//键盘缓冲器
typedef
struct keyboard_buffer_t{

	uint8_t	buf[BUFFER_SIZE];			
	uint8_t count;	
	uint8_t	*head;						
	uint8_t *tail;		
	uint8_t tty_id;						//对应的tty终端ID

} keyboard_buffer_t;

#endif