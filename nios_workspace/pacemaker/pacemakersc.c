/*
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
#include "pacemakersc.h"
#include <system.h>
#include <altera_avalon_pio_regs.h>
#include <stdio.h>

//these are all defined in pacemakersc.h
/*char VSense;
char LRIStart;
char LRIExpired;
char LRIStop;
char VPace;
char ASense;
char AEIStart;
char AVIStart;
char PVARPStart;
char VRPStart;
char URIStart;
char AEIExpired;
char AVIExpired;
char PVARPExpired;
char VRPExpired;
char URIExpired;
char AEIStop;
char AVIStop;
char PVARPStop;
char VRPStop;
char URIStop;
char APace;*/
char g0;
char g1;
char g2;
char g3;
char PRE_g3;
char g4;
char g5;
char g6;
char PRE_g6;
char g7;
char g8;
char g9;
char PRE_g9;
char g10;
char g11;
char g12;
char g13;
char g14;
char PRE_g14;
char g15;
char g16;
char g17;
char g18;
char PRE_g18;
char g19;
char g20;
char g21;
char g22;
char g23;
char g24;
char PRE_g24;
char g25;
char g26;
char PRE_g26;
char g27;
char g27b;
char g28;
char PRE_g28;
char g29;
char g29b;
char g30;
char g31;
char g32;
char g33;
char PRE_g33;
char g34;
char g34b;
char g35;
char g36;
char g37;
char PRE_g37;
char g38;
char g39;
char g40;
char g41;
char g42;
char PRE_g42;
char g43;
char g43b;
char g44;
char g45;
char PRE_g45;
char g46;
char g47;
char g48;
char g49;
char g50;
char PRE_g50;
char g51;
char g51b;
char g52;
char g53;
char PRE_g53;
char g54;
char g55;
char g56;
char g57;
char g58;
char PRE_g58;
char g59;
char g60;
char g61;
char PRE_g61;
char g62;
char g63;
char g64;
char PRE_g64;
char g65;
char g66;
char g67;
char g68;
char g69;
char PRE_g69;
char g70;
char g71;
char g72;
char g73;
char g74;
char PRE_g74;
char g75;
char g75b;
char g76;
char PRE_g76;
char g77;
char g77b;
char g78;
char g79;
char g80;
char g81;
char g82;
char PRE_g82;
char g83;
char g84;
char g85;
char PRE_g85;
char g86;
char g87;
char g88;
char g89;
char g90;
char g91;
char g92;
char g93;
char g94;
char PRE_g94;
char g95;
char g96;
char g97;
char g98;
char PRE_g98;
char g99;
char g99b;
char g100;
char PRE_g100;
char g101;
char g102;
char g103;
char g104;
char g105;
char PRE_g105;
char g106;
char g107;
char g108;
char PRE_g108;
char g109;
char g110;
char g111;
char PRE_g111;
char g112;
char g113;
char g114;
char PRE_g114;
char g115;
char g116;
char g117;
char g118;
char g119;
char PRE_g119;
char g120;
char g120b;
char g121;
char PRE_g121;
char g122;
char g123;
char g124;
char g125;
char g126;
char g127;
char PRE_g127;
char g128;
char g129;
char g130;
char _GO;
char _cg12;
char _cg21;
char _cg17;
char _cg4;
char _cg5;
char _cg13;
char _cg7;
char _cg16;
char _cg19;
char _cg20;
char _cg10;
char _cg29;
char _cg34;
char _cg32;
char _cg25;
char _cg27;
char _cg30;
char _cg35;
char _cg36;
char _cg38;
char _cg46;
char _cg47;
char _cg43;
char _cg54;
char _cg55;
char _cg51;
char _cg67;
char _cg71;
char _cg59;
char _cg60;
char _cg68;
char _cg62;
char _cg65;
char _cg77;
char _cg75;
char _cg78;
char _cg83;
char _cg86;
char _cg87;
char _cg90;
char _cg92;
char _cg101;
char _cg102;
char _cg99;
char _cg112;
char _cg116;
char _cg106;
char _cg107;
char _cg113;
char _cg109;
char _cg122;
char _cg123;
char _cg120;
char g22_e1;
char g40_e2;
char g48_e3;
char g56_e4;
char g72_e5;
char g80_e6;
char g96_e7;
char g103_e8;
char g117_e9;
char g124_e10;
char g125_fix0;
char g125_fix1;
char g125_e1_fix_fix;
char g125_e1_fix;
char g125_e1;
char g129_e2;
int _PRE_GO;
void reset(){
   _GO = 1;
   _PRE_GO = 0;
   PRE_g3 = 0;
   PRE_g6 = 0;
   PRE_g9 = 0;
   PRE_g14 = 0;
   PRE_g18 = 0;
   PRE_g24 = 0;
   PRE_g26 = 0;
   PRE_g28 = 0;
   PRE_g33 = 0;
   PRE_g37 = 0;
   PRE_g42 = 0;
   PRE_g45 = 0;
   PRE_g50 = 0;
   PRE_g53 = 0;
   PRE_g58 = 0;
   PRE_g61 = 0;
   PRE_g64 = 0;
   PRE_g69 = 0;
   PRE_g74 = 0;
   PRE_g76 = 0;
   PRE_g82 = 0;
   PRE_g85 = 0;
   PRE_g94 = 0;
   PRE_g98 = 0;
   PRE_g100 = 0;
   PRE_g105 = 0;
   PRE_g108 = 0;
   PRE_g111 = 0;
   PRE_g114 = 0;
   PRE_g119 = 0;
   PRE_g121 = 0;
   PRE_g127 = 0;
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
      g126 = g0;
      g128 =(PRE_g127);
      g127 =(g126||g128);
      if(g127){
         AEIStart = 0;
         AVIStart = 0;
         PVARPStart = 0;
         VRPStart = 0;
         URIStart = 0;
         LRIStart = 0;
         AEIStop = 0;
         AVIStop = 0;
         PVARPStop = 0;
         VRPStop = 0;
         URIStop = 0;
         LRIStop = 0;
         APace = 0;
         VPace = 0;
      }
      g10 =(PRE_g9);
      _cg10 = VSense;
      g11 =(g10&&_cg10);
      if(g11){
         AVIStop =(AVIStop||1);
      }
      g12 =(g10&&(!(_cg10)));
      _cg12 = AVIExpired;
      g38 =(PRE_g37);
      _cg38 = URIExpired;
      g39 =(g38&&_cg38);
      if(g39){
         VPace =(VPace||1);
      }
      g29 =(PRE_g28);
      g29b = g29;
      _cg29 = AVIStop;
      g30 =(g29b&&(!(_cg29)));
      _cg30 = AVIExpired;
      g31 =(g30&&_cg30);
      if(g31){
         VPace =(VPace||1);
      }
      g95 =(PRE_g94);
      g86 =(PRE_g85);
      _cg86 = VRPExpired;
      g87 =(g95||(g86&&_cg86));
      _cg87 = LRIExpired;
      g88 =(g87&&_cg87);
      if(g88){
         VPace =(VPace||1);
      }
      g43 =(PRE_g42);
      g43b = g43;
      _cg43 = VPace;
      g47 =(g43b&&(!(_cg43)));
      _cg47 = VSense;
      g44 =((g43b&&_cg43)||(g47&&_cg47));
      if(g44){
         PVARPStart =(PVARPStart||1);
      }
      g65 =(PRE_g64);
      _cg65 = ASense;
      g66 =(g65&&_cg65);
      if(g66){
         AEIStop =(AEIStop||1);
      }
      g77 =(PRE_g76);
      g77b = g77;
      _cg77 = AEIStop;
      g78 =(g77b&&(!(_cg77)));
      _cg78 = AEIExpired;
      g79 =(g78&&_cg78);
      if(g79){
         APace =(APace||1);
      }
      g19 =(PRE_g18);
      _cg19 = ASense;
      g20 =(g19&&(!(_cg19)));
      _cg20 = APace;
      g21 =(g20&&(!(_cg20)));
      _cg21 = PVARPStart;
      g4 =(PRE_g3);
      _cg4 = ASense;
      g16 =(g4&&(!(_cg4)));
      _cg16 = APace;
      g17 =(g16&&(!(_cg16)));
      _cg17 = PVARPExpired;
      g3 =(g11||(g12&&_cg12)||(g21&&_cg21)||g2||(g17&&(!(_cg17))));
      g15 =(PRE_g14);
      g5 =(g15||(g4&&_cg4));
      _cg5 = PVARPExpired;
      g7 =(PRE_g6);
      _cg7 = ASense;
      g13 =(g7&&(!(_cg7)));
      _cg13 = APace;
      g6 =((g5&&_cg5)||(g13&&(!(_cg13))));
      g8 =((g7&&_cg7)||(g19&&_cg19)||(g13&&_cg13)||(g20&&_cg20)||(g16&&_cg16));
      if(g8){
         AVIStart =(AVIStart||1);
      }
      g9 =((g12&&(!(_cg12)))||g8);
      g14 =(g5&&(!(_cg5)));
      g18 =((g17&&_cg17)||(g21&&(!(_cg21))));
      g23 = g1;
      g34 =(PRE_g33);
      g34b = g34;
      _cg34 = AVIStop;
      g25 =(PRE_g24);
      _cg25 = URIExpired;
      g32 =(g25&&(!(_cg25)));
      _cg32 = AVIStart;
      g24 =((g34b&&_cg34)||(g32&&(!(_cg32)))||g23||g31||g39||(g29b&&_cg29));
      g27 =(PRE_g26);
      g27b = g27;
      _cg27 = AVIStart;
      g26 =((g25&&_cg25)||(g27b&&(!(_cg27))));
      g35 =(g34b&&(!(_cg34)));
      _cg35 = URIExpired;
      g28 =((g30&&(!(_cg30)))||(g35&&_cg35)||(g27b&&_cg27));
      g36 =(g35&&(!(_cg35)));
      _cg36 = AVIExpired;
      g33 =((g36&&(!(_cg36)))||(g32&&_cg32));
      g37 =((g38&&(!(_cg38)))||(g36&&_cg36));
      g41 = g1;
      g46 =(PRE_g45);
      _cg46 = PVARPExpired;
      g42 =(g41||(g46&&_cg46)||(g47&&(!(_cg47))));
      g45 =(g44||(g46&&(!(_cg46))));
      g49 = g1;
      g54 =(PRE_g53);
      _cg54 = VRPExpired;
      g51 =(PRE_g50);
      g51b = g51;
      _cg51 = VPace;
      g55 =(g51b&&(!(_cg51)));
      _cg55 = VSense;
      g50 =(g49||(g54&&_cg54)||(g55&&(!(_cg55))));
      g52 =((g51b&&_cg51)||(g55&&_cg55));
      if(g52){
         VRPStart =(VRPStart||1);
      }
      g53 =(g52||(g54&&(!(_cg54))));
      g57 = g1;
      g67 =(g65&&(!(_cg65)));
      _cg67 = AEIExpired;
      g59 =(PRE_g58);
      _cg59 = VSense;
      g71 =(g59&&(!(_cg59)));
      _cg71 = VPace;
      g58 =((g67&&_cg67)||g66||g57||(g71&&(!(_cg71))));
      g70 =(PRE_g69);
      g60 =((g59&&_cg59)||g70);
      _cg60 = VRPExpired;
      g62 =(PRE_g61);
      _cg62 = VSense;
      g68 =(g62&&(!(_cg62)));
      _cg68 = VPace;
      g61 =((g60&&_cg60)||(g68&&(!(_cg68))));
      g63 =((g62&&_cg62)||(g68&&_cg68)||(g71&&_cg71));
      if(g63){
         AEIStart =(AEIStart||1);
      }
      g64 =(g63||(g67&&(!(_cg67))));
      g69 =(g60&&(!(_cg60)));
      g73 = g1;
      g75 =(PRE_g74);
      g75b = g75;
      _cg75 = AEIStart;
      g74 =(g73||(g77b&&_cg77)||g79||(g75b&&(!(_cg75))));
      g76 =((g78&&(!(_cg78)))||(g75b&&_cg75));
      g81 = g1;
      g83 =(PRE_g82);
      _cg83 = VSense;
      g82 =(g81||(g83&&(!(_cg83))));
      g84 =(g83&&_cg83);
      if(g84){
         LRIStart =(LRIStart||1);
      }
      g90 =(g87&&(!(_cg87)));
      _cg90 = VSense;
      g92 =(g90&&(!(_cg90)));
      _cg92 = VPace;
      g93 =(g92&&_cg92);
      if(g93){
         LRIStop =(LRIStop||1);
      }
      g91 =(g90&&_cg90);
      if(g91){
         LRIStop =(LRIStop||1);
      }
      g89 =(g93||g91||g88);
      if(g89){
         LRIStart =(LRIStart||1);
      }
      g85 =(g89||g84||(g86&&(!(_cg86))));
      g94 =(g92&&(!(_cg92)));
      g97 = g1;
      g101 =(PRE_g100);
      _cg101 = LRIExpired;
      g102 =(g101&&(!(_cg101)));
      _cg102 = LRIStop;
      g99 =(PRE_g98);
      g99b = g99;
      _cg99 = LRIStart;
      g98 =((g101&&_cg101)||(g102&&_cg102)||(g99b&&(!(_cg99)))||g97);
      g100 =((g99b&&_cg99)||(g102&&(!(_cg102))));
      g104 = g1;
      g112 =(PRE_g111);
      _cg112 = URIExpired;
      g106 =(PRE_g105);
      _cg106 = VSense;
      g116 =(g106&&(!(_cg106)));
      _cg116 = VPace;
      g105 =(g104||(g112&&_cg112)||(g116&&(!(_cg116))));
      g115 =(PRE_g114);
      g107 =((g106&&_cg106)||g115);
      _cg107 = VRPExpired;
      g109 =(PRE_g108);
      _cg109 = VSense;
      g113 =(g109&&(!(_cg109)));
      _cg113 = VPace;
      g108 =((g107&&_cg107)||(g113&&(!(_cg113))));
      g110 =((g116&&_cg116)||(g109&&_cg109)||(g113&&_cg113));
      if(g110){
         URIStart =(URIStart||1);
      }
      g111 =(g110||(g112&&(!(_cg112))));
      g114 =(g107&&(!(_cg107)));
      g118 = g1;
      g120 =(PRE_g119);
      g120b = g120;
      _cg120 = URIStart;
      g122 =(PRE_g121);
      _cg122 = URIExpired;
      g123 =(g122&&(!(_cg122)));
      _cg123 = URIStop;
      g119 =((g120b&&(!(_cg120)))||(g122&&_cg122)||(g123&&_cg123)||g118);
      g121 =((g120b&&_cg120)||(g123&&(!(_cg123))));
      g22_e1 =(!((g4||g7||g15||g10||g19)));
      g40_e2 =(!((g25||g27||g34||g29||g38)));
      g48_e3 =(!((g43||g46)));
      g56_e4 =(!((g51||g54)));
      g72_e5 =(!((g59||g62||g70||g65)));
      g80_e6 =(!((g75||g77)));
      g96_e7 =(!((g83||g86||g95)));
      g103_e8 =(!((g99||g101)));
      g117_e9 =(!((g106||g109||g115||g112)));
      g124_e10 =(!((g120||g122)));
      g125_fix0 =((g22_e1||g22)&&(g40_e2||g40)&&(g48_e3||g48)&&(g56_e4||g56));
      g125_fix1 =(g22||g40||g48||g56);
      g125_e1_fix_fix =(g34||g46||g54||g62||g70||g86||g109||g115||g10||g19||g29||g65||g112);
      g125_e1_fix =(g106||g120||g27||g77||g101||g122||g7||g15||g38||g125_e1_fix_fix);
      g125_e1 =(!((g4||g25||g43||g51||g59||g75||g83||g99||g95||g125_e1_fix)));
      g129_e2 =(!(g128));
   }
   PRE_g3 = g3;
   PRE_g6 = g6;
   PRE_g9 = g9;
   PRE_g14 = g14;
   PRE_g18 = g18;
   PRE_g24 = g24;
   PRE_g26 = g26;
   PRE_g28 = g28;
   PRE_g33 = g33;
   PRE_g37 = g37;
   PRE_g42 = g42;
   PRE_g45 = g45;
   PRE_g50 = g50;
   PRE_g53 = g53;
   PRE_g58 = g58;
   PRE_g61 = g61;
   PRE_g64 = g64;
   PRE_g69 = g69;
   PRE_g74 = g74;
   PRE_g76 = g76;
   PRE_g82 = g82;
   PRE_g85 = g85;
   PRE_g94 = g94;
   PRE_g98 = g98;
   PRE_g100 = g100;
   PRE_g105 = g105;
   PRE_g108 = g108;
   PRE_g111 = g111;
   PRE_g114 = g114;
   PRE_g119 = g119;
   PRE_g121 = g121;
   PRE_g127 = g127;
   _PRE_GO = _GO;
   return;
}


