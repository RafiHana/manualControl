void onConnect() {
  Serial.println("Connected.");
}

void notify() {
  xL = Ps3.data.analog.stick.lx;  // up+ down-
  yL = -Ps3.data.analog.stick.ly; //left- right+
  xR = Ps3.data.analog.stick.rx;  
  yR = -Ps3.data.analog.stick.ry;
  T = Ps3.data.button.triangle; 
  X = Ps3.data.button.cross;
  S = Ps3.data.button.square;
  C = Ps3.data.button.circle;
  R1 = Ps3.data.button.r1;
  R2 = Ps3.data.button.r2;
  R3 = Ps3.data.button.r3;
  L1 = Ps3.data.button.l1;
  L2 = Ps3.data.button.l2;
  L3 = Ps3.data.button.l3;
  U = Ps3.data.button.up;
  D = Ps3.data.button.down;
  L = Ps3.data.button.left;
  R = Ps3.data.button.right;
  SELECT = Ps3.data.button.select;
  START = Ps3.data.button.start; 
}

void readJoystick(){

  Serial.print("analogLX : "); Serial.print(xL); Serial.print(" - "); Serial.print("analogLY : "); Serial.print(yL);  Serial.print(" - ");
  Serial.print("analogRX : "); Serial.print(xR); Serial.print(" - "); Serial.print("analogRY : "); Serial.print(yR);  Serial.print(" - ");
  Serial.print("R1 : "); Serial.print(R1); Serial.print(" - "); Serial.print("R2 : "); Serial.print(R2);  Serial.print(" - ");
  Serial.print("L1 : "); Serial.print(L1); Serial.print(" - "); Serial.print("L2 : "); Serial.print(L2);  Serial.print(" - ");
  Serial.print("R1 : "); Serial.print(R1); Serial.print(" - "); Serial.print("R2 : "); Serial.print(R2);  Serial.print(" - ");
  Serial.print("L1 : "); Serial.print(L1); Serial.print(" - "); Serial.print("L2 : "); Serial.print(L2);  Serial.print(" - ");
  Serial.print("T : "); Serial.print(T); Serial.print(" - "); Serial.print("X : "); Serial.print(X);  Serial.print(" - ");
  Serial.print("S : "); Serial.print(S); Serial.print(" - "); Serial.print("C : "); Serial.print(C);  Serial.print(" - ");
  Serial.print("U : "); Serial.print(U); Serial.print(" - "); Serial.print("D : "); Serial.print(D);  Serial.print(" - ");
  Serial.print("L : "); Serial.print(L); Serial.print(" - "); Serial.print("R : "); Serial.print(R);  Serial.print(" - ");
  Serial.println(" ");
}

void calibrateMotor(){
    if (T > 0) {  
          motor(100, 0, 0, 0);
    }else if (X > 0) {  
          motor(0, 100, 0, 0);
    }else if (S > 0) {  
          motor(0, 0, 100, 0);
    }else if (C > 0) {  
          motor(0, 0, 0, 100);
    } else {
      motor(0, 0, 0, 0);
    }
}