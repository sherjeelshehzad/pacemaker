/*****************************************************************************/
/*                 G E N E R A T E D       C    C O D E                      */
/*****************************************************************************/
/* KIELER - Kiel Integrated Environment for Layout Eclipse RichClient        */
/*                                                                           */
/* http://www.informatik.uni-kiel.de/rtsys/kieler/                           */
/* Copyright 2014 by                                                         */
/* + Kiel University                                                         */
/*   + Department of Computer Science                                        */
/*     + Real-Time and Embedded Systems Group                                */
/*                                                                           */
/* This code is provided under the terms of the Eclipse Public License (EPL).*/
/*****************************************************************************/
char AVIEnd;
char VPace;
char AEIStart;
char AVIStart;
char ASense;
char VSense;
char AEIEnd;
char APace;
char g0;
char g1;
char g2;
char g3;
char PRE_g3;
char g4;
char g5;
char g6;
char g7;
char PRE_g7;
char g8;
char g8b;
char g9;
char g10;
char g11;
char PRE_g11;
char g12;
char g13;
char g14;
char g15;
char g16;
char g17;
char PRE_g17;
char g18;
char g19;
char g20;
char g21;
char PRE_g21;
char g22;
char g23;
char g24;
char g25;
char PRE_g25;
char g26;
char g27;
char g28;
char g29;
char PRE_g29;
char g30;
char g30b;
char g31;
char g32;
char g33;
char PRE_g33;
char g34;
char g35;
char g36;
char g37;
char g38;
char g39;
char PRE_g39;
char g40;
char g41;
char g42;
char g43;
char PRE_g43;
char g44;
char g45;
char g46;
char g47;
char g48;
char PRE_g48;
char g49;
char g50;
char g51;
char _GO;
char _cg13;
char _cg4;
char _cg6;
char _cg9;
char _cg35;
char _cg26;
char _cg28;
char _cg31;
char g15_e1;
char g19_e2;
char g23_e3;
char g37_e4;
char g41_e5;
char g45_e6;
char g46_e1;
char g50_e2;
int _PRE_GO;
void reset(){
   _GO = 1;
   _PRE_GO = 0;
   PRE_g3 = 0;
   PRE_g7 = 0;
   PRE_g11 = 0;
   PRE_g17 = 0;
   PRE_g21 = 0;
   PRE_g25 = 0;
   PRE_g29 = 0;
   PRE_g33 = 0;
   PRE_g39 = 0;
   PRE_g43 = 0;
   PRE_g48 = 0;
   return;
}
void tick(){
   if(_PRE_GO == 1){
      _GO = 0;
   }
   {
      g0 = _GO;
      g1 = g0;
      g2 = g1;
      g49 =(PRE_g48);
      g47 = g0;
      g48 =(g49||g47);
      if(g48){
         APace = 0;
         VPace = 0;
      }
      g12 =(PRE_g11);
      g30 =(PRE_g29);
      g30b = g30;
      if(g30b){
         APace =(APace||1);
         AEIStart = 0;
      }
      g4 =(PRE_g3);
      _cg4 = ASense;
      g13 =(g4&&(!(_cg4)));
      _cg13 = APace;
      g14 =(g13&&_cg13);
      if(g14){
         AVIStart = 1;
      }
      g5 =(g4&&_cg4);
      if(g5){
         AVIStart = 1;
      }
      g6 =(g12||g14||g5);
      _cg6 = AVIEnd;
      g9 =(g6&&(!(_cg6)));
      _cg9 =(VSense||VPace);
      g10 =(g9&&_cg9);
      if(g10){
         AVIStart = 0;
      }
      g8 =(PRE_g7);
      g8b = g8;
      if(g8b){
         VPace =(VPace||1);
         AVIStart = 0;
      }
      g3 =(g10||(g13&&(!(_cg13)))||g2||g8b);
      g7 =(g6&&_cg6);
      if(g7){
         AVIStart = 0;
      }
      g11 =(g9&&(!(_cg9)));
      g16 = g1;
      g18 =(PRE_g17);
      g17 =(g16||g18);
      g20 = g1;
      g22 =(PRE_g21);
      g21 =(g22||g20);
      g24 = g1;
      g34 =(PRE_g33);
      g26 =(PRE_g25);
      _cg26 = VSense;
      g35 =(g26&&(!(_cg26)));
      _cg35 = VPace;
      g36 =(g35&&_cg35);
      if(g36){
         AEIStart = 1;
      }
      g27 =(g26&&_cg26);
      if(g27){
         AEIStart = 1;
      }
      g28 =(g34||g36||g27);
      _cg28 = AEIEnd;
      g31 =(g28&&(!(_cg28)));
      _cg31 =(ASense||APace);
      g32 =(g31&&_cg31);
      if(g32){
         AEIStart = 0;
      }
      g25 =(g32||g24||g30b||(g35&&(!(_cg35))));
      g29 =(g28&&_cg28);
      if(g29){
         AEIStart = 0;
      }
      g33 =(g31&&(!(_cg31)));
      g38 = g1;
      g40 =(PRE_g39);
      g39 =(g40||g38);
      g42 = g1;
      g44 =(PRE_g43);
      g43 =(g42||g44);
      g15_e1 =(!((g4||g8||g12)));
      g19_e2 =(!(g18));
      g23_e3 =(!(g22));
      g37_e4 =(!((g26||g30||g34)));
      g41_e5 =(!(g40));
      g45_e6 =(!(g44));
      g46_e1 =(!((g4||g18||g22||g26||g40||g44||g8||g12||g30||g34)));
      g50_e2 =(!(g49));
   }
   PRE_g3 = g3;
   PRE_g7 = g7;
   PRE_g11 = g11;
   PRE_g17 = g17;
   PRE_g21 = g21;
   PRE_g25 = g25;
   PRE_g29 = g29;
   PRE_g33 = g33;
   PRE_g39 = g39;
   PRE_g43 = g43;
   PRE_g48 = g48;
   _PRE_GO = _GO;
   return;
}
