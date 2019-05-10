/*
  Project for the school
*/
 
private int[][] pins = [[0,1,2,3,4,5,6], [0,1,2,3,4,5,6], [0,1,2,3,4,5,6], [0,1,2,3,4,5,6], [0,1,2,3,4,5,6], [0,1,2,3,4,5,6]];
 
private int currentPin, timer;
 
void setup() {
   for(int i = 0; i < 6; i++)pinMode(i, OUTPUT);
     pinMode(7, INPUT);
 
   currentPin = 0;
   timer = 0;
}
 
void loop() {
     for(int i = 0; i < 6; i++)
     digitalWrite(pins[currentPin][i], 0);
    for(int i = 0; i < pins[currentPin].length; i++)
    digitalWrite(pins[currentPin][i], 1);
   
   
    if(digitalRead(7) == 1){
      if(timer == 3){
        currentPin = 5;
        return;
      }
   
           if(currentPin == currentPins.length-1)currentPin = 0;
      else currentPin++;
      timer++;
      return;
    }
    timer = 0;
}