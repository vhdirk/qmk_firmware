#ifndef MICROSOFT_SCULPT_H
#define MICROSOFT_SCULPT_H

#include "quantum.h"


// Microsoft Sculpt US keymap definition macro
 #define LAYOUT( \
         K01,      K03, K04, K05, K06, K07, K08, K09, K0A, K0B, K0C,                     \
         K12,      K14, K15, K16, K17, K18, K19, K1A, K1B, K1C, K1D,      K1F,           \
         K23,      K25, K26, K27, K28,      K2A, K2B, K2C, K2D, K2E,      K30,           \
         K34,      K36, K37, K38, K39, K3A, K3B, K3C, K3D, K3E, K3F,      K41,           \
              K46, K47, K48, K49,      K4B, K4C, K4D, K4E, K4F, K50,           K53,     \
         K56, K57, K58, K59, K5A, K5B,      K5D, K5E, K5F, K60, K61, K62,                \
    K66, K67,      K69, K6A,           K6D, K6E, K6F, K70,                          K76, \
         K78,      K7A, K7B, K7C, K7D, K7E, K7F, K80, K81, K82, K83,      K85            \
) { \
    { KC_NO,    K01, KC_NO,    K03, K04, K05, K06, K07, K08, K09, K0A, K0B, K0C, KC_NO,    KC_NO,    KC_NO,    KC_NO, }, \
    { KC_NO,    K12, KC_NO,    K14, K15, K16, K17, K18, K19, K1A, K1B, K1C, K1D, KC_NO,    K1F, KC_NO,    KC_NO, }, \
    { KC_NO,    K23, KC_NO,    K25, K26, K27, K28, KC_NO,    K2A, K2B, K2C, K2D, K2E, KC_NO,    K30, KC_NO,    KC_NO, }, \
    { KC_NO,    K34, KC_NO,    K36, K37, K38, K39, K3A, K3B, K3C, K3D, K3E,    K3F, KC_NO,    K41, KC_NO,    KC_NO, }, \
    { KC_NO,    KC_NO,    K46, K47, K48, K49, KC_NO,    K4B, K4C, K4D, K4E, K4F, K50, KC_NO,    KC_NO,    K53, KC_NO, }, \
    { KC_NO,    K56, K57, K58, K59,    K5A, K5B, KC_NO,    K5D, K5E, K5F, K60, K61, K62, KC_NO,    KC_NO,    KC_NO, }, \
    { K66, K67, KC_NO,    K69, K6A, KC_NO,    KC_NO,    K6D, K6E, K6F, K70, KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO, }, \
    { KC_NO,    K78, KC_NO,    K7A, K7B, K7C, K7D, K7E, K7F, K80, K81, K82, K83, KC_NO,    K85, KC_NO,    KC_NO  }, \
}


#endif
