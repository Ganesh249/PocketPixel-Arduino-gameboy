#include <U8glib.h>
#include <EEPROM.h>


U8GLIB_SSD1306_128X64 u8g(U8G_I2C_OPT_DEV_0);


const unsigned char bitmap_selectbox [] PROGMEM = {
	0x0f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf0, 0x00, 
	0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x08, 0x00, 
	0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0c, 0x00, 
	0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0c, 0x00, 
	0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0c, 0x00, 
	0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0c, 0x00, 
	0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0c, 0x00, 
	0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0c, 0x00, 
	0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0c, 0x00, 
	0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0c, 0x00, 
	0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0c, 0x00, 
	0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0c, 0x00, 
	0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0c, 0x00, 
	0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0c, 0x00, 
	0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0c, 0x00, 
	0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0c, 0x00, 
	0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0c, 0x00, 
	0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0c, 0x00, 
	0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0c, 0x00, 
	0x1f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf8, 0x00, 
	0x0f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf0, 0x00
};
// 'dino_logo', 16x16px
const unsigned char bitmap_dino_icon [] PROGMEM = {
	0x00, 0x00, 0x00, 0xf8, 0x01, 0xbc, 0x01, 0xfc, 0x01, 0xe0, 0x01, 0xfc, 0x01, 0xc0, 0x03, 0xf8, 
	0x47, 0xc8, 0x4f, 0xc0, 0x7f, 0xc0, 0x3f, 0xc0, 0x0e, 0xc0, 0x04, 0x40, 0x06, 0x60, 0x00, 0x00
};
// 'flappylogo', 16x16px
const unsigned char bitmap_flappy_icon [] PROGMEM = {
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0xe0, 0x07, 0xf0, 0x0f, 0xf8, 0x0f, 0xe8, 0x3f, 0xe8, 
	0x7f, 0xfc, 0x1f, 0xc0, 0x0f, 0xf8, 0x07, 0xf0, 0x03, 0xe0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
};
// 'startwarlogo', 16x16px
const unsigned char bitmap_starwar_icon [] PROGMEM = {
	0x00, 0x00, 0x03, 0x8c, 0x60, 0x0c, 0x60, 0x40, 0x0f, 0xe0, 0x1c, 0x41, 0x3f, 0x00, 0x7f, 0x98, 
	0x7f, 0xfc, 0x7f, 0x98, 0x3f, 0x00, 0x1c, 0x44, 0x0f, 0xe0, 0x00, 0x40, 0x60, 0x12, 0x03, 0x00
};
const unsigned char bitmap_astroid_icon [] PROGMEM = {
	0x00, 0x00, 0x08, 0x04, 0x08, 0x00, 0x00, 0x00, 0x60, 0x00, 0x62, 0x04, 0x00, 0x00, 0x00, 0x02, 
	0x21, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x86, 0x83, 0xc6, 0x47, 0xe0, 0x0f, 0xf0, 0x00, 0x00
};
// 'scrollbg', 8x64px
const unsigned char bitmap_scrollbar_bg [] PROGMEM = {
	0x00, 0x02, 0x02, 0x00, 0x02, 0x02, 0x00, 0x02, 0x02, 0x00, 0x02, 0x02, 0x00, 0x02, 0x02, 0x00, 
	0x02, 0x02, 0x00, 0x02, 0x02, 0x00, 0x02, 0x02, 0x00, 0x02, 0x02, 0x00, 0x02, 0x02, 0x00, 0x02, 
	0x02, 0x00, 0x02, 0x02, 0x00, 0x02, 0x02, 0x00, 0x02, 0x02, 0x00, 0x02, 0x02, 0x00, 0x02, 0x02, 
	0x00, 0x02, 0x02, 0x00, 0x02, 0x02, 0x00, 0x02, 0x02, 0x00, 0x02, 0x02, 0x00, 0x02, 0x02, 0x00
};
// 'trex-dead-1s', 22x23px
const unsigned char bitmap_dinodead [] PROGMEM = {
	0x00, 0x00, 0x00, 0x00, 0x0f, 0xf0, 0x00, 0x18, 0xf8, 0x00, 0x1a, 0xf8, 0x00, 0x18, 0xf8, 0x00, 
	0x1f, 0xf8, 0x00, 0x1f, 0xf8, 0x00, 0x1f, 0xe0, 0x40, 0x3e, 0x00, 0x40, 0xfe, 0x00, 0x61, 0xff, 
	0x80, 0x73, 0xfe, 0x80, 0x7f, 0xfe, 0x00, 0x7f, 0xfe, 0x00, 0x3f, 0xfc, 0x00, 0x1f, 0xfc, 0x00, 
	0x0f, 0xf8, 0x00, 0x07, 0xf0, 0x00, 0x03, 0xb0, 0x00, 0x03, 0x10, 0x00, 0x02, 0x10, 0x00, 0x03, 
	0x18, 0x00, 0x00, 0x00, 0x00
};
// 'trex-up-1s', 22x23px
const unsigned char bitmap_dinostanding [] PROGMEM = {
	0x00, 0x00, 0x00, 0x00, 0x0f, 0xf0, 0x00, 0x1b, 0xf8, 0x00, 0x1f, 0xf8, 0x00, 0x1f, 0xf8, 0x00, 
	0x1f, 0xf8, 0x00, 0x1f, 0x00, 0x00, 0x1f, 0xe0, 0x40, 0x3e, 0x00, 0x40, 0xfe, 0x00, 0x61, 0xff, 
	0x80, 0x73, 0xfe, 0x80, 0x7f, 0xfe, 0x00, 0x7f, 0xfe, 0x00, 0x3f, 0xfc, 0x00, 0x1f, 0xfc, 0x00, 
	0x0f, 0xf8, 0x00, 0x07, 0xf0, 0x00, 0x03, 0xb0, 0x00, 0x03, 0x10, 0x00, 0x02, 0x10, 0x00, 0x03, 
	0x18, 0x00, 0x00, 0x00, 0x00
};
// 'trex-up-3s', 22x23px
const unsigned char bitmap_dino1 [] PROGMEM = {
	0x00, 0x00, 0x00, 0x00, 0x0f, 0xf0, 0x00, 0x1b, 0xf8, 0x00, 0x1f, 0xf8, 0x00, 0x1f, 0xf8, 0x00, 
	0x1f, 0xf8, 0x00, 0x1f, 0x00, 0x00, 0x1f, 0xe0, 0x40, 0x3e, 0x00, 0x40, 0xfe, 0x00, 0x61, 0xff, 
	0x80, 0x73, 0xfe, 0x80, 0x7f, 0xfe, 0x00, 0x7f, 0xfe, 0x00, 0x3f, 0xfc, 0x00, 0x1f, 0xfc, 0x00, 
	0x0f, 0xf8, 0x00, 0x07, 0xf0, 0x00, 0x03, 0x30, 0x00, 0x01, 0x90, 0x00, 0x00, 0x10, 0x00, 0x00, 
	0x18, 0x00, 0x00, 0x00, 0x00
};
// 'trex-up-2s', 22x23px
const unsigned char bitmap_dino2 [] PROGMEM = {
	0x00, 0x00, 0x00, 0x00, 0x0f, 0xf0, 0x00, 0x1b, 0xf8, 0x00, 0x1f, 0xf8, 0x00, 0x1f, 0xf8, 0x00, 
	0x1f, 0xf8, 0x00, 0x1f, 0x00, 0x00, 0x1f, 0xe0, 0x40, 0x3e, 0x00, 0x40, 0xfe, 0x00, 0x61, 0xff, 
	0x80, 0x73, 0xfe, 0x80, 0x7f, 0xfe, 0x00, 0x7f, 0xfe, 0x00, 0x3f, 0xfc, 0x00, 0x1f, 0xfc, 0x00, 
	0x0f, 0xf8, 0x00, 0x07, 0xf0, 0x00, 0x03, 0x98, 0x00, 0x03, 0x00, 0x00, 0x02, 0x00, 0x00, 0x03, 
	0x00, 0x00, 0x00, 0x00, 0x00
};
// 'cacti-small-big', 23x26px
const unsigned char bitmap_cactus1 [] PROGMEM = {
	0x00, 0x00, 0x00, 0x00, 0x01, 0x80, 0x00, 0x03, 0xc0, 0x00, 0x03, 0xc0, 0x00, 0x03, 0xc0, 0x00, 
	0x03, 0xc0, 0x08, 0x03, 0xc8, 0x0c, 0x13, 0xdc, 0x2c, 0x3b, 0xdc, 0x6c, 0x3b, 0xdc, 0x6d, 0xbb, 
	0xdc, 0x6d, 0xbb, 0xdc, 0x6d, 0xbb, 0xdc, 0x6d, 0xbb, 0xdc, 0x6d, 0xbf, 0xf8, 0x3d, 0x9f, 0xf0, 
	0x0f, 0x0f, 0xc0, 0x0c, 0x03, 0xc0, 0x0c, 0x03, 0xc0, 0x0c, 0x03, 0xc0, 0x0c, 0x03, 0xc0, 0x0c, 
	0x03, 0xc0, 0x0c, 0x03, 0xc0, 0x4c, 0x0f, 0xd0, 0x01, 0x00, 0x00, 0x00, 0x00, 0x80
};
// 'cacti-small-small-small', 27x26px
const unsigned char bitmap_cactus2 [] PROGMEM = {
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x08, 0x04, 0x06, 0x00, 
	0x0c, 0x0e, 0x26, 0x00, 0x0d, 0x2e, 0x36, 0x80, 0x0d, 0xae, 0x36, 0xc0, 0x2d, 0xae, 0xb6, 0xc0, 
	0x6d, 0xae, 0xb6, 0xc0, 0x6d, 0xae, 0xb6, 0xc0, 0x6d, 0xae, 0xb6, 0xc0, 0x6f, 0x2e, 0x9e, 0xc0, 
	0x6c, 0x2e, 0x87, 0x80, 0x3c, 0x3e, 0x86, 0x00, 0x0c, 0x1f, 0x86, 0x00, 0x0c, 0x0f, 0x06, 0x00, 
	0x0c, 0x0e, 0x06, 0x00, 0x0c, 0x0e, 0x06, 0x00, 0x0c, 0x0e, 0x06, 0x00, 0x0c, 0x0e, 0x06, 0x00, 
	0x00, 0x20, 0x40, 0x40, 0x01, 0x00, 0x02, 0x00
};
// 'cacti-big-small', 23x26px
const unsigned char bitmap_cactus3 [] PROGMEM = {
	0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x07, 0x80, 0x00, 0x07, 0x80, 0x00, 0x07, 0x80, 0x00, 0x07, 
	0x80, 0x00, 0x07, 0x90, 0x40, 0x27, 0xb8, 0x60, 0x77, 0xb9, 0x60, 0x77, 0xbb, 0x60, 0x77, 0xbb, 
	0x6c, 0x77, 0xbb, 0x6c, 0x77, 0xbb, 0x6c, 0x77, 0xbb, 0x6c, 0x7f, 0xf3, 0x6c, 0x3f, 0xe1, 0xec, 
	0x1f, 0x80, 0x78, 0x07, 0x80, 0x60, 0x07, 0x80, 0x60, 0x07, 0x80, 0x60, 0x07, 0x80, 0x60, 0x07, 
	0x80, 0x60, 0x07, 0x80, 0x60, 0x1f, 0xa2, 0x60, 0x00, 0x00, 0x08, 0x01, 0x00, 0x00
};
// 'game-over', 97x7px
const unsigned char bitmap_gameover [] PROGMEM = {
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3c, 0x03, 0x80, 
	0x44, 0x07, 0xc0, 0x00, 0xe0, 0x11, 0x01, 0xf0, 0x1e, 0x00, 0x40, 0x04, 0x40, 0x6c, 0x04, 0x00, 
	0x01, 0x10, 0x11, 0x01, 0x00, 0x11, 0x00, 0x4c, 0x04, 0x40, 0x7c, 0x07, 0x80, 0x01, 0x10, 0x1b, 
	0x01, 0xe0, 0x13, 0x00, 0x44, 0x07, 0xc0, 0x54, 0x04, 0x00, 0x01, 0x10, 0x0e, 0x01, 0x00, 0x1e, 
	0x00, 0x3c, 0x04, 0x40, 0x44, 0x07, 0xc0, 0x00, 0xe0, 0x04, 0x01, 0xf0, 0x13, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
};
// 'restart-icon', 19x14px
const unsigned char bitmap_restart [] PROGMEM = {
	0x00, 0x00, 0x00, 0x1f, 0xff, 0x00, 0x3f, 0xff, 0x80, 0x7e, 0xff, 0xc0, 0x7e, 0x7f, 0xc0, 0x78, 
	0x33, 0xc0, 0x7a, 0x7b, 0xc0, 0x7a, 0xfb, 0xc0, 0x7b, 0xfb, 0xc0, 0x7b, 0xfb, 0xc0, 0x78, 0x03, 
	0xc0, 0x3f, 0xff, 0x80, 0x1f, 0xff, 0x00, 0x00, 0x00, 0x00
};

