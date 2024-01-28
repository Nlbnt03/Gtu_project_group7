const int buzzer = 12;
#define NOTE_B0  31
#define NOTE_C1  33
#define NOTE_CS1 35
#define NOTE_D1  37
#define NOTE_DS1 39
#define NOTE_E1  41
#define NOTE_F1  44
#define NOTE_FS1 46
#define NOTE_G1  49
#define NOTE_GS1 52
#define NOTE_A1  55
#define NOTE_AS1 58
#define NOTE_B1  62
#define NOTE_C2  65
#define NOTE_CS2 69
#define NOTE_D2  73
#define NOTE_DS2 78
#define NOTE_E2  82
#define NOTE_F2  87
#define NOTE_FS2 93
#define NOTE_G2  98
#define NOTE_GS2 104
#define NOTE_A2  110
#define NOTE_AS2 117
#define NOTE_B2  123
#define NOTE_C3  131
#define NOTE_CS3 139
#define NOTE_D3  147
#define NOTE_DS3 156
#define NOTE_E3  165
#define NOTE_F3  175
#define NOTE_FS3 185
#define NOTE_G3  196
#define NOTE_GS3 208
#define NOTE_A3  220
#define NOTE_AS3 233
#define NOTE_B3  247
#define NOTE_C4  262
#define NOTE_CS4 277
#define NOTE_D4  294
#define NOTE_DS4 311
#define NOTE_E4  330
#define NOTE_F4  349
#define NOTE_FS4 370
#define NOTE_G4  392
#define NOTE_GS4 415
#define NOTE_A4  440
#define NOTE_AS4 466
#define NOTE_B4  494
#define NOTE_C5  523
#define NOTE_CS5 554
#define NOTE_D5  587
#define NOTE_DS5 622
#define NOTE_E5  659
#define NOTE_F5  698
#define NOTE_FS5 740
#define NOTE_G5  784
#define NOTE_GS5 831
#define NOTE_A5  880
#define NOTE_AS5 932
#define NOTE_B5  988
#define NOTE_C6  1047
#define NOTE_CS6 1109
#define NOTE_D6  1175
#define NOTE_DS6 1245
#define NOTE_E6  1319
#define NOTE_F6  1397
#define NOTE_FS6 1480
#define NOTE_G6  1568
#define NOTE_GS6 1661
#define NOTE_A6  1760
#define NOTE_AS6 1865
#define NOTE_B6  1976
#define NOTE_C7  2093
#define NOTE_CS7 2217
#define NOTE_D7  2349
#define NOTE_DS7 2489
#define NOTE_E7  2637
#define NOTE_F7  2794
#define NOTE_FS7 2960
#define NOTE_G7  3136
#define NOTE_GS7 3322
#define NOTE_A7  3520
#define NOTE_AS7 3729
#define NOTE_B7  3951
#define NOTE_C8  4186
#define NOTE_CS8 4435
#define NOTE_D8  4699
#define NOTE_DS8 4978
#define REST      0
int tempo = 120;
const int songspeed = 1.5;
int selection;
const int maxLevel = 9;
const int buttonCount = 9;
const int buttons[buttonCount] = {2, 3, 4, 5, 6, 7, 8, 9, 10};
const int frequencies[buttonCount] = {261, 293, 329, 349, 391, 440, 494, 523, 587};

int length = 28;
char notes[] = "GGAGcB GGAGdc GGxecBA yyecdc";
int beats[] = { 2, 2, 8, 8, 8, 16, 1, 2, 2, 8, 8,8, 16, 1, 2,2,8,8,8,8,16, 1,2,2,8,8,8,16 };
int temporary = 150;
void playTone(int tone, int duration) {
for (long i = 0; i < duration * 1000L; i += tone * 2) {
   digitalWrite(buzzer, HIGH);
   delayMicroseconds(tone);
   digitalWrite(buzzer, LOW);
   delayMicroseconds(tone);
}

}

