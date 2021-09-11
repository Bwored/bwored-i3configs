import psutil
import math
import os

### Variable declarations
# variable battery is defined for easy usage of sensors_battery that is contained within psutil
battery = psutil.sensors_battery()
# variable percentage is defined so i can easily access the amount of battery this laptop has left
percent = str(math.ceil(battery.percent))
# varible status is defined so this laptop knows if the battery is charged or not
status = "(+)"

### functions
if battery.power_plugged == False:
    status = "(-)"
if round(battery.percent) < 15 and battery.power_plugged == False:
    os.system("brightnessctl -q set 15%")

print(percent+status)
