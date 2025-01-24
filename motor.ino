void motor(int M1, int M2, int M3, int M4) {
  if(M1 > 0) {
    ledcWrite(M1_RPWM, convertPWM(M1));
    ledcWrite(M1_LPWM, 0);
  } else if(M1 < 0) {
    ledcWrite(M1_RPWM, 0);
    ledcWrite(M1_LPWM, convertPWM(abs(M1)));
  } else {
    ledcWrite(M1_RPWM, 0);
    ledcWrite(M1_LPWM, 0);
  }

  if(M2 > 0) {
    ledcWrite(M2_RPWM, convertPWM(M2));
    ledcWrite(M2_LPWM, 0);
  } else if(M2 < 0) {
    ledcWrite(M2_RPWM, 0);
    ledcWrite(M2_LPWM, convertPWM(abs(M2)));
  } else {
    ledcWrite(M2_RPWM, 0);
    ledcWrite(M2_LPWM, 0);
  }

  if(M3 > 0) {
    ledcWrite(M3_RPWM, convertPWM(M3));
    ledcWrite(M3_LPWM, 0);
  } else if(M3 < 0) {
    ledcWrite(M3_RPWM, 0);
    ledcWrite(M3_LPWM, convertPWM(abs(M3)));
  } else {
    ledcWrite(M3_RPWM, 0);
    ledcWrite(M3_LPWM, 0);
  }

  if(M4 > 0) {
    ledcWrite(M4_RPWM, convertPWM(M4));
    ledcWrite(M4_LPWM, 0);
  } else if(M4 < 0) {
    ledcWrite(M4_RPWM, 0);
    ledcWrite(M4_LPWM, convertPWM(abs(M4)));
  } else {
    ledcWrite(M4_RPWM, 0);
    ledcWrite(M4_LPWM, 0);
  }
}
void fakt(int M5, int M6){  //front aktuator
    
  if(M5 > 0) {
    ledcWrite(M5_RFKL, convertPWM(M5));
    ledcWrite(M5_LFKL, 0);
  } else if(M5 < 0) {
    ledcWrite(M5_RFKL, 0);
    ledcWrite(M5_LFKL, convertPWM(abs(M5)));
  } else {
    ledcWrite(M5_RFKL, 0);
    ledcWrite(M5_LFKL, 0);
  }

  if(M6 > 0) {
      ledcWrite(M6_RKPS, convertPWM(M6));
      ledcWrite(M6_LKPS, 0);
  }else if(M6 < 0) {
      ledcWrite(M6_RKPS, 0);
      ledcWrite(M6_LKPS, convertPWM(abs(M6)));
  }else {
      ledcWrite(M6_RKPS, 0);
      ledcWrite(M6_LKPS, 0);
  }
}
void servo(int S1, int S2) {

    servo1.write(S1);
    servo2.write(S2);
}