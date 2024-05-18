/**
  ******************************************************************************
  * @file    main.c
  * @author  Ac6
  * @version V1.0
  * @date    01-December-2013
  * @brief   Default main function.
  ******************************************************************************
*/


#include "lvgl.h"
#include "app_hal.h"

#include "demos/lv_demos.h"

int main(void)
{
    lv_init();
    hal_setup();
    #if LV_USE_DEMO_BENCHMARK
    lv_demo_benchmark_set_max_speed(true);
    lv_demo_benchmark();
    #elif LV_USE_DEMO_WIDGETS
    lv_demo_widgets();
    #elif LV_USE_DEMO_STRESS
    lv_demo_stress();
    #elif LV_USE_DEMO_MUSIC
    lv_demo_music();
    #endif
    hal_loop();
}
