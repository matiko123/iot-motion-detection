# iot-motion-detection

# Required devices
1.Nodemcu ESP8266  (WIFI supportive circuit board)
2.PIR (Motion detector)
3.Jumper wires (Connecting PIR and Nodemcu)
4.USB cable (Powering and programming nodemcu)

NB:images are listed in the folder named images with their respective names

# Working
1.PIR detects motion and sends signals to nodemcu
2.Nodemcu receives the signals and switch on the LED for about 50ms then off. 

# connection
PIR sensor	  NodeMCU ESP8266
VCC	       ->   VIN (5V)
OUT        ->   D5 (GPIO14)
GND        ->   GND

# application
1.This setup can act as alarming system on sensitive environment where there's minimum/no expectation of movements.
2.On automated housing where light can go on and off based on movents. Eg. Toilets and Corridors. 

# adjustments
1.LED can be replaced with large light source
   Additional Resources :
    i.Switch (On and off based on signal from PIR)
2.Nodemcu can be intergrated with api and send real time message to remote management personnel
   Additional Resources :
     i.Stable network provision eg wifi/router
     ii.API that will be responsible to handle message submission logics on alert trigger