void playNote(char note, int duration) {
char names[] = {'C', 'D', 'E', 'F', 'G', 'A', 'B',           

                 'c', 'd', 'e', 'f', 'g', 'a', 'b',

                 'x', 'y' };

int tones[] = { 1915, 1700, 1519, 1432, 1275, 1136, 1014,

                 956,  834,  765,  593,  468,  346,  224,

                 655 , 715 };

int SPEE = 5;

// play the tone corresponding to the note name

for (int i = 0; i < 17; i++) {
   if (names[i] == note) {
    int newduration = duration/SPEE;
     playTone(tones[i], newduration);
   }
}
}
const int c = 261;
const int d = 294;
const int e = 329;
const int f = 349;
const int g = 391;
const int gS = 415;
const int a = 440;
const int aS = 455;
const int b = 466;
const int cH = 523;
const int cSH = 554;
const int dH = 587;
const int dSH = 622;
const int eH = 659;
const int fH = 698;
const int fSH = 740;
const int gH = 784;
const int gSH = 830;
const int aH = 880;

int melody[] = {

  REST,2, REST,4, REST,8, NOTE_DS4,8, 
  NOTE_E4,-4, REST,8, NOTE_FS4,8, NOTE_G4,-4, REST,8, NOTE_DS4,8,
  NOTE_E4,-8, NOTE_FS4,8,  NOTE_G4,-8, NOTE_C5,8, NOTE_B4,-8, NOTE_E4,8, NOTE_G4,-8, NOTE_B4,8,   
  NOTE_AS4,2, NOTE_A4,-16, NOTE_G4,-16, NOTE_E4,-16, NOTE_D4,-16, 
  NOTE_E4,2, REST,4, REST,8, NOTE_DS4,4,

  NOTE_E4,-4, REST,8, NOTE_FS4,8, NOTE_G4,-4, REST,8, NOTE_DS4,8,
  NOTE_E4,-8, NOTE_FS4,8,  NOTE_G4,-8, NOTE_C5,8, NOTE_B4,-8, NOTE_G4,8, NOTE_B4,-8, NOTE_E5,8,
  NOTE_DS5,1,   
  NOTE_D5,2, REST,4, REST,8, NOTE_DS4,8, 
  NOTE_E4,-4, REST,8, NOTE_FS4,8, NOTE_G4,-4, REST,8, NOTE_DS4,8,
  NOTE_E4,-8, NOTE_FS4,8,  NOTE_G4,-8, NOTE_C5,8, NOTE_B4,-8, NOTE_E4,8, NOTE_G4,-8, NOTE_B4,8,   
  
  NOTE_AS4,2, NOTE_A4,-16, NOTE_G4,-16, NOTE_E4,-16, NOTE_D4,-16, 
  NOTE_E4,-4, REST,4,
  REST,4, NOTE_E5,-8, NOTE_D5,8, NOTE_B4,-8, NOTE_A4,8, NOTE_G4,-8, NOTE_E4,-8,
  NOTE_AS4,16, NOTE_A4,-8, NOTE_AS4,16, NOTE_A4,-8, NOTE_AS4,16, NOTE_A4,-8, NOTE_AS4,16, NOTE_A4,-8,   
  NOTE_G4,-16, NOTE_E4,-16, NOTE_D4,-16, NOTE_E4,16, NOTE_E4,16, NOTE_E4,2,
 
};

// sizeof gives the number of bytes, each int value is composed of two bytes (16 bits)
// there are two values per note (pitch and duration), so for each note there are four bytes
int notes2 = sizeof(melody) / sizeof(melody[0]) / 2;

// this calculates the duration of a whole note in ms
int wholenote = (60000 * 4) / tempo;

int divider = 0, noteDuration = 0;

