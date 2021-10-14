#ifndef __EFFECT_REG_REVERB_H__
#define __EFFECT_REG_REVERB_H__

#include "effect_cfg.h"

enum {
    EFFECT_REVERB_MODE_NORMAL = 0x0,
    EFFECT_REVERB_MODE_ELECTRIC,
    EFFECT_REVERB_MODE_BOY_TO_GIRL,
    EFFECT_REVERB_MODE_GIRL_TO_BOY,
    EFFECT_REVERB_MODE_KIDS,
    EFFECT_REVERB_MODE_MAGIC,
    EFFECT_REVERB_MODE_BOOM,
    EFFECT_REVERB_MODE_SHOUTING_WHEAT,
    EFFECT_REVERB_MODE_MAX,
};

extern const struct __effect_mode_attr reverb_tool_attr[EFFECT_REVERB_MODE_MAX];

#endif//__EFFECT_REG_REVERB_H__