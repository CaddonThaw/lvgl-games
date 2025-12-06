/**
 * @file lv_games.h
 * @souce https://gitee.com/mgod_wu/AiPi-Eyes-Rx
 * @souce https://gitee.com/mgod_wu/AiPi-Eyes-Rx
 */

#ifndef LV_GAMES_H
#define LV_GAMES_H

#ifdef __cplusplus
extern "C" {
#endif

#include "lvgl.h"

#include "lv_100ask_2048/game2048.h"
#include "yang/yang.h"
#include "xiaoxiaole/xiaoxiaole.h"
#include "pvz/pvz.h"

#define game2048_update(x) lv_100ask_2048_simple_test(x)
#define yang_update(x) yang_game(x)
#define xiaoxiaole_update(x) xiaoxiaole(x)
#define pvz_update(x) pvz_start(x)

#ifdef __cplusplus
} /* extern "C" */
#endif

#endif /*LV_DEMO_H*/