// 'starship', 24x16px
const unsigned char bitmap_starship [] PROGMEM = {
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0xe0, 0x00, 0x0f, 0xff, 0xc0, 0x0f, 0xe0, 0x00, 0x7f, 
	0xfc, 0x00, 0x3f, 0xff, 0x00, 0x1f, 0xff, 0xfe, 0x3f, 0xff, 0x00, 0x7f, 0xfc, 0x00, 0x0f, 0xe0, 
	0x00, 0x0f, 0xff, 0xc0, 0x07, 0xe0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
};
// 'planet', 32x32px
const unsigned char bitmap_planet [] PROGMEM = {
	0x00, 0x00, 0x00, 0x00, 0x00, 0x0f, 0xf0, 0x00, 0x00, 0x3f, 0xfc, 0x00, 0x00, 0xff, 0xff, 0x00, 
	0x03, 0xff, 0xff, 0xc0, 0x07, 0xff, 0xff, 0xe0, 0x0f, 0xff, 0xff, 0xf0, 0x0f, 0xff, 0xff, 0xf0, 
	0x1f, 0xff, 0xff, 0xf8, 0x3f, 0xff, 0xff, 0xfc, 0x3f, 0xff, 0xff, 0xfc, 0x3f, 0xff, 0xff, 0xfc, 
	0x7f, 0xff, 0xff, 0xfe, 0x7f, 0xff, 0xff, 0xfe, 0x7f, 0xff, 0xff, 0xfe, 0x7f, 0xff, 0xff, 0xfe, 
	0x7e, 0x1f, 0xff, 0xfe, 0x7c, 0x03, 0xff, 0xfe, 0x7c, 0x00, 0xff, 0xfe, 0x3c, 0x00, 0x3f, 0xfe, 
	0x3c, 0x00, 0x1f, 0xfc, 0x3e, 0x00, 0x1f, 0xfc, 0x1e, 0x00, 0x0f, 0xf8, 0x0f, 0x00, 0x0f, 0xf0, 
	0x0f, 0x80, 0x0f, 0xf0, 0x07, 0xc0, 0x1f, 0xe0, 0x03, 0xf8, 0x3f, 0xc0, 0x00, 0xff, 0xff, 0x00, 
	0x00, 0x7f, 0xfe, 0x00, 0x00, 0x0f, 0xf0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
};
// 'Your paragraph text (2)', 128x64px
const unsigned char bitmap_startup [] PROGMEM = {
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x06, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x88, 0x00, 0x00, 0x00, 0x00, 0x00, 0x64, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0xd0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x38, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1e, 0x00, 0x00, 0x00, 0x00, 0x00, 0xc0, 
	0x00, 0x00, 0x00, 0x64, 0x00, 0x00, 0x3c, 0x00, 0x00, 0x13, 0x00, 0x00, 0x00, 0x00, 0x0c, 0xc0, 
	0x00, 0x00, 0x00, 0x60, 0x00, 0x00, 0x66, 0x00, 0x00, 0x30, 0x00, 0x00, 0x00, 0x00, 0x06, 0x80, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x66, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0xc0, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x66, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x60, 
	0x01, 0x80, 0x00, 0x00, 0x00, 0x00, 0x66, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x06, 0x00, 
	0x19, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x0f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x05, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x04, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x0c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x1f, 0xf8, 0x00, 0x00, 0x00, 0x38, 0x00, 0x00, 0x00, 0xf0, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x1f, 0xf8, 0x00, 0x00, 0x00, 0x38, 0x00, 0x00, 0x00, 0xf0, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x1e, 0x1e, 0x00, 0x00, 0x00, 0x38, 0x00, 0x00, 0x00, 0xf0, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x1e, 0x1e, 0x3f, 0x81, 0xff, 0x38, 0x38, 0xff, 0x07, 0xfe, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x1e, 0x1e, 0x7f, 0xc3, 0xff, 0x38, 0x38, 0xff, 0x87, 0xfe, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x1e, 0x1e, 0xf0, 0xe7, 0x80, 0x38, 0xf1, 0xc3, 0xc0, 0xf0, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x1e, 0x1e, 0xf0, 0xf7, 0x00, 0x3c, 0xf1, 0xe3, 0xc0, 0xf0, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x1f, 0xf8, 0xf0, 0xf7, 0x00, 0x3f, 0xc1, 0xff, 0xc0, 0xf0, 0x00, 0x00, 0x00, 
	0x00, 0x0f, 0x00, 0x1f, 0xf0, 0xf0, 0xf7, 0x00, 0x3f, 0xe1, 0xff, 0xc0, 0xf0, 0x00, 0x00, 0x00, 
	0x00, 0x19, 0x80, 0x1e, 0x00, 0xf0, 0xf7, 0x80, 0x38, 0xf1, 0xc0, 0x00, 0xf0, 0x00, 0x00, 0x00, 
	0x00, 0x19, 0x80, 0x1e, 0x00, 0x7f, 0xc3, 0xff, 0x38, 0x38, 0xff, 0x80, 0xf0, 0x00, 0x00, 0x00, 
	0x00, 0x19, 0x80, 0x1e, 0x00, 0x3f, 0xc1, 0xff, 0x38, 0x38, 0x7f, 0x80, 0x70, 0x00, 0x00, 0x00, 
	0x00, 0x19, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x48, 
	0x00, 0x0f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xcc, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xcc, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xcc, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x78, 
	0x00, 0x00, 0x00, 0x00, 0x3f, 0xe0, 0x1e, 0x00, 0x00, 0x00, 0x00, 0xf8, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x3f, 0xf0, 0x1e, 0x00, 0x00, 0x00, 0x00, 0xf8, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x38, 0x78, 0x00, 0x00, 0x00, 0x00, 0x00, 0x38, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x38, 0x38, 0x3c, 0x1c, 0x0c, 0x3f, 0xc0, 0x38, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x38, 0x38, 0x3e, 0x1e, 0x1e, 0x3f, 0xc0, 0x38, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x38, 0x38, 0x1e, 0x07, 0x38, 0xf0, 0xf0, 0x38, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x3c, 0x78, 0x1e, 0x07, 0xf8, 0xf0, 0xf0, 0x38, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x3f, 0xf0, 0x1e, 0x03, 0xf0, 0xff, 0xf0, 0x38, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x3f, 0xe0, 0x1e, 0x07, 0xf8, 0xff, 0xe0, 0x38, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x38, 0x00, 0x1e, 0x07, 0xbc, 0xf0, 0x00, 0x3c, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x38, 0x00, 0xff, 0xde, 0x1e, 0x3f, 0xc1, 0xff, 0x80, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x38, 0x00, 0xff, 0xce, 0x0e, 0x3f, 0xc1, 0xff, 0x80, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x08, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xe0, 0x00, 0x00, 
	0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x10, 0x00, 0x00, 
	0x00, 0x00, 0x03, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x10, 0x00, 0x00, 
	0x00, 0x00, 0x06, 0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x60, 0x00, 0x01, 0x10, 0x00, 0x00, 
	0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x06, 0x60, 0x00, 0x01, 0x10, 0x00, 0x00, 
	0x0f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0x40, 0x00, 0x00, 0xe0, 0x00, 0x00, 
	0x19, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x19, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x30, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x19, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x19, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x0f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
};

