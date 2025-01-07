import serial
import time

# Replace 'COM3' with your Arduino's COM port
serial_port = "COM5"
baud_rate = 9600  # Match the baud rate in your Arduino sketch

try:
    # Open the serial port
    with serial.Serial(serial_port, baud_rate, timeout=1) as ser:
        print(f"Connected to {serial_port} at {baud_rate} baud.")
        time.sleep(2)  # Wait for the connection to stabilize
        
        while True:
            # Read a line of data and decode it
            line = ser.readline().decode('utf-8').strip()
            if line:
                print(f"Received: {line}")
except Exception as e:
    print(f"Error: {e}")

