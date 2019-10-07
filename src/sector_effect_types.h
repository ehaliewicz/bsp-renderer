#ifndef SECTOR_EFFECT_TYPES_H
#define SECTOR_EFFECT_TYPES_H

typedef enum {
    SECTOR_UP_DOWN,
    CEILING_UP_DOWN,
    FLASHING,
    NO_EFFECT
} sector_effect_type;

typedef enum {
    GOING_UP,
    GOING_DOWN,
    NORMAL_BRIGHTNESS,
    HIGH_BRIGHTNESS,
} sector_effect_state;

typedef struct {
    fix32 max_floor_height;
    fix32 min_floor_height;
    u32 frame_delay_at_transition;
} sector_up_down_params;

typedef struct {
    fix32 max_ceil_height;
    fix32 min_ceil_height;
    u32 frame_delay_at_transition;
} ceiling_up_down_params;

typedef struct {
    u8 normal_light_level;
    u8 flash_light_level;
    u32 frames_to_flash;
    u32 frames_no_flash;
} flash_params;

typedef struct {
    union {
        sector_up_down_params sector_up_down;
        ceiling_up_down_params ceiling_up_down;
        flash_params flash;
    };
    sector_effect_state state;
    u32 delay_to;   // process this sector at this frame
} sector_effect_params;


#endif