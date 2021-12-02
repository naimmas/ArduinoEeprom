.ALIASES
X_U1            U1(A=N00620 B=N00758 C=N00620 D=N00345 E=N00564 F=N00345 G=N01206 H=0 ) CN
+@TEST.SCHEMATIC1(sch_1):INS38@SPE.555.Normal(chips)
R_R1            R1(1=N00345 2=N00564 ) CN @TEST.SCHEMATIC1(sch_1):INS79@ANALOG.R.Normal(chips)
X_R2            R2(1=N03642 2=N03624 ) CN @TEST.SCHEMATIC1(sch_1):INS108@BREAKOUT.POT.Normal(chips)
C_C2            C2(+=N04212 -=N03624 ) CN @TEST.SCHEMATIC1(sch_1):INS166@ANALOG.C_elect.Normal(chips)
V_V1            V1(POS=N00400 NEG=0 ) CN @TEST.SCHEMATIC1(sch_1):INS258@SPICE_ELEM.BATTERY.Normal(chips)
X_D1            D1(AN=N00400 CAT=N00345 ) CN @TEST.SCHEMATIC1(sch_1):INS292@DI.1N4007.Normal(chips)
X_Q1            Q1(C=N01457 B=N01430 E=0 ) CN @TEST.SCHEMATIC1(sch_1):INS319@BJN.BC547B.Normal(chips)
C_C3            C3(+=N00345 -=0 ) CN @TEST.SCHEMATIC1(sch_1):INS432@ANALOG.C_elect.Normal(chips)
R_R3            R3(1=N00620 2=N00564 ) CN @TEST.SCHEMATIC1(sch_1):INS596@ANALOG.R.Normal(chips)
C_C4            C4(1=0 2=N00620 ) CN @TEST.SCHEMATIC1(sch_1):INS661@ANALOG.C.Normal(chips)
C_C5            C5(1=0 2=N00758 ) CN @TEST.SCHEMATIC1(sch_1):INS742@ANALOG.C.Normal(chips)
R_R4            R4(1=N01241 2=N01206 ) CN @TEST.SCHEMATIC1(sch_1):INS804@ANALOG.R.Normal(chips)
R_R5            R5(1=0 2=N01241 ) CN @TEST.SCHEMATIC1(sch_1):INS830@ANALOG.R.Normal(chips)
C_C6            C6(1=N01241 2=N01206 ) CN @TEST.SCHEMATIC1(sch_1):INS856@ANALOG.C.Normal(chips)
C_C7            C7(1=0 2=N01241 ) CN @TEST.SCHEMATIC1(sch_1):INS882@ANALOG.C.Normal(chips)
C_C8            C8(1=0 2=N01350 ) CN @TEST.SCHEMATIC1(sch_1):INS908@ANALOG.C.Normal(chips)
C_C9            C9(1=0 2=N01365 ) CN @TEST.SCHEMATIC1(sch_1):INS934@ANALOG.C.Normal(chips)
R_R6            R6(1=N01350 2=N01241 ) CN @TEST.SCHEMATIC1(sch_1):INS960@ANALOG.R.Normal(chips)
R_R7            R7(1=N01365 2=N01350 ) CN @TEST.SCHEMATIC1(sch_1):INS986@ANALOG.R.Normal(chips)
R_R8            R8(1=N01430 2=N01365 ) CN @TEST.SCHEMATIC1(sch_1):INS1012@ANALOG.R.Normal(chips)
R_R9            R9(1=N01457 2=N01430 ) CN @TEST.SCHEMATIC1(sch_1):INS1164@ANALOG.R.Normal(chips)
C_C10           C10(1=N01457 2=N01430 ) CN @TEST.SCHEMATIC1(sch_1):INS1190@ANALOG.C.Normal(chips)
C_C11           C11(1=N01426 2=N01241 ) CN @TEST.SCHEMATIC1(sch_1):INS1312@ANALOG.C.Normal(chips)
R_R10           R10(1=N00345 2=N01457 ) CN @TEST.SCHEMATIC1(sch_1):INS1690@ANALOG.R.Normal(chips)
R_R11           R11(1=N00345 2=N01426 ) CN @TEST.SCHEMATIC1(sch_1):INS1772@ANALOG.R.Normal(chips)
X_Q2            Q2(C=N00345 B=N03455 E=N04212 ) CN @TEST.SCHEMATIC1(sch_1):INS3074@BJN.BC547B.Normal(chips)
R_R12           R12(1=0 2=N04212 ) CN @TEST.SCHEMATIC1(sch_1):INS3476@ANALOG.R.Normal(chips)
.ENDALIASES