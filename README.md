# Kenny Button
 An easy button from staples that plays quotes from upperclassman Kenny Kim


11/18/2020:
Dismantled Easy button and acquired Arduino. Modeling for new button starting soon.

12/28/2020:
Completed arduino code and assembly. The button works well below I'll leave some tips on errors I encountered and solving them.

*The primary error with TMRpcm master is that once implemented it will create a buzzing sound instead of the file. The first solution is to run sample code to test that the speaker and SD card are working properly these are in the examples tab for arduino. Next ensure audio files are in an 8-bit 16000 Hz format. TMRpcm volume ranges from 1-7 I found that 6 and 7 cause the buzzing distortion.  Finally audio samples should be amplified prior to uploading into the SD card this gives it the best chance of playing. Changing the TMRpcm config file actually causes many things to mess up. The most helpful tool in there is debug other than that having other User-Defined settings messed things up. Fixing these ultimately led me to a working Kenny Button.  