void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  Serial.flush();
  // put your main code here, to run repeatedly:
  char key;

  if (Serial.available() > 0){
    key = Serial.read();
    //Serial.print("You typed: ");
    //Serial.println(key);
    
    if(key == 119){
      //motor moves forward
      Serial.println("Up");
    }
    if(key == 97){
      //motor moves left
      Serial.println("Left");
    }
    if(key == 115){
      //motor moves down
      Serial.println("Down");
    }
    if(key == 100){
      //motor moves right
      Serial.println("Right");
    }
    
  }

}
