const int ledPin = 9;       // LED connected to digital pin 9 - LED dijital 9 numaralı pine bağlı
const int buttonPin = 10;    // Button connected to digital pin 10 - Buton dijital 10 numaralı pine bağlı

void setup() {
  pinMode(ledPin, OUTPUT);      // Set LED pin as an output - LED pinini çıkış olarak ayarla
  pinMode(buttonPin, INPUT);    // Set button pin as an input (Pull-down) - Buton pinini giriş olarak ayarla (Pull-down)
}

void loop() {
  // Read the digital value from the button - Butondan dijital değeri oku
  int deger = digitalRead(buttonPin);

  // In a Pull-down circuit, HIGH means the button is pressed.
  // Pull-down devresinde, HIGH butona basıldığı anlamına gelir.
  if (deger == HIGH)
  {
    digitalWrite(ledPin, HIGH); // Turn the LED ON - LED'i YAK
  }
  else
  {
    digitalWrite(ledPin, LOW);  // Turn the LED OFF - LED'i SÖNDÜR
  }
}
