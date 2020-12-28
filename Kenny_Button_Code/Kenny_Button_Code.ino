
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
  //Sets speaker pin to 9
  tmrpcm.speakerPin = 9;
  //Error Check
  if (!SD.begin(SD_ChipSelectPin)){
    Serial.println("SD Failure");
    return;
  }
  tmrpcm.setVolume(5);

  }
  void rdm_wav() {
  //Randomly chooses mp3 quotes to play
   tmrpcm.stopPlayback();
   
   int rdm_num = random(0, 9);
   switch(rdm_num) {
      case 0:
      tmrpcm.play("0.WAV");
      break;
      case 1:
      tmrpcm.play("1.WAV");
      break;
      case 2:
      tmrpcm.play("2.WAV");
      break;
      case 3:
      tmrpcm.play("3.WAV");
      break;
      case 4:
      tmrpcm.play("4.WAV");
      break;
      case 5:
      tmrpcm.play("5.WAV");
      break;
      case 6:
      tmrpcm.play("6.WAV");
      break;
      case 7:
      tmrpcm.play("7.WAV");
      break;
      case 8:
      tmrpcm.play("8.WAV");
      break;
   }
}
  
void loop() {
  int buttonState = LOW;
  buttonState = digitalRead(buttonPin);
  //If button state high play audio 
  if (buttonState == HIGH) {
    rdm_wav();
  }
 } delay(800);

  
}
