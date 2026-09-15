# \# Project-Verdant

# 

# \## July 8, 2026

# 

Created a GitHub repository, defined a successful version 1, and finished project planning. Tomorrow, I plan to relearn circuit design and how to use analog inputs with an Arduino.

# 

# \# July 9, 2026

# 

Developed code and a working prototype that successfully reads the soil moisture percentage based on tested wet and dry values and turns the pump on or off to maintain adequate soil moisture. Currently facing issues with water depth detection due to non-waterproof components. Ran into issues with the water-level sensor displaying seemingly random values that subsided after a 100 ms delay from when it turned on to its measuring point. Successfully coded and added the water level sensor to the prototype circuit.

# 

# \# July 10, 2026

# 

Sketched the initial version 1 prototype layout. Tested and integrated the water level sensor into the current build. Through testing, I ran into an issue with extremely irregular and unstable readings, which, through more testing, I learned arose from a stabilization period that the current water level sensor required.

# 

# \# July 11, 2026

# 

Designed the prototype housing for Arduino. Encountered repeated issues with the Arduino disconnecting during testing with the new watering system. After many attempts at taking the prototype apart, rewiring, and checking the code, I decided to replace all current parts, which solved the issue. At a later date, I will test each individual sensor and connection to see what caused the issue. Wrote a temporary test program for the pump so that I could see the effectiveness of the new watering system with the new container design. Ran into a kinking problem with the tubing, which I plan to solve using 3d modeled connectors, preventing hard angels better guiding the tubing.

# 

# \# July 12, 2026

# 

Designed the clips to prevent kinking and guide the tubing for the watering system. Bought digital calipers to accurately measure parts for 3d modeling, a micro SD card for which I could log data during extended testing, more vinyl tubing allowing for more testing for different and possibly more efficient watering system designs, side-mounted magnetic float sensors to replace my current subpar water level sensor, and a connector between the Arduino and the micro SD card. Started 3d printing the temporary housing for the Arduino and the tube clips.

# 

# \# July 15, 2026

# 

Redesigned clips to minimize print failures and better route tubing. Prepared tube routing clips for printing.

# 

# \# July 16, 2026

# 

Coded and tested side-mounted magnetic float sensors. Verified the ability to accurately and quickly check for the presence of water. Used code from HuHamster’s YouTube channel to test the MicroSD card module’s ability to save various plant habitat data to an external drive.

# 

# \# July 17, 2026

# 

Overhauled project code to use the new MicroSD card module and side-mounted magnetic float sensors. Lightly cleaned and commented on code to improve readability. Began printing the various tube routing clips.

# 

# \# July 30, 2026

# 

Attached clips to housing and began assembly of prototype 1 v1

# 

# \# July 31, 2026

# 

Purchased a CNC machine to manufacture parts for the build

# 

# \# Aug 1, 2026

# 

Finished assembly of prototype v1. Tested the functionality and documented the following issues: leakage from the side-mounted horizontal float switch, not able to tell if the SD card is behaving correctly, lack of drainage holes, lack of holes in the watering tubing, the pump attachment is not attached securely, need to direct the excess water tubing into the reservoir.

# 

# \# Aug 4, 2026

# 

3d modeled the excess water guide, secure pump attachment, and water drainage tubes. Began printing the CAD models.

# 

# \# Aug 6, 2026

# 

Added an LED indicator acting as a sticky state indicator showing whether the SD card is receiving data correctly.

# 

# \# Aug 8, 2026

# 

Installed new CAD designs onto the apparatus. Redesigned the pump holder, printed a new model, and installed it.

# 

# \# Aug 14, 2026

# 

Started adding holes to the water tubing. Encountered issues with inconsistent water pressure. Holes near the pump sprayed water, while holes at the end of the tubing had water trickling out. When the pump first turns on, the water pressure spikes and sprays water everywhere, soaking my electronics and killing a nano. Unfortunately, the nano showed a white substance, which I found out may be a mineral buildup from the water hitting it directly. Even after cleaning with 91% isopropyl alcohol, the Arduino remained useless and inoperable. Encountered issues: Need a splash shield to protect from water damage, pressure issues, need to improve drainage tubing attachment, need a way to, temporarily, secure the filter to the base of the plant container, current pump clips allow for water to leave the container if pressure is low, and lastly experiencing some issues with a lack of data being written to the SD card that needs to be investigated.

# 

# \# August 16, 2026

# 

Added a clear acetate splash shield to protect the Arduino from water. Kinked the end of the tubing with a zip tie to help even out the water pressure and allow the water to flow more evenly.

# 

# \# August 21, 2026

# 

The kinked tubing solved the low-pressure issue flawlessly. The new higher pressure caused water to spray throughout the system, but the splash shield successfully protected the electronics. Added more holes to the watering tubing to further even out the pressure and water the soil more consistently. Water was sometimes running down the outside of the tubing and flowing over the wall of the planter, so I drilled holes and added nails to guide the tubing over the planter area. This was the first fully successful test where there were no leaks, all water remained contained within the setup, and there were no other issues. The system successfully ran for one minute before I unplugged it. Planned to add soil the following day.

# 

# \# August 25, 2026

# 

It works! Fixed a common disconnection issue that was preventing prolonged testing by modifying the wires connected to the horizontal float switch. Reconstructed a large portion of the unit after it was damaged while moving it into my college dorm. Added soil and successfully tested both the filter and the ability to turn the pump on and off at different soil moisture readings. Added and watered the soil repeatedly until it stopped settling. Modified the splash shield to fit the assembly more securely and make it easier to install. Although the splash shield is no longer required for normal operation, it is still useful as an additional safety measure. Ran a two-minute uninterrupted test five consecutive times without a single issue or drop of water escaping the setup. The SD card was not detected, so these tests could not be logged.

# 

# \# August 26–September 3, 2026

# 

Ran repeated 30–45 minute tests over multiple days to verify the reliability of the system during extended operation. Every test completed successfully without leaks, water escaping the setup, or other system failures. Added data logging to the testing process and completed five logged tests. The data showed stable and consistent soil moisture readings throughout the tests. One extended test showed a gradual decrease in soil moisture from approximately 55% to 48% over roughly 44 minutes without unexpected fluctuations. Additional testing by intentionally removing the soil moisture sensor from the growing medium successfully triggered the watering system, and returning the sensor to the growing medium produced the expected increase in moisture readings.

