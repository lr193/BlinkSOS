const int ledPin = 13;

void setup() {
  Serial.begin(9600);
  pinMode(ledPin , OUTPUT);
}

void loop() {

  // Start of letter S
  //Assuming one unit is 500 ms
  //Interval between parts of the same letters is 1 unit , hence 500ms
  
  digitalWrite(ledPin, HIGH); 
  delay(500); 
  digitalWrite(ledPin, LOW); 
  delay(500); 
  digitalWrite(ledPin, HIGH); 
  delay(500);
  digitalWrite(ledPin, LOW); 
  delay(500); 
  digitalWrite(ledPin, HIGH); 
  delay(500); 
  digitalWrite(ledPin, LOW); 
  delay(1500); //3 units between each letter
  Serial.println("End of first letter S");

  //Letter 'O' is three dashed lines , a single dashed line is equal to 3 units , there 1500ms
  digitalWrite(ledPin , HIGH);
  delay(1500);
  digitalWrite(ledPin , LOW);
  delay(500);
  digitalWrite(ledPin , HIGH);
  delay(1500);
  digitalWrite(ledPin , LOW);
  delay(500);
  digitalWrite(ledPin , HIGH);
  delay(1500);
  digitalWrite(ledPin , LOW);
  delay(1500); //Interval between letters
  Serial.println("End of second letter O");
  
  digitalWrite(ledPin, HIGH); 
  delay(500); 
  digitalWrite(ledPin, LOW); 
  delay(500); 
  digitalWrite(ledPin, HIGH); 
  delay(500);
  digitalWrite(ledPin, LOW); 
  delay(500); 
  digitalWrite(ledPin, HIGH); 
  delay(500); 
  digitalWrite(ledPin, LOW); 
  delay(3500); //End of the word SOS , hence the interval between words or at the end of a word is 7 units (500 * 7 = 3500)
  Serial.println("End of third letter S");

}
