#include <Servo.h>
#include <cvzone.h>// Servo kütüphanesini projemize ekledik.

Servo servoM;  // Servo nesnemizi oluşturduk <div name="divHrefB" style="height: 0px;width: 0px;overflow:hidden;"><a href="https://online-pharmacy-uk.com/get-nolvadex-uk.html" data-wpel-link="external" target="_blank" rel="nofollow external noopener noreferrer" class="wpel-icon-right">Buy Nolvadex UK<span class="wpel-icon wpel-image wpel-icon-13"></span></a></div> , ismini servoM yaptık.
int pos = 0;    // pos değişkenini oluşturup 0’a eşitledik.

SerialData serialData(1,1);
int valsRec[1];

void setup() {
  serialData.begin(); 
  servoM.attach(9);  // Servoyu 9nolu pin’e bağladığımızı belirttik.
}

void loop() {
    delay(500);
    serialData.Get(valsRec);                                   // her bir adımda 1 derece artacak şekilde ayarladık.
    servoM.write(valsRec[0]);              // Servo açı değeri olarak belirlediğimiz pos değişkenini servoya yazdırdık.
}
