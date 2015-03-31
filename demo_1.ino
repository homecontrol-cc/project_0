/*
  DEMO #1.0
  MARCO BOSCHINI
  31/01/2015
  
  - BLINK LED STATUS
  - BLINK LED SU PANNELLO
  - PREMENDO IL PULSANTE SU PANNELLO SI DEVE ACCENDERE IL LED E RELè CORRISPONDENTE
  
 */
 

int status1 = 39;
int status2 = A0;

int P1 = 10;
int P2 = 11;
int P3 = 12;
int P4 = 13;

int R1_SET = 30;
int R1_RESET = 31;

int R2_SET = 32;
int R2_RESET = 33;

int R3_SET = 34;
int R3_RESET = 35;

int R4_SET = 36;
int R4_RESET = 37;

int val = 0;

// the setup routine runs once when you press reset:
void setup() {   
  
  // init I/O digitali
  
  pinMode(status1, OUTPUT);     
  pinMode(status2, OUTPUT); 
  
  pinMode(P1, INPUT); 
  pinMode(P2, INPUT); 
  pinMode(P3, INPUT); 
  pinMode(P4, INPUT); 
  
  pinMode(R1_SET, OUTPUT); 
  pinMode(R1_RESET, OUTPUT); 
  
  pinMode(R2_SET, OUTPUT); 
  pinMode(R2_RESET, OUTPUT); 
  
  pinMode(R3_SET, OUTPUT); 
  pinMode(R3_RESET, OUTPUT); 
  
  pinMode(R4_SET, OUTPUT); 
  pinMode(R4_RESET, OUTPUT); 

  // init seriale console
  
  Serial.begin(9600);
  
}

// the loop routine runs over and over again forever:
void loop() {
  
  digitalWrite(status1, HIGH);   // turn the LED on (HIGH is the voltage level)
  digitalWrite(status2, LOW);   // turn the LED on (HIGH is the voltage level)
  delay(1000);               // wait for a second
  
  digitalWrite(status1, LOW);   // turn the LED on (HIGH is the voltage level)
  digitalWrite(status2, HIGH);   // turn the LED on (HIGH is the voltage level)
  
  // pulsante 1 >> relè 1
  val = digitalRead(P1);
  if(P1 == HIGH){
    digitalWrite(R1_SET, HIGH);
  }else{
    digitalWrite(R1_RESET, HIGH);
  }
  
  // pulsante 2 >> relè 2
  val = digitalRead(P2);
  if(P2 == HIGH){
    digitalWrite(R2_SET, HIGH);
  }else{
    digitalWrite(R2_RESET, HIGH);
  }

  // pulsante 3 >> relè 3
  val = digitalRead(P3);
  if(P3 == HIGH){
    digitalWrite(R3_SET, HIGH);
  }else{
    digitalWrite(R3_RESET, HIGH);
  }
  
  // pulsante 4 >> relè 4
  val = digitalRead(P4);
  if(P4 == HIGH){
    digitalWrite(R4_SET, HIGH);
  }else{
    digitalWrite(R4_RESET, HIGH);
  }
 
  delay(1000);
  
  //reset comandi relè
  digitalWrite(R1_SET, LOW);
  digitalWrite(R1_RESET, LOW);
  
  digitalWrite(R2_SET, LOW);
  digitalWrite(R2_RESET, LOW);
  
  digitalWrite(R3_SET, LOW);
  digitalWrite(R3_RESET, LOW);
  
  digitalWrite(R4_SET, LOW);
  digitalWrite(R4_RESET, LOW);
  
  //scrittura seriale console
  Serial.println("LOOP");

}
