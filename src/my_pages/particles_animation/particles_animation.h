#ifndef PARTICLES_ANIMATION_H
#define PARTICLES_ANIMATION_H

#ifdef __cplusplus
extern "C"
{
#endif

#include "../lvgl.h"

#define DEFAULT_PARTICLE_COUNT 15
#define DEFAULT_PARTICLE_RADIUS 10               // 粒子半径
#define DEFAULT_PARTICLE_CONNECTION_THRESHOLD 60 // 粒子连接距离 px
#define DEFAULT_PARTICLE_SPEED 5

#define PARTICLE_FRESH_INTERVAL 100 // 粒子刷新间隔 ms

    void create_particles_animation(lv_obj_t *parent);

#ifdef __cplusplus
}
#endif

#endif