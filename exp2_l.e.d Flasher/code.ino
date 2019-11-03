int led_flash=7; 

void setup() {

  pinMode(led_flash, OUTPUT);
}

void loop() {

digitalWrite(led_flash, HIGH);

delay(1000);

digitalWrite(led_flash, LOW);

delay(1000);
}
