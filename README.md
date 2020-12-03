# Snake Game using lcd5110 and beaglebone-black

# Installation

Connect lcd-5110 and buttons with beaglebone: <br/>
* RST : GPIO47	<br/>
* CE  : GND		<br/>
* Dc  : GPIO45	<br/>
* Din : GPIO69	<br/>
* CLK : GPIO66	<br/>
* VCC : VCC	<br/>
* HL  : GND(or VCC)	<br/>
* GND : GND	<br/>
* BUTTON_LEFT : GPIO44	<br/>
* BUTTON_RIGHT : GPIO26	<br/>
* BUTTON_UP : GPIO46	<br/>
* BUTTON_DOWN : GPIO65	<br/>



```
1.Run Makefile into "driver" and "user" folder
2.Sudo insmod lcd_driver.ko
3.Sudo chmod 777 /dev/framebuf
4.Sudo insmod button_ctrl.ko
5.Sudo chmod 777 /dev/buttons
6. ./snake "speed" button (with speed is an unsigned integer)
```
Note: With "test" folder, to linking with library, run: gcc -o lcd lcd.c -L/pathto_"lib"_folder -llcd_lib


