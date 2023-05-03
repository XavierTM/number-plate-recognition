
#include <Servo.h>

String serial_data = "";
Servo gate;

const int GATE_PIN = 4;

void setup() {

   Serial.begin(9600);

   gate.attach(GATE_PIN);
   gate.write(0);


}

void loop() {
   while (Serial.available()) {
      char xter = Serial.read();

      if (xter == ';') {

         if (serial_data == "open")
            open_gate();
         else if (serial_data == "close")
            close_gate();

         serial_data = "";
         break;
      }

      serial_data += xter;
   }
}

void open_gate() {
   gate.write(90);
}


void close_gate() {
   gate.write(0);
}

