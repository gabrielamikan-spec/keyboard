#include QMK_KEYBOARD_H
#include "pointing_device.h"
#include "print.h"

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {};

void pointing_device_init_user(void) {
    uprintf("TEST: pointing_device_init_user called\n");
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    if (record->event.pressed) {
        uprintf("KEY TEST: keycode=%u\n", keycode);

        if (keycode == KC_F12) {
            uprintf("TEST: manual pointing_device_init START\n");
            pointing_device_init();
            uprintf("TEST: manual pointing_device_init END\n");
        }
    }

    return true;
}

report_mouse_t pointing_device_task_user(report_mouse_t mouse_report) {
    static bool logged = false;

    if (!logged) {
        uprintf("TEST: pointing_device_task_user called\n");
        logged = true;
    }

    return mouse_report;
}

