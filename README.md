#Snake Game using lcd5110 and beaglebone-black

#Installtion

Connect lcd-5110 and buttons with beaglebone:
	## 1.RST : GPIO47	
        ## 2.CE  : GND
        ## 3.Dc  : GPIO45
        ## 4.Din : GPIO69
        ## 5.CLK : GPIO66
        ## 6.VCC : VCC
        ## 7.HL  : GND(or VCC)
        ## 8.GND : GND
        ## 9.BUTTON_LEFT : GPIO44
        ## 10.BUTTON_RIGHT : GPIO26
        ## 11.BUTTON_UP : GPIO46
        ## 12.BUTTON_DOWN : GPIO65


```
	## 1.Run Makefile into "driver" and "user" folder
	## 2.Sudo insmod lcd_driver.ko
	## 3.Sudo chmod 777 /dev/framebuf
	## 4.Sudo insmod button_ctrl.ko
	## 5.Sudo chmod 777 /dev/buttons
	## 6. ./snake "speed" button (with speed is an unsigned integer)
```
Note: With "test" folder, to linking with library, run: gcc -o abc abc.o -L/pathto_"lib"_folder -llcd_lib


