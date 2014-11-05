#include <ch.h>
#include <hal.h>


#define toggle(a, b, c) {	palSetPad((a), (b));    chThdSleepMilliseconds((c));     palClearPad((a), (b));     chThdSleepMilliseconds((c)); }

int main(void) {
  halInit();
  chSysInit();

  palSetPadMode(GPIOB, 3, PAL_MODE_OUTPUT_PUSHPULL);
  palSetPadMode(GPIOB, 4, PAL_MODE_OUTPUT_PUSHPULL);
  palSetPadMode(GPIOB, 5, PAL_MODE_OUTPUT_PUSHPULL);
  palSetPadMode(GPIOB, 10, PAL_MODE_OUTPUT_PUSHPULL);
  palSetPadMode(GPIOB, 11, PAL_MODE_OUTPUT_PUSHPULL);
  palSetPadMode(GPIOB, 12, PAL_MODE_OUTPUT_PUSHPULL);
  palSetPadMode(GPIOB, 13, PAL_MODE_OUTPUT_PUSHPULL);
  palSetPadMode(GPIOB, 14, PAL_MODE_OUTPUT_PUSHPULL);
  palSetPadMode(GPIOB, 15, PAL_MODE_OUTPUT_PUSHPULL);
  palSetPadMode(GPIOB, 9, PAL_MODE_OUTPUT_PUSHPULL);
  palSetPadMode(GPIOA, 10, PAL_MODE_OUTPUT_PUSHPULL);
  palSetPadMode(GPIOB, 8, PAL_MODE_OUTPUT_PUSHPULL);
  palSetPadMode(GPIOB, 7, PAL_MODE_OUTPUT_PUSHPULL);
  palSetPadMode(GPIOA, 1, PAL_MODE_OUTPUT_PUSHPULL);
  palSetPadMode(GPIOA, 2, PAL_MODE_OUTPUT_PUSHPULL);
  palSetPadMode(GPIOA, 3, PAL_MODE_OUTPUT_PUSHPULL);
  palSetPadMode(GPIOA, 10, PAL_MODE_OUTPUT_PUSHPULL);
  palSetPadMode(GPIOA, 9, PAL_MODE_OUTPUT_PUSHPULL);
  palSetPadMode(GPIOA, 8, PAL_MODE_OUTPUT_PUSHPULL);
  palSetPadMode(GPIOA, 15, PAL_MODE_OUTPUT_PUSHPULL);
  palSetPadMode(GPIOC, 11, PAL_MODE_OUTPUT_PUSHPULL);
  palSetPadMode(GPIOC, 10, PAL_MODE_OUTPUT_PUSHPULL);
  palSetPadMode(GPIOC, 9, PAL_MODE_OUTPUT_PUSHPULL);
  palSetPadMode(GPIOC, 8, PAL_MODE_OUTPUT_PUSHPULL);
  palSetPadMode(GPIOC, 7, PAL_MODE_OUTPUT_PUSHPULL);
  palSetPadMode(GPIOC, 6, PAL_MODE_OUTPUT_PUSHPULL);
  palSetPadMode(GPIOC, 3, PAL_MODE_OUTPUT_PUSHPULL);
  palSetPadMode(GPIOC, 2, PAL_MODE_OUTPUT_PUSHPULL);
  palSetPadMode(GPIOC, 1, PAL_MODE_OUTPUT_PUSHPULL);

  while (1) {
   toggle(GPIOB,7,500);
   toggle(GPIOB,15,500);
   toggle(GPIOB,9,500);
   toggle(GPIOB,10,500);
   toggle(GPIOB,11,500);
   
   toggle(GPIOA,7,500);
   toggle(GPIOA,15,500);
   toggle(GPIOA,9,500);
   toggle(GPIOA,8,500);
   toggle(GPIOA,1,500);
   
   toggle(GPIOC,7,500);
   toggle(GPIOC,6,500);
   toggle(GPIOC,9,500);
   toggle(GPIOC,8,500);
   toggle(GPIOC,1,500);
  }
}
