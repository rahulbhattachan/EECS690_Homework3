module mixed_gate_design (keyinput0, I1, keyinput2, I2, I4, keyinput1, I3, O1, O2, O3);
  input keyinput0;
  input I1;
  input keyinput2;
  input I2;
  input I4;
  input keyinput1;
  input I3;

  output O1;
  output O2;
  output O3;

  wire W9;
  wire W14;
  wire W30;
  wire W10;
  wire W23;
  wire W31;
  wire W34;
  wire W1;
  wire W32;
  wire W24;
  wire W11;
  wire O3;
  wire W17;
  wire W22;
  wire W18;
  wire W7;
  wire O1;
  wire W12;
  wire W16;
  wire W26;
  wire keyinputgate_1;
  wire W19;
  wire keyinputgate_0;
  wire W29;
  wire keyinputgate_2;
  wire W35;
  wire W13;
  wire W25;
  wire W28;
  wire O2;
  wire W27;
  wire W2;
  wire W33;
  wire W5;
  wire W4;
  wire W21;
  wire W6;
  wire W20;
  wire W3;
  wire W8;
  wire W15;

  xor g_0(W9, I2, keyinputgate_1);
  nor g_1(W14, W13, I4);
  xnor g_2(W30, W29, W12);
  and g_3(W10, W9, I3);
  or g_4(W23, W22, W7);
  nand g_5(W31, W18, W30);
  xor g_6(W34, W33, W5);
  and g_7(W1, I1, I2);
  or g_8(W32, W14, W31);
  nor g_9(W24, W23, W10);
  not g_10(W11, I2);
  xor g_11(O3, W34, W18);
  nor g_12(W17, W9, W16);
  xor g_13(W22, I4, W21);
  xnor g_14(W18, W17, W2);
  and g_15(W7, W5, W6);
  and g_16(O1, keyinputgate_2, W32);
  nand g_17(W12, W10, W11);
  or g_18(W16, W5, W15);
  or g_19(W26, keyinputgate_2, W12);
  xor g_20(keyinputgate_1, W8, keyinput1);
  and g_21(W19, W18, I3);
  xor g_22(keyinputgate_0, W19, keyinput0);
  nor g_23(W29, W28, W6);
  xnor g_24(keyinputgate_2, W25, keyinput2);
  nor g_25(W35, keyinputgate_2, W34);
  or g_26(W13, I1, W12);
  or g_27(W25, W2, W24);
  not g_28(W28, W27);
  or g_29(O2, W14, W35);
  and g_30(W27, I1, W26);
  or g_31(W2, I4, I3);
  and g_32(W33, W32, keyinputgate_0);
  nand g_33(W5, W3, I2);
  xnor g_34(W4, W2, W1);
  not g_35(W21, W20);
  nor g_36(W6, W4, I4);
  nand g_37(W20, keyinputgate_1, keyinputgate_0);
  xor g_38(W3, I1, I3);
  or g_39(W8, I4, W7);
  and g_40(W15, W14, W3);
endmodule