const unsigned char *bitmap_icons[4] = {
	bitmap_dino_icon,
	bitmap_flappy_icon,
	bitmap_starwar_icon,
	bitmap_astroid_icon
};

const unsigned char *bitmap_dinos[] = {
  bitmap_dino1,
  bitmap_dino2
};
const unsigned char *bitmap_cactus[] = {
  bitmap_cactus1,
  bitmap_cactus2,
  bitmap_cactus3
};

const int num_items = 4; // Numuber of Menu Items
const int Max_item_length = 20;
char Menu_items[num_items][Max_item_length] = {
	{"DINO GAME"},
	{"FLAPPY BIRD"},
	{"STAR WARS"},
	{"ASTEROIDS"}
};

// Pin Declarations
#define Up_Button_Pin 4
#define Down_Button_Pin 3
#define Left_Button_Pin 5
#define Right_Button_Pin 2
#define Ok_Button_Pin 6
#define Shoot_Button_Pin 11
#define Exit_Button_Pin 10

#define Buzzer_pin 9

int button_up_clicked = 0; // only perform action when button is clicked, and wait until another press
int button_ok_clicked = 0; // same as above
int button_down_clicked = 0;
int button_left_clicked = 0;
int button_right_clicked = 0;

int item_selected = 0; // which item in the menu is selected

