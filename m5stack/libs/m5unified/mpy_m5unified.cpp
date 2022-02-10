#define M5ATOMDISPLAY_LOGICAL_WIDTH 320
#define M5ATOMDISPLAY_LOGICAL_HEIGHT 240
#include <M5AtomDisplay.h>
#include <M5UnitOLED.h>
#include <M5UnitLCD.h>
#include <M5Unified.h>

extern "C"
{
  #include "mpy_m5unified.h"

  const btn_obj_t m5_btnA = {{&btn_type}, &(M5.BtnA) };
  const btn_obj_t m5_btnB = {{&btn_type}, &(M5.BtnB) };
  const btn_obj_t m5_btnC = {{&btn_type}, &(M5.BtnC) };
  const btn_obj_t m5_btnPWR = {{&btn_type}, &(M5.BtnPWR) };
  const btn_obj_t m5_btnEXT = {{&btn_type}, &(M5.BtnEXT) };
  const gfx_obj_t m5_display = {{&gfxdevice_type}, &(M5.Display) };

  mp_obj_t m5_begin(void)
  {
    M5.begin();
    return mp_const_none;
  }

  mp_obj_t m5_update(void)
  {
    M5.update();
    return mp_const_none;
  }
}