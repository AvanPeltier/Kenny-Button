
/*Kenny Button
 * Creator: Avan Peltier
 * 12/3/2020
 * Plays quotes of the one and only Kenny Kim through
 * wired speaker
 */
 
#include <SD.h>
#include <SPI.h>
//Playback program
#include <pcmConfig.h>
#include <pcmRF.h>
#include <TMRpcm.h>
#define SD_ChipSelectPin 4

File root;
TMRpcm tmrpcm;

const int buttonPin = 2; //Pin button switch



void setup(){
  pinMode (buttonPin, INPUT);
  Serial.begin(9600);
  //Sets speaker pin to 8
  tmrpcm.speakerPin = 8;
  //Error Check
  if (!SD.begin(SD_ChipSelectPin)){
    Serial.println("SD Failure");
    return;
  }
  tmrpcm.setVolume(10);

  }
  void rdm_wav() {
  //Randomly chooses mp3 quotes to play
   tmrpcm.stopPlayback();
   
   int rdm_num = random(0, 9);
   switch(rdm_num) {
      case 0:
      tmrpcm.play("0.wav");
      delay(0);
      break;
      case 1:
      tmrpcm.play("1.wav");
      delay(0);
      break;
      case 2:
      tmrpcm.play("2.wav");
      delay(0);
      break;
      case 3:
      tmrpcm.play("3.wav");
      delay(0);
      break;
      case 4:
      tmrpcm.play("4.wav");
      delay(0);
      break;
      case 5:
      tmrpcm.play("5.wav");
      delay(0);
      break;
      case 6:
      tmrpcm.play("6.wav");
      delay(0);
      break;
      case 7:
      tmrpcm.play("7.wav");
      delay(0);
      break;
      case 8:
      tmrpcm.play("8.wav");
      delay(0);
      break;
   }
}
  
void loop() {
  int buttonState = LOW;
  buttonState = digitalRead(buttonPin);
  if (buttonState == HIGH) {
    rdm_wav();
  }
  if(digitalRead(buttonState) == HIGH)
  { 
  Serial.println("Button1 1");
  }
  else{

  Serial.println("Button1 0");

} delay(100);

  
}
