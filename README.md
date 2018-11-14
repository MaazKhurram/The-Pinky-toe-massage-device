# The-Pinky-toe-massage-device
A fun little device that helps my father relax by massaging his pinky toe.


The Pinky Toe Pressing Device
Project description"The Pinky Toe Pressing Device" is one of my favourite and most detailed creations yet. 

Motivation behind building this device: My father , a senior teacher and aged 65 now, loved when I pressed his pinky toe after he came from work everyday . For some reason , it was extremely relaxing for him and he would immediately go to sleep after I pressed his toe for a couple of minutes. I had been doing this since childhood but before coming to University of Calgary , I knew that no one back in Qatar would be there to press his pinky toe , so I made this device , hence helping him feel relaxed after I come to Calgary and also serve as a good memory of my passion for Electronics.

Device Details:
The device uses two servos , a couple of gears , an Arduino Nano and a frame which fits completely on my father's feet. The most interesting thing about this device is that it doesn't just press and release the pinky linearly . The amount of force applied by the servo while pressing initially is large but it decreases as the amplitude of the servo increases. At maximum amplitude , the net force becomes zero and servo just stays in it's position for some time. Then it starts releasing the toe by decreasing servo amplitude with little force initially and then exponentially as the servo amplitude approaches back to 0 . 

I also plotted the Force VS. Amplitude graph by using the "y=e^(x-1)" function. The x-axis represents amplitude while y-axis represents force. By employing this graph , I ensured that the relationship between force and amplitude is exponential and not linear just the way my father would like. 

Additionally , I also used potentiometers to the device which allows him to select between different speeds and intensity of pressing . The device is powered by using a 9V battery , power bank or a 5V adapter. I also programmed a timer selection so that the device presses the pinky for that particular time period and then goes to energy-saving mode.
