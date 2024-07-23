# Soil moisture monitoring
*I recently posted a tutorial on YouTube explaining everything you can read in this article. If you are interesting at watching it, here is the video.*

## THEORY
A soil moisture sensor is a tiny device that measures the water level in soil. They can work alone or in automated systems for real-time monitoring, making them crucial for several applications in agriculture, gardening, environmental monitoring, and more.

There are different types of sensors, but we can divide them in two groups: resistance-based and capacitance-based.

![Different types of sensors being shown side-by-side.](https://github.com/lucasfernandoprojects/arduino-soil-moisture-monitoring/blob/main/images/0.png)

The resistance-based devices have two electrodes. When inserted into the soil, these sensors measure the electrical resistance between the electrodes. As the soil moisture increases, its conductivity also increases, so the resistance between the electrodes go down. Then, this change in resistance is converted into a moisture reading.

On the other hand, the capacitance-based sensors measure the dielectric permittivity of the soil. The presence of water in the soil changes its dielectric permittivity, which in turn affects the capacitance of the sensor. Later, this change is measured to determine the soil moisture. 

Now that you understood the principles behind these sensors, it's time to see them working on real projects.

## PROJECTS
First, we’ll build a simple soil moisture monitor with Arduino, according to this [schematics](https://www.tinkercad.com/things/jnLMTXYCo3r-soil-moisture-sensor-schematics).

![Soil moisture monitoring schematics available on Tinkercad.](https://github.com/lucasfernandoprojects/arduino-soil-moisture-monitoring/blob/main/images/1-1.png)

Here’s what you need:

* Arduino board
* Breadboard
* Jumper wires
* Resistance-based soil moisture sensor
* Three LEDs (red, yellow, green)
* Three 220 ohm resistors
* Glass of water 

Connect the 5V and GND ports of the Arduino to the breadboard. Attach the sensor power supply pins to the 5V and GND rows and the signal pin to A5. Set up the LEDs with resistors on the breadboard, connecting them to GND and ports 2, 3, and 4.

<div style="display: flex; flex-wrap: wrap;">
    <img src="https://github.com/lucasfernandoprojects/arduino-soil-moisture-monitoring/blob/main/images/2-1.png" width="400" height="250" style="margin: 10px;">
    <img src="https://github.com/lucasfernandoprojects/arduino-soil-moisture-monitoring/blob/main/images/2-2.png" width="400" height="250" style="margin: 10px;">
    <img src="https://github.com/lucasfernandoprojects/arduino-soil-moisture-monitoring/blob/main/images/2-3.png" width="400" height="250" style="margin: 10px;">
    <img src="https://github.com/lucasfernandoprojects/arduino-soil-moisture-monitoring/blob/main/images/2-4.png" width="400" height="250" style="margin: 10px;">
    <img src="https://github.com/lucasfernandoprojects/arduino-soil-moisture-monitoring/blob/main/images/2-5.png" width="400" height="250" style="margin: 10px;">
    <img src="https://github.com/lucasfernandoprojects/arduino-soil-moisture-monitoring/blob/main/images/2-6.png" width="400" height="250" style="margin: 10px;">
</div>
</br>

Then, access the folder code, download the **_soil-moisture-monitoring.ino_** file and upload it to Arduino.

Let's see our project working. After diving the sensor legs completely into the glass of water, we have an extremely wet situation. Diving only a small part of the sensor, gives us the wet scenario and the system responds accordingly. Now if we remove the sensor from the water, the reading value is so low that the red LED is turned on, indicating a extremely dry scenario.

<div style="display: flex; flex-wrap: wrap;">
    <img src="https://github.com/lucasfernandoprojects/arduino-soil-moisture-monitoring/blob/main/images/3-1.png" width="400" height="250" style="margin: 10px;">
    <img src="https://github.com/lucasfernandoprojects/arduino-soil-moisture-monitoring/blob/main/images/3-2.png" width="400" height="250" style="margin: 10px;">
    <img src="https://github.com/lucasfernandoprojects/arduino-soil-moisture-monitoring/blob/main/images/3-3.png" width="400" height="250" style="margin: 10px;">
    <img src="https://github.com/lucasfernandoprojects/arduino-soil-moisture-monitoring/blob/main/images/3-4.png" width="400" height="250" style="margin: 10px;">
    <img src="https://github.com/lucasfernandoprojects/arduino-soil-moisture-monitoring/blob/main/images/3-5.png" width="400" height="250" style="margin: 10px;">
    <img src="https://github.com/lucasfernandoprojects/arduino-soil-moisture-monitoring/blob/main/images/3-6.png" width="400" height="250" style="margin: 10px;">
</div>

While resistance-based sensors are cheaper, they suffer from corrosion and, therefore, have a short lifespan. That’s why you should not use them in real-life applications. On the other hand, the capacitance-based sensors are usually more expensive, but they are more durable because of the way they work and are manufactured. 

Now that you understood the main differences between these types of sensors, let's get our hands dirty again. We are going to create an irrigation system using a capacitance-based sensor, as you can see in this [schematics](https://www.tinkercad.com/things/1Sk9YUBiSLT-irrigation-system-schematics).

![Irrigation system schematics available on Tinkercad.](https://github.com/lucasfernandoprojects/arduino-soil-moisture-monitoring/blob/main/images/4.png)

For this project, you’ll need:

* Arduino board
* Battery support
* Batteries
* Breadboard
* Capacitance-based soil moisture sensor
* 5V relay module
* Small pump
* Glass of water
* Plant
* Wires 

Connect the relay module to the Arduino and power it with batteries. Attach the water pump to the relay. Connect the soil moisture sensor to the Arduino, and place the sensor in the soil and the pump in water. Upload the **_irrigation-system.ino_** file and watch your automated irrigation system in action.

<div style="display: flex; flex-wrap: wrap;">
    <img src="https://github.com/lucasfernandoprojects/arduino-soil-moisture-monitoring/blob/main/images/5-1.png" width="400" height="250" style="margin: 10px;">
    <img src="https://github.com/lucasfernandoprojects/arduino-soil-moisture-monitoring/blob/main/images/5-2.png" width="400" height="250" style="margin: 10px;">
    <img src="https://github.com/lucasfernandoprojects/arduino-soil-moisture-monitoring/blob/main/images/5-3.png" width="400" height="250" style="margin: 10px;">
    <img src="https://github.com/lucasfernandoprojects/arduino-soil-moisture-monitoring/blob/main/images/5-4.png" width="400" height="250" style="margin: 10px;">
    <img src="https://github.com/lucasfernandoprojects/arduino-soil-moisture-monitoring/blob/main/images/5-5.png" width="400" height="250" style="margin: 10px;">
    <img src="https://github.com/lucasfernandoprojects/arduino-soil-moisture-monitoring/blob/main/images/5-6.png" width="400" height="250" style="margin: 10px;">
    <img src="https://github.com/lucasfernandoprojects/arduino-soil-moisture-monitoring/blob/main/images/5-7.png" width="400" height="250" style="margin: 10px;">
</div>

As you may noticed, every time we send a signal from Arduino port 2, the relay will close the water pump circuit and, then, water will flow to irrigate the plant. When we stop this signal, the water pump will turn off. The sensor readings will inform Arduino when is the right time to start or stop the signal from port 2.

If you power the Arduino board continuously and add water to the reservoir from time to time, your irrigation system will work non-stop. That's the principle at building fully automated irrigation systems.

## CONCLUSION

Thank you for reading this tutorial. If you liked it, you will probably enjoy the [article](https://github.com/lucasfernandoprojects/arduino-alarm-system) that I wrote about ultrasonic sensors and how to build an alarm system with them. 