int notes3[] = {       
   NOTE_E4, NOTE_G4, NOTE_A4, NOTE_A4, 0, 
   NOTE_A4, NOTE_B4, NOTE_C5, NOTE_C5, 0, 
   NOTE_C5, NOTE_D5, NOTE_B4, NOTE_B4, 0,
   NOTE_A4, NOTE_G4, NOTE_A4, 0,
   
   NOTE_E4, NOTE_G4, NOTE_A4, NOTE_A4, 0, 
   NOTE_A4, NOTE_B4, NOTE_C5, NOTE_C5, 0, 
   NOTE_C5, NOTE_D5, NOTE_B4, NOTE_B4, 0,
   NOTE_A4, NOTE_G4, NOTE_A4, 0,
   
   NOTE_E4, NOTE_G4, NOTE_A4, NOTE_A4, 0, 
   NOTE_A4, NOTE_C5, NOTE_D5, NOTE_D5, 0, 
   NOTE_D5, NOTE_E5, NOTE_F5, NOTE_F5, 0,
   NOTE_E5, NOTE_D5, NOTE_E5, NOTE_A4, 0,
   
   NOTE_A4, NOTE_B4, NOTE_C5, NOTE_C5, 0, 
   NOTE_D5, NOTE_E5, NOTE_A4, 0, 
   NOTE_A4, NOTE_C5, NOTE_B4, NOTE_B4, 0,
   NOTE_C5, NOTE_A4, NOTE_B4, 0,

   NOTE_A4, NOTE_A4, 
   //Repeat of first part
   NOTE_A4, NOTE_B4, NOTE_C5, NOTE_C5, 0, 
   NOTE_C5, NOTE_D5, NOTE_B4, NOTE_B4, 0,
   NOTE_A4, NOTE_G4, NOTE_A4, 0,

   NOTE_E4, NOTE_G4, NOTE_A4, NOTE_A4, 0, 
   NOTE_A4, NOTE_B4, NOTE_C5, NOTE_C5, 0, 
   NOTE_C5, NOTE_D5, NOTE_B4, NOTE_B4, 0,
   NOTE_A4, NOTE_G4, NOTE_A4, 0,
   
   NOTE_E4, NOTE_G4, NOTE_A4, NOTE_A4, 0, 
   NOTE_A4, NOTE_C5, NOTE_D5, NOTE_D5, 0, 
   NOTE_D5, NOTE_E5, NOTE_F5, NOTE_F5, 0,
   NOTE_E5, NOTE_D5, NOTE_E5, NOTE_A4, 0,
   
   NOTE_A4, NOTE_B4, NOTE_C5, NOTE_C5, 0, 
   NOTE_D5, NOTE_E5, NOTE_A4, 0, 
   NOTE_A4, NOTE_C5, NOTE_B4, NOTE_B4, 0,
   NOTE_C5, NOTE_A4, NOTE_B4, 0,
   //End of Repeat

   NOTE_E5, 0, 0, NOTE_F5, 0, 0,
   NOTE_E5, NOTE_E5, 0, NOTE_G5, 0, NOTE_E5, NOTE_D5, 0, 0,
   NOTE_D5, 0, 0, NOTE_C5, 0, 0,
   NOTE_B4, NOTE_C5, 0, NOTE_B4, 0, NOTE_A4,

   NOTE_E5, 0, 0, NOTE_F5, 0, 0,
   NOTE_E5, NOTE_E5, 0, NOTE_G5, 0, NOTE_E5, NOTE_D5, 0, 0,
   NOTE_D5, 0, 0, NOTE_C5, 0, 0,
   NOTE_B4, NOTE_C5, 0, NOTE_B4, 0, NOTE_A4
};
//*****************************************
int duration2[] = {         //duration2 of each note (in ms) Quarter Note is set to 250 ms
  125, 125, 250, 125, 125, 
  125, 125, 250, 125, 125,
  125, 125, 250, 125, 125,
  125, 125, 375, 125, 
  
  125, 125, 250, 125, 125, 
  125, 125, 250, 125, 125,
  125, 125, 250, 125, 125,
  125, 125, 375, 125, 
  
  125, 125, 250, 125, 125, 
  125, 125, 250, 125, 125,
  125, 125, 250, 125, 125,
  125, 125, 125, 250, 125,

  125, 125, 250, 125, 125, 
  250, 125, 250, 125, 
  125, 125, 250, 125, 125,
  125, 125, 375, 375,

  250, 125,
  //Rpeat of First Part
  125, 125, 250, 125, 125,
  125, 125, 250, 125, 125,
  125, 125, 375, 125, 
  
  125, 125, 250, 125, 125, 
  125, 125, 250, 125, 125,
  125, 125, 250, 125, 125,
  125, 125, 375, 125, 
  
  125, 125, 250, 125, 125, 
  125, 125, 250, 125, 125,
  125, 125, 250, 125, 125,
  125, 125, 125, 250, 125,

  125, 125, 250, 125, 125, 
  250, 125, 250, 125, 
  125, 125, 250, 125, 125,
  125, 125, 375, 375,
  //End of Repeat
  
  250, 125, 375, 250, 125, 375,
  125, 125, 125, 125, 125, 125, 125, 125, 375,
  250, 125, 375, 250, 125, 375,
  125, 125, 125, 125, 125, 500,

  250, 125, 375, 250, 125, 375,
  125, 125, 125, 125, 125, 125, 125, 125, 375,
  250, 125, 375, 250, 125, 375,
  125, 125, 125, 125, 125, 500
};

