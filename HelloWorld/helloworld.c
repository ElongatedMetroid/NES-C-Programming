/*
A simple "hello world" example.
Set the screen background color and palette colors.
Then write a message to the nametable.
Finally, turn on the PPU to display video.
*/

#include "../neslib/neslib.h"

int main(void) {

  // set palette colors
  pal_col(0, 0x02); // set screen to dark blue
  pal_col(1, 0x16); // fuchsia
  pal_col(2, 0x20); // grey
  pal_col(3, 0x30); // white

  // write text to name table
  vram_adr(NTADR_A(10, 10));       // set address
  vram_write("HELLO, WORLD!", 13); // write bytes to video RAM

  // enable PPU rendering (turn on screen)
  ppu_on_all();

  while (1)
    ;

  return 0;
}
