int diceBtn = 2;
int groupBtn = 3;
int studentsBtn = 4;
char *leerlingen[] = {"Koen", "Clint", "Dion", "Bram", "Sherman", "Morando"};
int customBtn = 5;
int tiltSensor = 6;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(tiltSensor, INPUT);
  pinMode(diceBtn, INPUT);
  pinMode(groupBtn, INPUT);
  pinMode(studentsBtn, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:  
  if(digitalRead(diceBtn) == HIGH){
    int rnd = random(1,7);    
    Serial.println(rnd);
    delay(1000);
  }
  if(digitalRead(groupBtn) == HIGH){    
    int i = random(0,2);
    Serial.println(leerlingen[i]);
    delay(1000);
  }
  if(digitalRead(studentsBtn) == HIGH){    
    int i = random(2,5);
    Serial.println(leerlingen[i]);
    delay(1000);
  }
  if(digitalRead(tiltSensor) == HIGH){    
    Serial.println("MUDA");
  }
  if(digitalRead(customBtn) == HIGH){    
    Serial.println("KAAS");
  }
}