void setup() {
  Serial.begin(9600);
  pinMode(buzzer, OUTPUT);
  for (int i = 0; i < buttonCount; i++) {
    pinMode(buttons[i], INPUT);
  }
}

void loop() {
  if (Serial.available() > 0) {
    selection = Serial.read();
    Serial.print("Received selection: ");
    Serial.println(selection);

    switch (selection) {
      case '1':
        tone(buzzer, 5000, 50);
        playPiano();
        break;
      case '2':
        tone(buzzer, 5000, 50);
        playMusicGame();
        break;
      case '3':
        tone(buzzer, 5000, 50);
        playSongs();
        break;
      default:
        break;
    }
  }
}

void playPiano() {
  Serial.println("Entering PLAY PIANO! mode...");
  while (1) {
    if (Serial.available() > 0) {
      selection = Serial.read();
      Serial.print("Received selection in playPiano: ");
      Serial.println(selection);
      if (selection == '4') {
        break;
      } 
      else {
        while(1){
          for (int i = 0; i < buttonCount; i++) {
            if (digitalRead(buttons[i]) == HIGH) {
            int trackNumber = i;  // DFPlayer Mini'nin track numaraları 1'den başlar
            tone(buzzer,(frequencies[i]));
            delay(90);
            noTone(buzzer);
            }
          }
          if (Serial.available() > 0) {
          selection = Serial.read();
          Serial.print("Received selection in playPiano: ");
          Serial.println(selection);
          if (selection == '4') {
            break;
          }
        }
  }
}
  }
    }
      }

