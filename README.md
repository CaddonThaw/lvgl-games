# lvgl-games
基于百问网和b站@老虎爱3D的lvgl小游戏，适配到ESP32S3智能终端

## 1. 安装库
- 在 `platformio.ini` 中添加以下内容：
    ```
    lib_deps = 
        https://github.com/CaddonThaw/lvgl-games.git
    ```

## 2. 运行游戏示例
- 在 `ui.cpp(example)` 中包含头文件：                   
    ```
    #include "lvgl-games.h"
    ```
- 运行 `2048小游戏` 示例：
    ```
    lv_obj_t * game2048 = lv_ovject_create(lv_scr_act());
    game2048_update(game2048);
    ```
- 运行 `羊了个羊` 示例：
    ```
    lv_obj_t* yang = lv_obj_create(lv_scr_act());
    yang_update(yang);
    ```
- 运行 `消消乐` 示例：
    ```
    lv_obj_t* xiaoxiaole = lv_obj_create(lv_scr_act());
    xiaoxiaole_update(xiaoxiaole);
    ```
- 运行 `植物大战僵尸` 示例：        
    ```
    lv_obj_t* pvz = lv_obj_create(lv_scr_act());
    pvz_update(pvz);
    ```

