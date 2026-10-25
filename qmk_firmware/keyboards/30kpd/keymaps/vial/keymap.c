#include QMK_KEYBOARD_H
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {};

#include "pointing_device.h"
#include "print.h"

void keyboard_post_init_user(void) {
    debug_enable = true;
    uprintf("TEST: POST INIT WORKS\n");
    uprintf("TEST: keyboard_post_init_user called\n");
    
    pointing_device_init();
    
    uprintf("TEST: pointing_device_init returned\n");
}

#include "print.h"

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    uprintf("KEY TEST: keycode=%u pressed=%u\n",
            keycode, record->event.pressed);
    return true;
}

