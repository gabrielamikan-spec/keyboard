#include QMK_KEYBOARD_H
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {};

#include "print.h"

void keyboard_post_init_user(void) {
    debug_enable = true;
    uprintf("TEST: keyboard_post_init_user reached\n");
}
