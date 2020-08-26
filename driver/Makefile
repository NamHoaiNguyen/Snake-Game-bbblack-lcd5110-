obj-m := lcd_driver.o
lcd_driver-objs := lcd_ctrl.o lcd_5110.o

obj-m += button_ctrl.o

all:
	#make -C /lib/modules/$(shell uname -r)/build M=$(DIR)/driver modules
	make -C /lib/modules/$(shell uname -r)/build M=$(PWD) modules
clean:
	#make -C /lib/modules/$(shell uname -r)/build M=$(DIR)/driver clean
	make -C /lib/modules/$(shell uname -r)/build M=$(PWD) clean 
