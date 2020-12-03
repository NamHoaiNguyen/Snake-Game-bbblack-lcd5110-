#S nake Game using lcd5110 and beaglebone-black

# Installation

Connect lcd-5110 and buttons with beaglebone: <br/>
	## 1.RST : GPIO47	<br/>
        ## 2.CE  : GND		<br/>
        ## 3.Dc  : GPIO45	<br/>
        ## 4.Din : GPIO69	<br/>
        ## 5.CLK : GPIO66	<br/>
        ## 6.VCC : VCC	<br/>
        ## 7.HL  : GND(or VCC)	<br/>
        ## 8.GND : GND	<br/>
        ## 9.BUTTON_LEFT : GPIO44	<br/>
        ## 10.BUTTON_RIGHT : GPIO26	<br/>
        ## 11.BUTTON_UP : GPIO46	<br/>
        ## 12.BUTTON_DOWN : GPIO65	<br/>



```
	## 1.Run Makefile into "driver" and "user" folder
	## 2.Sudo insmod lcd_driver.ko
	## 3.Sudo chmod 777 /dev/framebuf
	## 4.Sudo insmod button_ctrl.ko
	## 5.Sudo chmod 777 /dev/buttons
	## 6. ./snake "speed" button (with speed is an unsigned integer)
```
Note: With "test" folder, to linking with library, run: gcc -o abc abc.o -L/pathto_"lib"_folder -llcd_lib


