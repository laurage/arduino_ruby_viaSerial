require 'serialport'

port_str = '/dev/ttyACM0'  #found at the bottom right of the arduino IDE (usb port to which connected)
baud_rate = 9600
data_bits = 8
stop_bits = 1
parity = SerialPort::NONE

sp = SerialPort.new(port_str, baud_rate, data_bits, stop_bits, parity)

while(true) do

  # READ
  message = sp.gets
  p message unless message.nil?



  # WRITE
  # sp.write('1')
  # p 'yo'



end