void playMusicGame() {
  delay(1500);
  int selectedNotes[maxLevel];
  int guess[buttonCount];
  for (int level = 1; level <= 9; level++) {
    Serial.print("Level ");
    Serial.println(level);
    int i = 0; 
    for (i = 0; i < level; i++) {
      int newNum = random(1, buttonCount);
      selectedNotes[i] = newNum;
    }

    for (i = 0; i < level; i++) {
      Serial.println(selectedNotes[i]);
    }

    for (i = 0; i < level; i++) {
      tone(buzzer, (frequencies[selectedNotes[i]]));
      delay(1000);
      noTone(buzzer);
      delay(1000);
    }
    delay(2000);
    Serial.println("Başla");
    tone(buzzer, 5000, 50);

    unsigned long startTime = millis();
    unsigned long elapsedTime = 0;
    int j = 0;
    while (elapsedTime < 8000) {
    elapsedTime = millis() - startTime;
    for (int x = 0; x < buttonCount; x++) {
      randomSeed(millis());
      if (digitalRead(buttons[x]) == HIGH) { 
        int trackNumber = x; 
        tone(buzzer,(frequencies[x]), 400);
        guess[j] = trackNumber;
        Serial.println("basılan buton index");
         Serial.println(j);
        Serial.println(guess[j]);
        Serial.println("notalar index");
        Serial.println(selectedNotes[j]);
        j++;
        delay(300);
      }
    }
  }
    for (int i = 0; i < level; i++) {
      if (guess[i] != selectedNotes[i]) {
        Serial.println("Yanlış tahmin. Level 1'e dönülüyor.");
        tone(buzzer, 587, 150);
        delay(150);
        tone(buzzer, 329, 350);
        delay(350);
        tone(buzzer, 150, 450);
        level = 1;
        selection = 0;
        return;
      }
    }

    Serial.println("Tebrikler sonraki levele geçiliyor");
    tone(buzzer, 3000, 150);
    delay(150);
    tone(buzzer, 4000, 150);
    delay(150);
    tone(buzzer, 5000, 150);
    delay(800);
  }

  Serial.println("Tebrikler! Tüm seviyeleri başarıyla tamamladınız.");
  tone(buzzer, 3000, 100);
    delay(100);
    tone(buzzer, 4000, 100);
    delay(100);
    tone(buzzer, 5000, 100);
    delay(100);
    tone(buzzer, 4000, 100);
    delay(100);
    tone(buzzer, 5000, 100);
    delay(100);
    tone(buzzer, 6000, 100);
    delay(100);
}

