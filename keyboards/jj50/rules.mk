# MCU name
MCU = atmega32a

# Bootloader selection
#   Teensy       halfkay
#   Pro Micro    caterina
#   Atmel DFU    atmel-dfu
#   LUFA DFU     lufa-dfu
#   QMK DFU      qmk-dfu
#   ATmega32A    bootloadHID
#   ATmega328P   USBasp
BOOTLOADER = bootloadHID

# build options
BOOTMAGIC_ENABLE = yes  # Virtual DIP switch configuration
MOUSEKEY_ENABLE = no    # Mouse keys
EXTRAKEY_ENABLE = yes   # Audio control and System control
CONSOLE_ENABLE = no     # Console for debug
COMMAND_ENABLE = yes    # Commands for debug and configuration
BACKLIGHT_ENABLE = yes  # Enable keyboard backlight functionality
RGBLIGHT_ENABLE = yes   # Enable keyboard underlight functionality
WS2812_DRIVER = i2c     # This driver powers the RGB Lighting and RGB Matrix features
NKRO_ENABLE = no        # USB Nkey Rollover - if this doesn't work, see here: https://github.com/tmk/tmk_keyboard/wiki/FAQ#nkro-doesnt-work
KEY_LOCK_ENABLE = yes   # Enables use of KC_LOCK
SLEEP_LED_ENABLE = no   # Breathing sleep LED during USB suspend - Do not enable: it uses the same timer as BACKLIGHT_ENABLE

LAYOUTS = ortho_5x12
