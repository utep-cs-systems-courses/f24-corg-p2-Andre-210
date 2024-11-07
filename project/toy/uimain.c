#include <msp430.h>
#include "libTimer.h"
#include "led.h"
#include "switches.h"
// #include "buzzer.h"

int main(void) {
  configureClocks();
  switch_init();              // initialize switches
  led_init();                 // initialize leds
  // buzzer_init();           // initialize buzzer

  green_on();                 // turn on green led
  enableWDTInterrupts();      // enable WatchDog Timer interrupts

  or_sr(0x18);                // CPU off,GIE on
}
