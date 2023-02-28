


String serial_data = "";

void setup() {
   Serial.begin(9600);
}

void loop() {
   while (Serial.available()) {
      char xter = Serial.read();

      if (xter == ";") {

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

}


void close_gate() {

}

