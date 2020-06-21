# Build Options
#   change to "no" to disable the options, or define them in the Makefile in
#   the appropriate keymap folder that will get included automatically
#
BOOTMAGIC_ENABLE = no       # Virtual DIP switch configuration(+1000)
MOUSEKEY_ENABLE = no        # Mouse keys(+4700)
EXTRAKEY_ENABLE = yes       # Audio control and System control(+450)
CONSOLE_ENABLE = no         # Console for debug(+400)
COMMAND_ENABLE = no         # Commands for debug and configuration
MIDI_ENABLE = no            # MIDI controls
AUDIO_ENABLE = no           # Audio output on port C6
UNICODE_ENABLE = no         # Unicode
BLUETOOTH_ENABLE = no       # Enable Bluetooth with the Adafruit EZ-Key HID

ifneq ("$(KEYBOARD)","nyquist")
  RGBLIGHT_ENABLE = yes
  BACKLIGHT_ENABLE = yes
else
  RGBLIGHT_ENABLE = no
  BACKLIGHT_ENABLE = no
endif

# Do not enable SLEEP_LED_ENABLE. it uses the same timer as BACKLIGHT_ENABLE
SLEEP_LED_ENABLE = no       # Breathing sleep LED during USB suspend

# Enable N-Key Rollover, but it's not compliant with VUSB protocol so warning can be raised and the NKRO is disabled
ALLOW_WARNINGS = yes
NKRO_ENABLE = yes
