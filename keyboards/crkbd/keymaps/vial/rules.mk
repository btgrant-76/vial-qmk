MOUSEKEY_ENABLE     = no      # Mouse keys
RGBLIGHT_ENABLE     = no      # Enable WS2812 RGB underlight.
RGB_MATRIX_ENABLE   = yes
VIA_ENABLE          = yes     # Enable VIA
VIAL_ENABLE         = yes     # Enable VIAL
OLED_ENABLE         = no
OLED_DRIVER         = SSD1306
# EXTRAKEY_ENABLE     = yes
LTO_ENABLE          = yes
QMK_SETTINGS        = no
COMBO_ENABLE        = no


# from Vial reducing firmware size
TAP_DANCE_ENABLE	= yes
KEY_OVERRIDE_ENABLE = no
# end reducing firmware size

# from QMK squeezing...
CONSOLE_ENABLE = no
COMMAND_ENABLE = no
MOUSEKEY_ENABLE = no
EXTRAKEY_ENABLE = yes

SPACE_CADET_ENABLE = no
GRAVE_ESC_ENABLE = no
MAGIC_ENABLE = no

AVR_USE_MINIMAL_PRINTF = yes

MUSIC_ENABLE = no
# end QMK squeezing

VIALRGB_ENABLE = yes
