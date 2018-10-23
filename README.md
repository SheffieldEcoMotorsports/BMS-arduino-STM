# I2C communication with the BMS

These scripts provide means to communicate with the custom made battery management system (BMS) via I2C.

Communication is required to both write to and read from registers at the BMS. One may required to write to registers during the initial configuration of the board and afterwards to change between charging and discharging modes. One may require to read from the BMS during the race to check for the amount of battery left and other safety critical parameters such as current and voltage draw and the temperature of the battery.

Either the Arduino or STM code must be integrated with the sensor system or the motor controller to be able to check for these safety critical parameters during the race and prevent the motor from spinning at the event of a safety violation.

Code developed by Sheffield Eco Motorsports.