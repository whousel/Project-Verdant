# Project-Verdant - Decisions





**I plan to replace my current water level sensors with side-mounted float switches -**  This will let me track the water level more accurately, track larger changes in the water level, and allow me to skip the stabilization period associated with my current water level sensor. The float switch will provide a much simpler and immediate indication of the level of water remaining in the reservoir.



**I am using a capacitive soil moisture sensor instead of a resistive sensor -** This is because the capacitive soil moisture sensor is much more accurate than the resistive sensor, and the resistive sensor is prone to electrolysis due to conductive probes exposed directly to soil. This switch should greatly improve the lifespan of the soil moisture sensor.



**I am using 2 2.5-quart storage containers to hold the soil and water, respectively -** I chose to stack and use these two containers because they felt like they were of much better quality than the standard 2.5-quart plastic containers, and because they were made to be stacked. Their improved durability allows me to drill into and modify the containers without fear of their collapse, and it gives me confidence in putting relatively heavy objects in them over extended periods without significant wear.



**I distributed the water across multiple openings in the tubing -** I wanted to avoid concentrating the pump’s output in one location, which could disturb the growing medium and cause uneven watering. Distributing the water across multiple openings allows the water to spread across the growing area more evenly. This design is functional for the current prototype, but I plan to replace it with a more consistent watering method in a future version because manually creating and sizing the openings is difficult to reproduce consistently.



**I added nails to guide the watering tubing over the planter walls -** When the pump starts or stops, the water pressure temporarily changes and water can run along the outside of the tubing instead of exiting through the intended holes. Without a guide, this water could run over the edge of the planter and onto the surrounding surface. The nails guide the tubing over the planter so that any water following the outside of the tubing remains within the growing area.



**I added a clear acetate splash shield around the electronics -** During testing, a sudden increase in water pressure caused water to spray throughout the system and damaged an Arduino. I added the splash shield to prevent water from reaching the electronics if another pressure-related issue occurs. Although later improvements reduced the likelihood of water escaping the intended area, I decided to keep the splash shield as an additional layer of protection.



**I am using a MicroSD card for data logging instead of wireless data transfer -** I chose MicroSD logging because it allows the system to record data without requiring Wi-Fi, a network connection, or a separate application. This keeps the system simpler and easier to deploy while still allowing me to collect and analyze data after testing. The MicroSD module was also inexpensive and straightforward to integrate with the Arduino Nano.



**I am using an Arduino Nano as the primary microcontroller -** The Nano provides enough inputs and outputs for the sensors, pump control, LED, and MicroSD module used in this project while being significantly smaller and less expensive than larger Arduino boards. The additional capabilities of a larger board were not necessary for the requirements of Version 1.









