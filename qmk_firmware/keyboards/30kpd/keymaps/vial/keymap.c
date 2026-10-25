#include QMK_KEYBOARD_H
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {};
void keyboard_post_init_user(void) {
    debug_enable = true;
}
