module mixed_gate_design (
    I1, I2, I3, I4, 
    keyinput0, keyinput1, keyinput2, keyinput3, keyinput4, keyinput5, keyinput6, 
    O1, O2, O3
);
    input I1, I2, I3, I4;
    input keyinput0, keyinput1, keyinput2, keyinput3, keyinput4, keyinput5, keyinput6;
    output O1, O2, O3;

    wire W1, W2, W3, W4, W5, W6, W7, W8, W9, W10;
    wire W11, W12, W13, W14, W15, W16, W17, W18, W19, W20;
    wire W21, W22, W23, W24, W25, W26, W27, W28, W29, W30;
    wire W31, W32, W33, W34, W35;

    wire keyinputgate_0, keyinputgate_1, keyinputgate_2, keyinputgate_3, keyinputgate_4, keyinputgate_5, keyinputgate_6;

    // Original gates
    and a1(W1, I1, I2);
    or o1(W2, I3, I4);
    xor x1(W3, I1, I3);
    xnor xn1(W4, W1, W2);

    // Key Gate 0 (keyinput0 = 1, use XNOR gate)
    xnor keygate0(keyinputgate_0, W4, keyinput0);
    // Replace W4 with keyinputgate_0
    // Next gate uses keyinputgate_0 instead of W4
    nor no1(W6, keyinputgate_0, I4);

    // Original gate
    nand na1(W5, W3, I2);
    // Key Gate 1 (keyinput1 = 0, use XOR gate)
    xor keygate1(keyinputgate_1, W5, keyinput1);
    // Replace W5 with keyinputgate_1
    and a2(W7, keyinputgate_1, W6);
    or o2(W8, W7, I4);
    xor x2(W9, W8, I2);

    // Key Gate 2 (keyinput2 = 1, use XNOR gate)
    xnor keygate2(keyinputgate_2, W9, keyinput2);
    // Replace W9 with keyinputgate_2
    and a3(W10, keyinputgate_2, I3);

    not n1(W11, I2);
    nand na2(W12, W10, W11);
    or o3(W13, W12, I1);
    nor no2(W14, W13, I4);

    // Key Gate 3 (keyinput3 = 0, use XOR gate)
    xor keygate3(keyinputgate_3, W14, keyinput3);
    // Replace W14 with keyinputgate_3
    and a4(W15, keyinputgate_3, W3);
    or o4(W16, W15, keyinputgate_1); // W5 replaced by keyinputgate_1
    nor no3(W17, W16, keyinputgate_2); // W9 replaced by keyinputgate_2
    xnor xn2(W18, W17, W2);

    // Key Gate 4 (keyinput4 = 1, use XNOR gate)
    xnor keygate4(keyinputgate_4, W18, keyinput4);
    // Replace W18 with keyinputgate_4
    and a5(W19, keyinputgate_4, I3);
    nand na3(W20, W19, W8);
    not n2(W21, W20);
    xor x3(W22, W21, I4);

    // Key Gate 5 (keyinput5 = 1, use XNOR gate)
    xnor keygate5(keyinputgate_5, W22, keyinput5);
    // Replace W22 with keyinputgate_5
    or o5(W23, keyinputgate_5, W7);
    nor no4(W24, W23, W10);
    or o6(W25, W24, W2);
    or o7(W26, W25, W12);
    and a6(W27, W26, I1);
    not n3(W28, W27);
    nor no5(W29, W28, W6);

    xnor xn3(W30, W29, W12);
    nand na4(W31, W30, keyinputgate_4); // W18 replaced by keyinputgate_4
    or o8(W32, W31, keyinputgate_3); // W14 replaced by keyinputgate_3
    and a7(W33, W32, W19);
    // W5 replaced by keyinputgate_1
    xor x4(W34, W33, keyinputgate_1);

    // Key Gate 6 (keyinput6 = 0, use XOR gate)
    xor keygate6(keyinputgate_6, W34, keyinput6);
    // Replace W34 with keyinputgate_6
    nor no6(W35, keyinputgate_6, W25);

    and a8(O1, W25, W32);
    or o9(O2, keyinputgate_3, W35); // W14 replaced by keyinputgate_3
    xor x5(O3, keyinputgate_4, keyinputgate_6); // W18 and W34 replaced

endmodule
