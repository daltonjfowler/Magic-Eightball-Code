//What will my six month old do today?
//A magic eightball program

int buttonState = 0;  //create an integer to hold a 1 or 0. 1 = button pressed, 0 = button not pressed
int buttonPin = 2;    //hold location of our button in D2
int roll = 0;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);         //start serial monitor with a refresh rate of 9600
  pinMode(buttonPin, INPUT);  //set our buttonPin to an INPUT
}

void loop() {
  // put your main code here, to run repeatedly:
  buttonState = digitalRead(buttonPin);  //read a 1 or 0 from button, save to buttonState
  if (buttonState == 1) {                //is our button pressed?
    roll = random(1, 6);                 //generate random number
    Serial.println("What will my six month old baby do today?");
    delay(500); // half second delay for effect
    Serial.println("..........."); //formatting for display
    delay(500);
    if (roll == 1) {
      Serial.println("....cry!");
    }
    if (roll == 2) {
      Serial.println("....drink milk!");
    }
    if (roll == 3) {
      Serial.println("....tummy time!");
    }
    if (roll == 4) {
      Serial.println("....long nap!");
    }
    if (roll == 5) {
      Serial.println("....short nap!");
    }
    if (roll == 6) {
      Serial.println("....face grab!");
    }
  }
}
