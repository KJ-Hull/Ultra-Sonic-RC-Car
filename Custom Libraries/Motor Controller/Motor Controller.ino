const int intMotA1 = 32;
const int intMotA2 = 33;
const int intMotB1 = 25;
const int intMotB2 = 26;

void setup() {
  // put your setup code here, to run once:
  pinMode(intMotA1, OUTPUT);
  pinMode(intMotA2, OUTPUT);
  pinMode(intMotB1, OUTPUT);
  pinMode(intMotB2, OUTPUT);
  digitalWrite(intMotA1, LOW);
  digitalWrite(intMotA2, LOW);
  digitalWrite(intMotB1, LOW);
  digitalWrite(intMotB2, LOW);

  Serial.begin(115200);
  
}

void loop() {
  // put your main code here, to run repeatedly:
  char userInput;

  while (Serial.available()){
    userInput = Serial.read();
    digitalWrite(intMotA1, LOW);

    if (userInput == '1'){
      Forward();
    }else if (userInput == '2'){
        Reverse();
    }else if (userInput == '3'){
        Stop();
    }

  }
}

void Forward(){
  Serial.println("Forward");
  digitalWrite(intMotA1, HIGH);
  digitalWrite(intMotA2, LOW);
  digitalWrite(intMotB1, HIGH);
  digitalWrite(intMotB2, LOW);
}

void Reverse(){
  Serial.println("Reverse");
  digitalWrite(intMotA1, LOW);
  digitalWrite(intMotA2, HIGH);
  digitalWrite(intMotB1, LOW);
  digitalWrite(intMotB2, HIGH);
}

void Stop(){
  Serial.println("Stop");
  digitalWrite(intMotA1, LOW);
  digitalWrite(intMotA2, LOW);
  digitalWrite(intMotB1, LOW);
  digitalWrite(intMotB2, LOW);
}