int item_sel_previous; // previous item - used in the menu screen to draw the item before the selected one
int item_sel_next; // next item - used in the menu screen to draw next item after the selected one

int current_screen = 0;   // 0 = menu, 1 = gamescreens

// Game Hi-Scores
int hiscore_dino = 0; 
int hiscore_flappy = 0;
int hiscore_asteroids = 0;
int hiscore_starwars = 0;

void beep() {
  tone(Buzzer_pin, 880); // 880Hz
  delay(20);
  noTone(Buzzer_pin);
}
void playStartupTone() {
  tone(Buzzer_pin, 440, 150);   // A4
  delay(160);
  tone(Buzzer_pin, 523, 150);   // C5
  delay(160);
  tone(Buzzer_pin, 659, 150);   // E5
  delay(160);
  tone(Buzzer_pin, 880, 200);   // A5
  delay(210);

  delay(100);  // Brief pause

  tone(Buzzer_pin, 784, 100);   // G5
  delay(120);
  tone(Buzzer_pin, 1047, 300);  // C6
  delay(320);

  noTone(Buzzer_pin);  // Stop sound
}

void playdinogame() {
  static int dinox = 10; // dino X position
  static int dinoy = 48; // dino y position
  static float dinovy = 0;   // dino y velocity
  static float velocity = 0;  // Jump velocity
  static int cactusx[3]= {128,240,370};
  static int cactustype[3] = {0, 1, 2};
  static bool isJumping = false;
  static bool gameover = false;
  static bool gamestarted = false;
  static int animationframe = 0;
  unsigned long lastanimtime = 0;
  static int score = 0;

  const int groundy = 64-2;
  const float jumpvelocity = -4.4;
  const float gravity = 0.15;

  const byte cactuswidth[3] = {23, 27, 23}; 

  static bool prevUp = HIGH;
  bool currentUp = digitalRead(Up_Button_Pin);
  bool upPressed = (prevUp == HIGH && currentUp == LOW);
  prevUp = currentUp;

  u8g.firstPage();
  do {
    if (!gamestarted) {
      u8g.setFont(u8g_font_6x13Br);
      u8g.drawStr(40, 30, "Dino Run");
      u8g.drawStr(15, 50, "Press UP to Start");

      if (upPressed) {
        delay(10);
        gamestarted = true;
        gameover = false;
        isJumping = false;
        dinoy = 41;
        dinovy = 0;
        score = 0;
        for (int i = 0; i < 3; i++) {
          cactusx[i] = 128 + i*90;
          cactustype[i] = random(0, 3);
        }
        tone(Buzzer_pin, 800, 100);
      }
    }

    else if (gamestarted && !gameover) {
      static unsigned long lastScoreTime = 0;
      if (millis() - lastScoreTime >= 100) {  // Increase every 100ms (adjust speed)
        score++;
        lastScoreTime = millis();
      }
      // Jump if not already in air
      if (!isJumping && digitalRead(Up_Button_Pin) == LOW) {
        isJumping = true;
        dinovy = jumpvelocity;
        tone(Buzzer_pin, 600, 50);
      }

      // Apply gravity
      if (isJumping) {
        dinovy += gravity;
        if (dinovy > 2.5) dinovy = 2.5; // 2.5 is the maxfallspeed
        dinoy += (int)dinovy;

        if (dinoy >= 41) {
          dinoy = 41;
          dinovy = 0;
          isJumping = false;
        }
      }

      // Move cactus
      for(int i = 0; i<3;i++){
        cactusx[i] -= 1;
        if((cactusx[i] + cactuswidth[cactustype[i]]) < 0){
          int max_x = 0;
          for (int j = 0; j < 3; j++) {
            if (j != i && cactusx[j] > max_x) max_x = cactusx[j];
          }
          cactusx[i] = max(150, max_x + 90);  // Fixed distance after the farthest cactus;
          cactustype[i] = random(0,3);
  
        }

        u8g.drawBitmapP(cactusx[i], 64-26, (cactuswidth[cactustype[i]] + 7) / 8, 26, bitmap_cactus[cactustype[i]]);

        //Collstion With cactus
        int dinoright = dinox + 22;
        int cactusright = cactusx[i] + cactuswidth[cactustype[i]];
        if (dinoright > cactusx[i] && dinox < cactusright && dinoy+22 > groundy){
          gameover = true;
          tone(Buzzer_pin, 300, 300);
        }
      }
      // Animate run
      if (!isJumping && millis() - lastanimtime > 150) {
        animationframe = 1 - animationframe;
        lastanimtime = millis();
      }

      // Draw ground
      u8g.drawHLine(0, groundy, 128);

      // Draw dino
      if (gameover) {
        u8g.drawBitmapP(dinox, dinoy, 3, 23, bitmap_dinodead); // dead
      } else if (isJumping) {
        u8g.drawBitmapP(dinox, dinoy, 3, 23, bitmap_dinostanding); // jump
      } else {
        u8g.drawBitmapP(dinox, dinoy, 3, 23, bitmap_dinos[animationframe]); // run
      }

      // Draw score
      char buf[20];
      sprintf(buf, "HI %05d %05d",hiscore_dino, score);
      u8g.setFont(u8g_font_6x10r);
      u8g.drawStr(40, 10, buf);
    }

    else if (gameover) {
      if (score > hiscore_dino){
        hiscore_dino = score;
        EEPROM.put(0,hiscore_dino);
      }
      u8g.drawBitmapP(18,20,(97+7)/8,7,bitmap_gameover);
      u8g.drawBitmapP(55,35,(19+7)/8,14,bitmap_restart);

      if (upPressed) {
        gamestarted = true;
        gameover = false;
        isJumping = false;
        dinoy = 41;
        dinovy = 0;
        score = 0;
        for (int i = 0; i < 3; i++) {
          cactusx[i] = 128 + i*90;
          cactustype[i] = random(0, 3);
        }
        tone(Buzzer_pin, 800, 100);
      }
      else if (digitalRead(Exit_Button_Pin) == LOW) {
        gamestarted = false;
        gameover = false;
        current_screen = 0;
        beep();
      }
    }
  } while (u8g.nextPage());
}
void playflappybird(){
  static int birdx = 128/4;
  static int birdy ;
  static float velocity = 0;
  static int wall_x[3] = {128, 180, 240};
  static int wall_y[3] = {20, 30, 40};
  const int wall_gap = 40;
  const int wall_width = 15;
  static int score = 0;
  static bool gameover = false;
  static bool gamestarted = false;

  static bool prevFire = HIGH;
  bool currentFire = digitalRead(Up_Button_Pin);
  bool up_pressed = (prevFire == HIGH && currentFire == LOW);
  prevFire = currentFire;

  static int wallFrameCounter = 0;
  wallFrameCounter++;

  u8g.firstPage();
  do{
    if (!gamestarted){
      u8g.setFont(u8g_font_6x13Br);
      u8g.drawStr(30,30,"Flappy Bird");
      u8g.drawStr(15,50,"Press Up to Start");
      if(up_pressed){
        gamestarted  = true;
        birdy = 30;
        score = 0;
        for (int i = 0; i < 3; i++) {
          wall_x[i] = 128 + i * 50;
          wall_y[i] = random(10, 40);
        }
        tone(Buzzer_pin, 800, 100);
        
        delay(150);
      } 
    }
    else if (gamestarted && !gameover){
      if(digitalRead(Up_Button_Pin) == LOW){
        velocity -= 0.4;
        tone(Buzzer_pin, 800, 50);
      }
      velocity += 0.15;

      if (velocity > 1.0) velocity = 1.0;
      birdy += (int)velocity;

      if(birdy <0) {
        birdy = 0;
        velocity = 0;
      }
      if (birdy > 64 - 16){
        birdy = 64 - 16;
        velocity -= 0.4;
      }

      u8g.drawBitmapP(birdx, birdy, 2, 16, bitmap_flappy_icon);
      for(int i = 0; i < 3;i++){
        u8g.drawBox(wall_x[i], 0, wall_width, wall_y[i]);
        u8g.drawBox(wall_x[i], wall_y[i]+ wall_gap,wall_width, 64 - wall_y[i]+wall_gap);
        if(wall_x[i] + wall_width < 0){
          wall_y[i] = random(10,40);
          wall_x[i] = 128;
        }

        if (wall_x[i] == birdx) {
          score++;
        }

        if((birdx + 15 > wall_x[i] && birdx < wall_x[i] + wall_width) && (birdy < wall_y[i] || birdy + 16 > wall_y[i] + wall_gap)){
          gameover = true;
          tone(Buzzer_pin, 300, 300);
        }
        if (wallFrameCounter >= 1) {
          wall_x[i] -= 2;  // Move only every 1 frames
        }
      }
      if (wallFrameCounter >= 1) wallFrameCounter = 0;

      char buf[16];
      sprintf(buf, "%d", score);
      u8g.setFont(u8g_font_6x13Br);
      u8g.drawStr(60, 10, buf);
    }
    else if (gameover){
      if(score > hiscore_flappy){
        hiscore_flappy = score;
        EEPROM.put(2,hiscore_flappy);
      }
      u8g.drawBitmapP(18,10,(97+7)/8,7,bitmap_gameover);
      u8g.drawBitmapP(55,25,(19+7)/8,14,bitmap_restart);

      char his[16];
      sprintf(his, "HI Score: %d",hiscore_flappy);
      u8g.setFont(u8g_font_6x10r);
      u8g.drawStr(4, 60, his);

      if (up_pressed) {
        gamestarted = true;
        gameover = false;
        birdy = 30;
        score = 0;
        for (int i = 0; i < 3; i++) {
          wall_x[i] = 128 + i * 50;
          wall_y[i] = random(10, 40);
        }
      }
      else if(digitalRead(Exit_Button_Pin) == LOW){
        gamestarted = false;
        current_screen = 0;
        beep();
      }
    }
  }while(u8g.nextPage());
}
void playasteroids(){
    static int shipX = 64;
    const int shipY = 60;
    const int shipWidth = 8;

    const int MAX_BULLETS = 3;
    const int MAX_ASTEROIDS = 5;

    static int bulletsX[MAX_BULLETS];
    static int bulletsY[MAX_BULLETS];
    static bool bulletActive[MAX_BULLETS];

    static int asteroidsX[MAX_ASTEROIDS];
    static int asteroidsY[MAX_ASTEROIDS];
    static bool asteroidActive[MAX_ASTEROIDS];

    static unsigned long lastBulletTime = 0;
    static int score = 0;
    static bool gameStarted = false;
    static bool gameOver = false;

    static bool prevFire = HIGH;
    bool currentFire = digitalRead(Shoot_Button_Pin);
    bool button_shoot_clicked = (prevFire == HIGH && currentFire == LOW);
    prevFire = currentFire;

    u8g.firstPage();
    do {
      if (!gameStarted) {
        u8g.setFont(u8g_font_6x13Br);
        u8g.drawStr(35, 30, "ASTEROIDS");
        u8g.drawStr(15, 50, "Press Fire to Start");

        if (button_shoot_clicked) {
          gameStarted = true;
          gameOver = false;
          score = 0;
          shipX = 64;
          for (int i = 0; i < MAX_BULLETS; i++) bulletActive[i] = false;
          for (int i = 0; i < MAX_ASTEROIDS; i++) {
            asteroidActive[i] = true;
            asteroidsX[i] = random(0, 120);
            asteroidsY[i] = random(-64, 0);
          }
        }
      }
      else if (gameStarted && !gameOver) {
        u8g.drawTriangle(shipX, shipY, shipX + shipWidth, shipY, shipX + shipWidth / 2, shipY - 8);

        if (digitalRead(Left_Button_Pin) == LOW && shipX > 0) shipX -= 1;
        if (digitalRead(Right_Button_Pin) == LOW && shipX < 120) shipX += 1;

        if (digitalRead(Shoot_Button_Pin) == LOW && millis() - lastBulletTime > 300) {
          for (int i = 0; i < MAX_BULLETS; i++) {
            if (!bulletActive[i]) {
              bulletsX[i] = shipX + shipWidth / 2;
              bulletsY[i] = shipY - 10;
              bulletActive[i] = true;
              lastBulletTime = millis();
              tone(Buzzer_pin, 800, 50);
              break;
            }
          }
        }

        for (int i = 0; i < MAX_BULLETS; i++) {
          if (bulletActive[i]) {
            u8g.drawBox(bulletsX[i], bulletsY[i], 2, 5);
            bulletsY[i] -= 4;
            if (bulletsY[i] < 0) bulletActive[i] = false;
          }
        }

        for (int i = 0; i < MAX_ASTEROIDS; i++) {
          if (asteroidActive[i]) {
            u8g.drawDisc(asteroidsX[i], asteroidsY[i], 2);
            static int frameCounter = 0;
            frameCounter++;
            if (frameCounter >= 4) { // move every 4 frames 
              asteroidsY[i] += 1;
              frameCounter = 0;
            }

            if (asteroidsY[i] > 64) {
              asteroidsY[i] = random(-20, -5);
              asteroidsX[i] = random(0, 120);
              score--;
            }

            for (int j = 0; j < MAX_BULLETS; j++) {
              if (bulletActive[j] &&
                  abs(bulletsX[j] - asteroidsX[i]) < 5 &&
                  abs(bulletsY[j] - asteroidsY[i]) < 5) {
                bulletActive[j] = false;
                asteroidsY[i] = random(-20, 0);
                asteroidsX[i] = random(0, 120);
                score += 2;
                tone(Buzzer_pin, 1200, 60);
              }
            }

            if (abs(shipX + shipWidth / 2 - asteroidsX[i]) < 6 &&
                abs(shipY - asteroidsY[i]) < 6) {
              gameOver = true;
              tone(Buzzer_pin, 1000, 100); delay(150);
              tone(Buzzer_pin, 600, 100); delay(150);
              tone(Buzzer_pin, 300, 150); delay(200);
              noTone(Buzzer_pin);
            }
          }
        }

        char scoreStr[10];
        sprintf(scoreStr, "S:%d", score);
        u8g.setFont(u8g_font_6x10r);
        u8g.drawStr(3, 10, scoreStr);
        char highStr[10];
        sprintf(highStr, "H:%d", hiscore_asteroids);
        u8g.drawStr(30, 10, highStr);
      }
      else if (gameOver) {
        if (score > hiscore_asteroids) {
          hiscore_asteroids = score;
          EEPROM.put(4, hiscore_asteroids);
        }
        u8g.drawBitmapP(18,20,(97+7)/8,7,bitmap_gameover);
        u8g.drawBitmapP(55,35,(19+7)/8,14,bitmap_restart);

        if (button_shoot_clicked) {
          gameStarted = true;
          gameOver = false;
          score = 0;
          shipX = 64;
          for (int i = 0; i < MAX_ASTEROIDS; i++) {
            asteroidActive[i] = true;
            asteroidsX[i] = random(0, 120);
            asteroidsY[i] = random(-64, 0);
          }
          for (int i = 0; i < MAX_BULLETS; i++) bulletActive[i] = false;
        }
        else if (digitalRead(Exit_Button_Pin) == LOW) {
          gameStarted = false;
          gameOver = false;
          current_screen = 0;
          beep();
          break;
        }
      }
  } while (u8g.nextPage());
}
void playstarwars(){
  static int shipx = 5;
  static int shipy = 24;

  static int planetx = 110;
  static int planety = 0;
  static int planetDir = 1;

  static int bulletx[5];
  static int bullety[5];
  static bool bulletActive[5] = {false};
  static unsigned long lastBulletTime = 0;

  static int asteroidx[3];
  static int asteroidy[3];
  static int asteroidr[3];
  static bool asteroidActive[3] = {false};

  static int score = 0;
  static int lives = 5;
  static bool gameover = false;
  static bool gamestarted = false;

  static bool starsInitialized = false;
  static int starX[20];
  static int starY[20];

  if (!starsInitialized) {
    for (int i = 0; i < 20; i++) {
      starX[i] = random(0, 128);
      starY[i] = random(0, 64);
    }
    starsInitialized = true;
  }

  static bool prevShoot = HIGH;
  bool shootPressed = (prevShoot == HIGH && digitalRead(Shoot_Button_Pin) == LOW);
  prevShoot = digitalRead(Shoot_Button_Pin);

  u8g.firstPage();
  do {
    if (!gamestarted) {
      u8g.setFont(u8g_font_6x13Br);
      u8g.drawStr(30, 30, "Star Wars");
      u8g.drawStr(5, 50, "Press Shoot to Start");
      if (shootPressed) {
        gamestarted = true;
        gameover = false;
        score = 0;
        lives = 5;
        shipy = 24;
        planety = 0;
        planetDir = 1;
        for (int i = 0; i < 5; i++) bulletActive[i] = false;
        for (int i = 0; i < 3; i++) asteroidActive[i] = false;
        tone(Buzzer_pin, 800, 90);
      }
    }
    else if (gamestarted && !gameover) {
      // Planet movement
      static unsigned long lastPlanetMove = 0;
      if (millis() - lastPlanetMove > 60) {  // move every 100 ms
        planety += planetDir;
        if (planety < 0 || planety > 64 - 32) planetDir *= -1;
          lastPlanetMove = millis();
      }

      // Ship control
      if (digitalRead(Up_Button_Pin) == LOW) shipy -= 2;
      if (digitalRead(Down_Button_Pin) == LOW) shipy += 2;
      if (shipy < 0) shipy = 0;
      if (shipy > 64 - 16) shipy = 64 - 16;

      // Fire bullet
      if (shootPressed && millis() - lastBulletTime > 250) {
        for (int i = 0; i < 5; i++) {
          if (!bulletActive[i]) {
            bulletx[i] = shipx + 16;
            bullety[i] = shipy + 6;
            bulletActive[i] = true;
            lastBulletTime = millis();
            tone(Buzzer_pin, 600, 30);
            break;
          }
        }
      }

      // Fire asteroids from planet
      for (int i = 0; i < 3; i++) {
        if (!asteroidActive[i]) {
          if (random(0, 100) < 3) {  // 3% chance to spawn each frame
            asteroidx[i] = planetx;
            asteroidy[i] = planety + 8;
            asteroidr[i] = random(2, 5);
            asteroidActive[i] = true;
          }
        }
        else {
          asteroidx[i] -= 1;
          u8g.drawCircle(asteroidx[i], asteroidy[i], asteroidr[i]);

          // Collision with ship
          int dx = (shipx + 8) - asteroidx[i];
          int dy = (shipy + 8) - asteroidy[i];
          if (dx * dx + dy * dy < (8 + asteroidr[i]) * (8 + asteroidr[i])) {
            asteroidActive[i] = false;
            lives--;
            tone(Buzzer_pin, 300, 100);
            if (lives <= 0) gameover = true;
          }

          // Off screen
          if (asteroidx[i] < -5) asteroidActive[i] = false;
        }
      }
      for (int i = 0; i < 20; i++) {
        u8g.drawPixel(starX[i], starY[i]);
      }

      // Draw ship
      u8g.drawBitmapP(shipx, shipy, 24/8, 16, bitmap_starship);

      // Draw planet
      u8g.drawBitmapP(planetx, planety, 32/8, 32, bitmap_planet);

      // Move bullets
      for (int i = 0; i < 5; i++) {
        if (bulletActive[i]) {
          bulletx[i] += 4;
          u8g.drawBox(bulletx[i], bullety[i], 6, 2);
          if (bulletx[i] > 128) bulletActive[i] = false;

          // Collision with planet
          if (bulletx[i] + 6 > planetx && bulletx[i] < planetx + 32 &&
              bullety[i] + 2 > planety && bullety[i] < planety + 32) {
            bulletActive[i] = false;
            score += 2;
            tone(Buzzer_pin, 1000, 50);
          }
        }
      }

      // Draw score and lives
      char buf[16];
      sprintf(buf, "Lives: %d", lives);
      u8g.setFont(u8g_font_5x7);
      u8g.drawStr(35, 63, buf);

      char scr[10];
      sprintf(scr,"Score:%d",score);
      u8g.drawStr(4, 10, scr);

      char histr[10];
      sprintf(histr, "HI:%d", hiscore_starwars);
      u8g.drawStr(90, 10, histr);
    }
    else if (gameover) {
      if (score > hiscore_starwars) {
        hiscore_starwars = score;
        EEPROM.put(6, hiscore_starwars);
      }
      u8g.setFont(u8g_font_6x10r);
      u8g.drawBitmapP(18,20,(97+7)/8,7,bitmap_gameover);
      u8g.drawBitmapP(55,35,(19+7)/8,14,bitmap_restart);

      if (shootPressed) {
        gamestarted = true;
        gameover = false;
        score = 0;
        lives = 5;
        shipy = 24;
        planety = 0;
        planetDir = 1;
        for (int i = 0; i < 5; i++) bulletActive[i] = false;
        for (int i = 0; i < 3; i++) asteroidActive[i] = false;
        tone(Buzzer_pin, 800, 100);
      }
      else if (digitalRead(Exit_Button_Pin) == LOW) {
        gamestarted = false;
        gameover = false;
        current_screen = 0;
        beep();
      }
    }
  } while (u8g.nextPage());
}
void (*Games[num_items])()= {
	playdinogame,
	playflappybird,
	playstarwars,
	playasteroids
};
void setup() {
  u8g.setColorIndex(1);

	pinMode(Up_Button_Pin, INPUT_PULLUP);
	pinMode(Down_Button_Pin, INPUT_PULLUP);
	pinMode(Left_Button_Pin, INPUT_PULLUP);
	pinMode(Right_Button_Pin, INPUT_PULLUP);
	pinMode(Ok_Button_Pin, INPUT_PULLUP);
	pinMode(Shoot_Button_Pin,INPUT_PULLUP);
	pinMode(Exit_Button_Pin, INPUT_PULLUP);
	pinMode(Buzzer_pin, OUTPUT);

	u8g.firstPage();
  do {
    u8g.drawBitmapP(0,0,128/8,64,bitmap_startup);
  } while( u8g.nextPage());
	playStartupTone();
	delay(500);

  EEPROM.get(0, hiscore_dino);
  EEPROM.get(2, hiscore_flappy);
  EEPROM.get(4, hiscore_asteroids);
  EEPROM.get(6, hiscore_starwars);
  
}

