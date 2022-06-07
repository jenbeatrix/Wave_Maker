# Wave Maker Using a 775 High-speed High Torque DC Motor (Version # 1)
The Wave maker basically generates the waves in the wave tank using a motor. An L298N Motor Driver Module is used to control the speed of the motor. This version of the wave maker is controlled by typing a specific number on the serial monitor, thus the speed of the motor will depend on the choice of the user. The wave maker's mechanism duration is about 30 seconds.

For PWM minimum and maximum values are from 0 to 255

Choose speed for the motor

1 = 130 rpm

2 = 150 rpm

3 = 180 rpm

4 = 210 rpm

5 = 240 rpm

6 = 255 rpm

Wave maker demonstration:

![image](https://user-images.githubusercontent.com/82814920/172283139-4c65df78-49a4-4f0f-ae16-ee29ce70471f.png)

![wave_maker_demonstration](https://user-images.githubusercontent.com/82814920/170637876-f28c95a1-be15-4bd8-b270-6014386b11c2.gif)

Based on the results, the motor will only move with an RPM of 180-255.

Also it is better to use a PWM Motor Controller or a higher rating Motor Driver Module (to avoid overheating the module and power loss), and a motor equippped with a gearbox.

Photo Shown: Different Wave Maker Setup using a PWM Motor Controller and a motor equipped with a gearbox

![image](https://user-images.githubusercontent.com/82814920/172283209-d42ba314-d11b-45e9-abca-ddc17511baa6.png)

![wave_maker_pwm](https://user-images.githubusercontent.com/82814920/116257387-9750d980-a7a6-11eb-8cc2-b9e5ab547667.gif)

© 2020, Jen Beatrix Maristela (aka jenbeatrix), All rights reserved.