void playSongs(){
  while (1) {
    if (Serial.available() > 0) {
      selection = Serial.read();
      Serial.print("Received selection in playSongs: ");
      Serial.println(selection);
      if (selection == '4') {
        break;
      } 
      else {
        while(1){
          for (int i = 0; i < 4; i++) {
            if(digitalRead(buttons[0])==HIGH){
              for(int i=0; i<4; i++) {
                tone(buzzer, NOTE_G4);
                delay(500);
                noTone(buzzer);

                tone(buzzer, NOTE_C4);
                delay(500);
                noTone(buzzer);

                tone(buzzer, NOTE_DS4);
                delay(250);
                noTone(buzzer);

                tone(buzzer, NOTE_F4);
                delay(250);
                noTone(buzzer);
              }

              for(int i=0; i<4; i++){
                tone(buzzer, NOTE_G4);
                delay(500);
                noTone(buzzer);

                tone(buzzer, NOTE_C4);
                delay(500);
                noTone(buzzer);

                tone(buzzer, NOTE_E4);
                delay(250);
                noTone(buzzer);

                tone(buzzer, NOTE_F4);
                delay(250);
                noTone(buzzer);
              }

                tone(buzzer, NOTE_G4);
                delay(1500);
                noTone(buzzer);

                tone(buzzer, NOTE_C4);
                delay(1500);

            //
                tone(buzzer, NOTE_E4);
                delay(250);

                tone(buzzer, NOTE_F4);
                delay(250);
            //
                tone(buzzer, NOTE_G4);
                delay(1000);
                noTone(buzzer);

                tone(buzzer, NOTE_C4);
                delay(1000);

                tone(buzzer, NOTE_DS4);
                delay(250);
                noTone(buzzer);

                tone(buzzer, NOTE_F4);
                delay(250);
                noTone(buzzer);
                
              for(int i=0; i<3; i++) {
                
                tone(buzzer, NOTE_D4);
                delay(500);
                noTone(buzzer);
                
                tone(buzzer, NOTE_G3);
                delay(500);
                noTone(buzzer);

                tone(buzzer, NOTE_AS3);
                delay(250);
                noTone(buzzer);

                tone(buzzer, NOTE_C4);
                delay(250);
                noTone(buzzer);
                
              }
              
                  tone(buzzer, NOTE_D4);
                  delay(1500);
                  noTone(buzzer);
                  
                  tone(buzzer, NOTE_F4);
                  delay(1500);
                  noTone(buzzer);

                  tone(buzzer, NOTE_AS3);
                  delay(1000);
                  noTone(buzzer);

                  tone(buzzer, NOTE_DS4);
                  delay(250);
                  noTone(buzzer);

                  tone(buzzer, NOTE_D4);
                  delay(250);
                  noTone(buzzer);

                  tone(buzzer, NOTE_F4);
                  delay(1000);
                  noTone(buzzer);

                  tone(buzzer, NOTE_AS3);
                  delay(1000);
                  noTone(buzzer);

                  tone(buzzer, NOTE_DS4);
                  delay(250);
                  noTone(buzzer);

                  tone(buzzer, NOTE_D4);
                  delay(250);
                  noTone(buzzer);

                  tone(buzzer, NOTE_C4);
                  delay(500);
                  noTone(buzzer);

              for(int i=0; i<3; i++) {
                  tone(buzzer, NOTE_GS3);
                  delay(250);
                  noTone(buzzer);

                  tone(buzzer, NOTE_AS3);
                  delay(250);
                  noTone(buzzer);

                  tone(buzzer, NOTE_C4);
                  delay(500);
                  noTone(buzzer);

                  tone(buzzer, NOTE_F3);
                  delay(500);
                  noTone(buzzer);
              }

                tone(buzzer, NOTE_G4);
                delay(1000);
                noTone(buzzer);

                tone(buzzer, NOTE_C4);
                delay(1000);
                noTone(buzzer);

                tone(buzzer, NOTE_DS4);
                delay(250);
                noTone(buzzer);

                tone(buzzer, NOTE_F4);
                delay(250);
                noTone(buzzer);

                tone(buzzer, NOTE_G4);
                delay(1000);
                noTone(buzzer);

                tone(buzzer, NOTE_C4);
                delay(1000);
                noTone(buzzer);

                tone(buzzer, NOTE_DS4);
                delay(250);
                noTone(buzzer);

                tone(buzzer, NOTE_F4);
                delay(250);
                noTone(buzzer);

                tone(buzzer, NOTE_D4);
                delay(500);
                noTone(buzzer);

              for(int i=0; i<4; i++) {
                tone(buzzer, NOTE_G3);
                delay(500);
                noTone(buzzer);

                tone(buzzer, NOTE_AS3);
                delay(250);
                noTone(buzzer);

                tone(buzzer, NOTE_C4);
                delay(250);
                noTone(buzzer);

                tone(buzzer, NOTE_D4);
                delay(500);
                noTone(buzzer);
              }
            }
            if(digitalRead(buttons[1])==HIGH){
              for (int i = 0; i < length; i++) {
                if (notes[i] == ' ') {
                  delay(beats[i] * temporary); // rest
                } else {
                  playNote(notes[i], beats[i] * temporary);
                }
                delay(temporary);
              }
            }
            if(digitalRead(buttons[2])==HIGH){
             for (int thisNote = 0; thisNote < notes2 * 2; thisNote = thisNote + 2) {

                // calculates the duration of each note
                divider = melody[thisNote + 1];
                if (divider > 0) {
                  // regular note, just proceed
                  noteDuration = (wholenote) / divider;
                } else if (divider < 0) {
                  // dotted notes are represented with negative durations!!
                  noteDuration = (wholenote) / abs(divider);
                  noteDuration *= 1.5; // increases the duration in half for dotted notes
                }

                // we only play the note for 90% of the duration, leaving 10% as a pause
                tone(buzzer, melody[thisNote], noteDuration * 0.9);

                // Wait for the specief duration before playing the next note.
                delay(noteDuration);

                // stop the waveform generation before the next note.
                noTone(buzzer);
              }
            }
            if(digitalRead(buttons[3])==HIGH){
              for (int i=0;i<203;i++){              //203 is the total number of music notes3 in the song
                int wait = duration2[i] * songspeed;
                tone(buzzer,notes3[i],wait);          //tone(pin,frequency,duration2)
                delay(wait);
              }
            }
          }
          if (Serial.available() > 0) {
          selection = Serial.read();
          Serial.print("Received selection in playPiano: ");
          Serial.println(selection);
          if (selection == '4') {
            break;
          }
        }
  }
}
  }
    }
}