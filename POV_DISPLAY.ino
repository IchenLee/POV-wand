/*
 * This Code demonstrate 
 * LED POV DISPLAY 
 * 
 * components used 
 * 1) Arduino Nano
 * 2) DC motor
 * 3) LEDs
 * 4) IR sensor
 * 5) Battery
 * 6) Wire
 * 
 * connect leds on 2 to 9 digital pin of Nano
 * IR sensor out pin connect on 10 digital pin of Nano
 * 
 * code written by Palak Mehta on March 29,2019
*/
////////////////////////design a pattern of display the number and alphabates//////////////////////////////// 

int NUMBER9[]={1,1,1,1,0,0,0,1, 1,0,0,1,0,0,0,1, 1,0,0,1,0,0,0,1, 1,0,0,1,0,0,0,1, 1,1,1,1,1,1,1,1};
 int NUMBER8[]={0,1,1,0,1,1,1,0, 1,0,0,1,0,0,0,1, 1,0,0,1,0,0,0,1, 1,0,0,1,0,0,0,1, 0,1,1,0,1,1,1,0};
 int NUMBER7[]={1,0,0,0,0,0,0,0, 1,0,0,0,1,0,0,0, 1,0,0,0,1,0,0,0, 1,0,0,1,1,1,1,1, 1,1,1,0,1,0,0,0};
 int NUMBER6[]={1,1,1,1,1,1,1,1, 1,0,0,0,1,0,0,1, 1,0,0,0,1,0,0,1, 1,0,0,0,1,0,0,1, 1,0,0,0,1,1,1,1};
 int NUMBER5[]={1,1,1,1,1,0,0,1, 1,0,0,0,1,0,0,1, 1,0,0,0,1,0,0,1, 1,0,0,0,1,0,0,1, 1,0,0,0,1,1,1,1};
 int NUMBER2[]= {1,0,0,0,0,0,1,1, 1,0,0,0,0,1,0,1, 1,0,0,0,1,0,0,1, 1,0,0,1,0,0,0,1, 0,1,1,0,0,0,0,1};
 int NUMBER1[]= {0,0,1,0,0,0,0,0, 0,1,0,0,0,0,0,0, 1,1,1,1,1,1,1,1, 0,0,0,0,0,0,0,0, 0,0,0,0,0,0,0,0};
 int NUMBER0[]= {1,1,1,1,1,1,1,1, 1,0,0,0,0,0,0,1, 1,0,0,0,0,0,0,1, 1,0,0,0,0,0,0,1, 1,1,1,1,1,1,1,1};

 int _[] = {0,0,0,0,0,0,0,0, 0,0,0,0,0,0,0,0, 0,0,0,0,0,0,0,0, 0,0,0,0,0,0,0,0, 0,0,0,0,0,0,0,0};
 int A[] = {1,1,1,1,1,1,1,1, 1,0,0,1,0,0,0,0, 1,0,0,1,0,0,0,0, 1,0,0,1,0,0,0,0, 1,1,1,1,1,1,1,1};
 int B[] = {1,1,1,1,1,1,1,1, 1,0,0,1,0,0,0,1, 1,0,0,1,0,0,0,1, 1,0,0,1,0,0,0,1, 0,1,1,0,1,1,1,0};
 int C[] = {0,0,1,1,1,1,0,0, 0,1,0,0,0,0,1,0, 1,0,0,0,0,0,0,1, 1,0,0,0,0,0,0,1, 1,0,0,0,0,0,0,1};
 int D[] = {1,1,1,1,1,1,1,1, 1,0,0,0,0,0,0,1, 1,0,0,0,0,0,0,1, 0,1,0,0,0,0,1,0, 0,0,1,1,1,1,0,0};
 int E[] = {1,1,1,1,1,1,1,1, 1,0,0,1,0,0,0,1, 1,0,0,1,0,0,0,1, 1,0,0,1,0,0,0,1, 1,0,0,1,0,0,0,1};
 int F[] = {1,1,1,1,1,1,1,1, 1,0,0,1,0,0,0,0, 1,0,0,1,0,0,0,0, 1,0,0,1,0,0,0,0, 1,0,0,1,0,0,0,0};
 int G[] = {0,1,1,1,1,1,1,1, 1,0,0,0,0,0,0,1, 1,0,0,0,1,0,0,1, 1,0,0,0,1,0,0,1, 1,0,0,0,1,1,1,0};
 int H[] = {1,1,1,1,1,1,1,1, 0,0,0,0,1,0,0,0, 0,0,0,0,1,0,0,0, 0,0,0,0,1,0,0,0, 1,1,1,1,1,1,1,1};
 int I[] = {1,0,0,0,0,0,0,1, 1,0,0,0,0,0,0,1, 1,1,1,1,1,1,1,1, 1,0,0,0,0,0,0,1, 1,0,0,0,0,0,0,1};
 int J[] = {0,0,0,0,0,1,1,0, 0,0,0,0,1,0,0,1, 0,0,0,0,0,0,0,1, 0,0,0,0,0,0,0,1, 1,1,1,1,1,1,1,0};
 int K[] = {1,1,1,1,1,1,1,1, 0,0,0,1,1,0,0,0, 0,0,1,0,0,1,0,0, 0,1,0,0,0,0,1,0, 1,0,0,0,0,0,0,1};
 int L[] = {1,1,1,1,1,1,1,1, 0,0,0,0,0,0,0,1, 0,0,0,0,0,0,0,1, 0,0,0,0,0,0,0,1, 0,0,0,0,0,0,0,1};
 int M[] = {1,1,1,1,1,1,1,1, 0,1,0,0,0,0,0,0, 0,0,1,0,0,0,0,0, 0,1,0,0,0,0,0,0, 1,1,1,1,1,1,1,1};
 int N[] = {1,1,1,1,1,1,1,1, 0,0,1,0,0,0,0,0, 0,0,0,1,1,0,0,0, 0,0,0,0,0,1,0,0, 1,1,1,1,1,1,1,1};
 int O[] = {0,1,1,1,1,1,1,0, 1,0,0,0,0,0,0,1, 1,0,0,0,0,0,0,1, 1,0,0,0,0,0,0,1, 0,1,1,1,1,1,1,0};
 int P[] = {1,1,1,1,1,1,1,1, 1,0,0,1,0,0,0,0, 1,0,0,1,0,0,0,0, 1,0,0,1,0,0,0,0, 0,1,1,0,0,0,0,0};
 int Q[] = {0,1,1,1,1,1,1,0, 1,0,0,0,0,0,0,1, 1,0,0,0,0,1,0,1, 0,1,1,1,1,1,1,0, 0,0,0,0,0,0,0,1};
 int R[] = {1,1,1,1,1,1,1,1, 1,0,0,1,1,0,0,0, 1,0,0,1,0,1,0,0, 1,0,0,1,0,0,1,0, 0,1,1,0,0,0,0,1};
 int S[] = {0,1,1,1,0,0,0,1, 1,0,0,0,1,0,0,1, 1,0,0,0,1,0,0,1, 1,0,0,0,1,0,0,1, 1,0,0,0,1,1,1,0};
 int T[] = {1,0,0,0,0,0,0,0, 1,0,0,0,0,0,0,0, 1,1,1,1,1,1,1,1, 1,0,0,0,0,0,0,0, 1,0,0,0,0,0,0,0};
 int U[] = {1,1,1,1,1,1,1,0, 0,0,0,0,0,0,0,1, 0,0,0,0,0,0,0,1, 0,0,0,0,0,0,0,1, 1,1,1,1,1,1,1,0};
 int V[] = {1,1,1,1,1,1,0,0, 0,0,0,0,0,0,1,0, 0,0,0,0,0,0,0,1, 0,0,0,0,0,0,1,0, 1,1,1,1,1,1,0,0};
 int W[] = {1,1,1,1,1,1,1,1, 0,0,0,0,0,0,1,0, 0,0,0,0,0,1,0,0, 0,0,0,0,0,0,1,0, 1,1,1,1,1,1,1,1};
 int X[] = {1,1,0,0,0,0,1,1, 0,0,1,0,0,1,0,0, 0,0,0,1,1,0,0,0, 0,0,1,0,0,1,0,0, 1,1,0,0,0,0,1,1};
 int Y[] = {1,1,0,0,0,0,0,0, 0,0,1,0,0,0,0,0, 0,0,0,1,1,1,1,1, 0,0,1,0,0,0,0,0, 1,1,0,0,0,0,0,0};
 int Z[] = {1,0,0,0,0,1,1,1, 1,0,0,0,1,0,0,1, 1,0,0,1,0,0,0,1, 1,0,1,0,0,0,0,1, 1,1,0,0,0,0,0,1};
 
 int* alpha[]= {A,B,C,D,E,F,G,H,I,J,K,L,M,N};//,T,U,V,W,X,Y,Z};
 int letterSpace;
 int delayTime;

 int WordLength = 10;
 int* Word[] = {I,_,E,A,T,_,A,S,S,_};
 int i = 0;
 bool direct = 1;
 int delay_change = 0;
 
 void setup()
 { 
         Serial.begin(9600);       
         pinMode(A1,INPUT);
         for( int i = 2; i<10 ;i++ ) // setting the ports of the leds to OUTPUT
           {
            pinMode(i, OUTPUT);
           }
                
         letterSpace =4;// defining the space between the letters (ms)         
         delayTime =1;// defining the time dots appear (ms)
}


 void printLetter(int letter[])
 {
           int y;
          // printing the first y row of the letter
           for (y=0; y<8; y++)
           {
           digitalWrite(y+2, letter[y]);
           }
           delay(delayTime);
          // printing the second y row of the letter
           for (y=0; y<8; y++)
           {
           digitalWrite(y+2, letter[y+8]);
           }
           delay(delayTime);
          // printing the third y row of the letter
           for (y=0; y<8; y++)
           {
           digitalWrite(y+2, letter[y+16]);
           }
           delay(delayTime);
           for(y = 0; y<8; y++) {
           digitalWrite(y+2, letter[y+24]);
           }
           delay(delayTime);
          for(y = 0; y<8; y++) {
           digitalWrite(y+2, letter[y+32]);
           }
           delay(delayTime);
           // printing the space between the letters
           for (y=0; y<8; y++)
           {
           digitalWrite(y+2, 0);
           }
           delay(letterSpace);
 }

  void printBackwards(int letter[]) // Same as printLetter but reverses the direction the letter is printed to account for a left wave
 {
           int y;
           // printing the space between the letters
           for (y=0; y<8; y++)
           {
           digitalWrite(y+2, 0);
           }
           delay(letterSpace);
           for(y = 0; y<8; y++) {
           digitalWrite(y+2, letter[y+32]);
           }
           delay(delayTime);
           for(y = 0; y<8; y++) {
           digitalWrite(y+2, letter[y+24]);
           }
           delay(delayTime);
           // printing the third y row of the letter
           for (y=0; y<8; y++)
           {
           digitalWrite(y+2, letter[y+16]);
           }
           delay(delayTime);
           // printing the second y row of the letter
           for (y=0; y<8; y++)
           {
           digitalWrite(y+2, letter[y+8]);
           }
           delay(delayTime);
          // printing the first y row of the letter
           for (y=0; y<8; y++)
           {
           digitalWrite(y+2, letter[y]);
           }
           delay(delayTime);
 }

 
 void loop(){
  int acc = analogRead(A1);
  if (acc = 0){ // Changes the direction when the accelerometer hits 0
     direct = !direct;
  }
  if (direct){ //Prints Letter in the correct direction for a right wave
     printLetter (Word[i]);
     i++;
     if (i >= WordLength)
        i = 0;
  }
  else{ // Prints Letter in correct direction for a left wave
     printBackwards(Word[i]);
     i--;
     if (i < 0)
        i = WordLength - 1;
  }
  Serial.println(acc);
}
