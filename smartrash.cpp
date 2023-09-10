/////Json
#include <ArduinoJson.h>
const int TAMANHO = 50;  //define o tamanho do buffer para o json

int greenPin = 13;
int yellowPin = 12;
int orangePin = 11;
int redPin = 10;
int whitePin = 9;
int potPin = A0; // Pino analógico do potenciômetro
int inches = 0;
int cm = 0;

long readUltrasonicDistance(int triggerPin, int echoPin){
  pinMode(triggerPin, OUTPUT);  // Clear the trigger
  digitalWrite(triggerPin, LOW);
  delayMicroseconds(2);
  // Sets the trigger pin to HIGH state for 10 microseconds
  digitalWrite(triggerPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(triggerPin, LOW);
  pinMode(echoPin, INPUT);
  // Reads the echo pin, and returns the sound wave travel time in microseconds
  return pulseIn(echoPin, HIGH);
}

void setup() {
  pinMode(greenPin, OUTPUT);
  pinMode(yellowPin, OUTPUT);
  pinMode(orangePin, OUTPUT);
  pinMode(redPin, OUTPUT);
  pinMode(whitePin, OUTPUT);
  Serial.begin(9600); // Inicia a comunicação serial
}

void loop() {
  StaticJsonDocument<TAMANHO> json; //Aloca buffer para objeto json
  int potValue = analogRead(potPin); // Lê a leitura analógica do potenciômetro
  float force = potValue; // Calcula a força com base no valor do potenciômetro
  Serial.print("Force: ");
  Serial.print(force);
  Serial.println(" N");
  // measure the ping time in cm
  cm = 0.01723 * readUltrasonicDistance(7, 6);
  // convert to inches by dividing by 2.54
  inches = (cm / 2.54);
  Serial.print(cm);
  Serial.println("cm");
  delay(100); // Wait for 100 millisecond(s)

   //formato de escrita do json
  json["dist"] = cm;
  json["peso"] = force;

  serializeJson(json, Serial);
  Serial.println();
  
  delay(500);
  if (force < 205 && cm > 100.0){ 
    digitalWrite(greenPin, HIGH);
    digitalWrite(yellowPin, LOW);
    digitalWrite(orangePin, LOW);
    digitalWrite(redPin, LOW);
    digitalWrite(whitePin, LOW);
  } else if (force < 410 && cm > 50.0){ 
    digitalWrite(greenPin, LOW);
    digitalWrite(yellowPin, HIGH);
    digitalWrite(orangePin, LOW);
    digitalWrite(redPin, LOW);
    digitalWrite(whitePin, LOW);
  } else if (force < 615 && cm > 30.0){ 
    digitalWrite(greenPin, LOW);
    digitalWrite(yellowPin, LOW);
    digitalWrite(orangePin, HIGH);
    digitalWrite(redPin, LOW);
    digitalWrite(whitePin, LOW);
  } else { 
    digitalWrite(greenPin, LOW);
    digitalWrite(yellowPin, LOW);
    digitalWrite(orangePin, LOW);
    digitalWrite(redPin, HIGH);
    digitalWrite(whitePin, HIGH); 
    delay(200); 
    digitalWrite(whitePin, LOW); 
    delay(200);
  }
}