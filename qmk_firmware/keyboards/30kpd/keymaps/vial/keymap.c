#include QMK_KEYBOARD_H
#include "print.h"

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    uprintf("KEY TEST: keycode=%u pressed=%u\n",
            keycode, record->event.pressed);
    return true;
}

