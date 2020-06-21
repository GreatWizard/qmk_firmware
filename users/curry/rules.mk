SRC += curry.c \
       process_records.c

# Common flags
SPACE_CADET_ENABLE      = no
LTO_ENABLE              = yes
EXTRAKEY_ENABLE         = yes
UNICODE_ENABLE          = yes

# Enable N-Key Rollover, but it's not compliant with VUSB protocol so warning can be raised and the NKRO is disabled
ALLOW_WARNINGS = yes
NKRO_ENABLE = yes

EXTRAKEY_ENABLE         = yes
LEADER_ENABLE           = yes
TAP_DANCE_ENABLE        = no

ifneq ($(strip $(NO_SECRETS)), yes)
    ifneq ("$(wildcard $(USER_PATH)/secrets.c)","")
        SRC += secrets.c
    endif
    ifeq ($(strip $(NO_SECRETS)), lite)
        OPT_DEFS += -DNO_SECRETS
    endif
endif

ifeq ($(strip $(TAP_DANCE_ENABLE)), yes)
    SRC += tap_dances.c
endif

ifeq ($(strip $(OLED_DRIVER_ENABLE)), yes)
    SRC += oled.c
endif

ifeq ($(strip $(LEADER_ENABLE)), yes)
    SRC += leader.c
endif

ifeq ($(strip $(RGBLIGHT_ENABLE)), yes)
    SRC += rgb_lighting_user.c
    ifeq ($(strip $(INDICATOR_LIGHTS)), yes)
        OPT_DEFS += -DINDICATOR_LIGHTS
    endif
    ifeq ($(strip $(RGBLIGHT_TWINKLE)), yes)
        OPT_DEFS += -DRGBLIGHT_TWINKLE
    endif
    ifeq ($(strip $(RGBLIGHT_NOEEPROM)), yes)
        OPT_DEFS += -DRGBLIGHT_NOEEPROM
    endif
    ifeq ($(strip $(RGBLIGHT_STARTUP_ANIMATION)), yes)
        OPT_DEFS += -DRGBLIGHT_STARTUP_ANIMATION
    endif
endif

RGB_MATRIX_ENABLE ?= no
ifneq ($(strip $(RGB_MATRIX_ENABLE)), no)
    SRC += rgb_matrix_user.c
endif

ifdef CONSOLE_ENABLE
    ifeq ($(strip $(KEYLOGGER_ENABLE)), yes)
        OPT_DEFS += -DKEYLOGGER_ENABLE
    endif
endif

ifeq ($(strip $(MAKE_BOOTLOADER)), yes)
    OPT_DEFS += -DMAKE_BOOTLOADER
endif