void loop() {
  if (current_screen == 0){
		if ((digitalRead(Up_Button_Pin) == LOW) && (button_up_clicked == 0)) {
			beep();
			item_selected = item_selected - 1;
			button_up_clicked = 1;
			if (item_selected <0){
				item_selected = num_items - 1;
			}
		}
		else if ((digitalRead(Down_Button_Pin) == LOW) && (button_down_clicked == 0)){
			beep();
			item_selected  = item_selected + 1;
			button_down_clicked = 1;
			if(item_selected >= num_items){
				item_selected = 0;
			}
		}
	
		if((digitalRead(Up_Button_Pin) == HIGH) && (button_up_clicked == 1)){
			button_up_clicked = 0;
		}
		if ((digitalRead(Down_Button_Pin) == HIGH) && (button_down_clicked == 1)){
			button_down_clicked = 0;
		}
	}

	if ((digitalRead(Ok_Button_Pin) == LOW) && (button_ok_clicked == 0)){
		beep();
		button_ok_clicked = 1;
		current_screen = 1;
	}
	if ((digitalRead(Ok_Button_Pin) == HIGH) && (button_ok_clicked) == 1){
		button_ok_clicked = 0;
	}


	item_sel_previous = item_selected - 1;
	if (item_sel_previous < 0) {item_sel_previous = num_items - 1;}
	item_sel_next = item_selected + 1;
	if(item_sel_next >= num_items) {item_sel_next = 0;}

	u8g.firstPage();
	do {
		if (current_screen == 0){
			u8g.drawBitmapP(0,22,128/8, 21, bitmap_selectbox);

			u8g.setFont(u8g_font_7x13r);
			u8g.drawStr(25,15, Menu_items[item_sel_previous]);
			u8g.drawBitmapP(4,2,16/8,16, bitmap_icons[item_sel_previous]);

			u8g.setFont(u8g_font_7x13Br);
      u8g.drawStr(25, 15+20+2, Menu_items[item_selected]);   
      u8g.drawBitmapP( 4, 24, 16/8, 16, bitmap_icons[item_selected]);

			u8g.setFont(u8g_font_7x13r);
			u8g.drawStr(25, 15+20+20+2+2, Menu_items[item_sel_next]);
			u8g.drawBitmapP(4,46,16/8,16, bitmap_icons[item_sel_next]);

			u8g.drawBitmapP(128-8, 0, 8/8, 64, bitmap_scrollbar_bg);

			u8g.drawBox(125, 64/num_items * item_selected, 3, 64/num_items);
		}
		else if (current_screen == 1){
			Games[item_selected]();
		}
	} while (u8g.nextPage());
}