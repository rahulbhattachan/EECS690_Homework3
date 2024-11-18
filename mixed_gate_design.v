module mixed_gate_design (I1, I2, I3, I4, O1, O2, O3);
input I1, I2, I3, I4;
output O1, O2, O3;


wire W1, W2, W3, W4, W5, W6, W7, W8, W9, W10;
wire W11, W12, W13, W14, W15, W16, W17, W18, W19, W20;
wire W21, W22, W23, W24, W25, W26, W27, W28, W29, W30;
wire W31, W32, W33, W34, W35;

and a1(W1, I1, I2);
or o1(W2, I3, I4);
xor  x1(W3, I1, I3);
xnor xn1(W4, W1, W2);
nand na1(W5, W3, I2);
nor  no1(W6, W4, I4);
and  a2(W7, W5, W6);
or   o2(W8, W7, I4);
xor  x2(W9, W8, I2);
and a3(W10, W9, I3);

not  n1(W11, I2);
nand na2(W12, W10, W11);
or   o3(W13, W12, I1);
nor  no2(W14, W13, I4);
and  a4(W15, W14, W3);
or  o4(W16, W15, W5);
nor  no3(W17, W16, W9);
xnor xn2(W18, W17, W2);

and  a5(W19, W18, I3);
nand na3(W20, W19, W8);
not  n2(W21, W20);
xor  x3(W22, W21, I4);
or   o5(W23, W22, W7);
nor  no4(W24, W23, W10);
or o6(W25, W24, W2);
or  o7(W26, W25, W12);
and  a6(W27, W26, I1);
not  n3(W28, W27);
nor  no5(W29, W28, W6);

xnor xn3(W30, W29, W12);
nand na4(W31, W30, W18);
or   o8(W32, W31, W14);
and  a7(W33, W32, W19);
xor  x4(W34, W33, W5);
nor  no6(W35, W34, W25);

and a8(O1, W25, W32);
or o9(O2, W14, W35);
xor x5(O3, W18, W34);

endmodule
