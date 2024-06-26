// This -*- C++ -*- file has been generated by the Python package
// NinjaNumGen, which is distributed with the Ninja library.

#include "quadmynum.hh"

#include <quadninja/num_defs.hh>
#include <quadninja/ninjanumgen.hh>

#define QUADNINJA_NUM QuadDiagram
#define QUADNINJA_RANK_MINUS_N (0)
#define QUADNINJA_NUM_NAMESPACE 0

#if QUADNINJA_NUM_NAMESPACE
namespace QUADNINJA_NUM_NAMESPACE {
#endif

  quadninja::Complex QUADNINJA_NUM::evaluate(const quadninja::ComplexMomentum & ninjaQ,
                                     const quadninja::Complex & ninjaMu2,
                                     int ninja_cut,
                                     const quadninja::PartitionInt ninja_cutidx[])
  {
    quadninja::Complex ninja_result;
    (void)(ninjaQ);
    (void)(ninjaMu2);
    (void)(ninja_cut);
    (void)(ninja_cutidx);
NinjaAbbrType ninjanumabbr[6];  (void)(ninjanumabbr);
  
 ninjanumabbr[-1+1]= ninjaMP ( ninjaQ , v1 ) ; 
  ninjanumabbr[-1+2]= ninjaMP ( ninjaQ , v2 ) ; 
  ninjanumabbr[-1+3]= ninjaMP ( ninjaQ , v3 ) ; 
  ninjanumabbr[-1+4]= ninjaMP ( ninjaQ , v4 ) ; 
  ninjanumabbr[-1+5]= powi2(ninjaMu2 ); 
  ninjanumabbr[-1+6]= ninjanumabbr[-1+1]* ninjanumabbr[-1+3]* ninjanumabbr[-1+2]* 
 ninjanumabbr[-1+4]; 
  
 ninja_result = 
 ninjanumabbr[-1+5]+ ninjanumabbr[-1+6]; 
      return ninja_result;
  }

  void QUADNINJA_NUM::muExpansion(const quadninja::ComplexMomentum ninjaV[],
                              const quadninja::PartitionInt ninja_cutidx[],
                              quadninja::Complex ninjaC[])
  {
  const int ninjaidxt0 = 0;
    quadninja::ComplexMomentum ninjaA0 = ninjaV[0];
#if (QUADNINJA_RANK_MINUS_N > 0)
    quadninja::ComplexMomentum ninjaA1 = ninjaV[1];
    (void)(ninjaA1);
#endif
    (void)(ninjaA0);
    (void)(ninja_cutidx);
    (void)(ninjaC);
NinjaAbbrType ninjanumabbr[7];  (void)(ninjanumabbr);
  
 ninjanumabbr[-1+1]= ninjaMP ( ninjaA0 , ninjaA0 ) ; 
  ninjanumabbr[-1+2]= ninjaMP ( ninjaA0 , v1 ) ; 
  ninjanumabbr[-1+3]= ninjaMP ( ninjaA0 , v2 ) ; 
  ninjanumabbr[-1+4]= ninjaMP ( ninjaA0 , v3 ) ; 
  ninjanumabbr[-1+5]= ninjaMP ( ninjaA0 , v4 ) ; 
  ninjanumabbr[-1+6]= ninjanumabbr[-1+3]* ninjanumabbr[-1+2]* ninjanumabbr[-1+5]* 
 ninjanumabbr[-1+4]; 
  ninjanumabbr[-1+7]= powi2(ninjanumabbr[-1+1]); 
  ninjanumabbr[-1+6]= ninjanumabbr[-1+6]+ ninjanumabbr[-1+7]; 
  
 ninjaC[0+ninjaidxt0]= 
 ninjanumabbr[-1+6]; 
    }

  void QUADNINJA_NUM::t3Expansion(const quadninja::ComplexMomentum & ninjaA,
                              const quadninja::ComplexMomentum & ninjaE3,
                              const quadninja::ComplexMomentum & ninjaE4,
                              const quadninja::Complex & ninjaP,
                              int ninja_mindeg, int ninja_cut,
                              const quadninja::PartitionInt ninja_cutidx[],
                              quadninja::Complex ninjaC[])
  {
  const int ninjaidxt3mu0 = 0;
  const int ninjaidxt2mu0 = 1;
  const int ninjaidxt1mu0 = 2;
  const int ninjaidxt1mu2 = 3;
  const int ninjaidxt0mu0 = 4;
  const int ninjaidxt0mu2 = 5;
    (void)(ninjaA);
    (void)(ninjaE3);
    (void)(ninjaE4);
    (void)(ninjaP);
    (void)(ninja_mindeg);
    (void)(ninja_cut);
    (void)(ninja_cutidx);
    (void)(ninjaC);
    {
NinjaAbbrType ninjanumabbr[11];  (void)(ninjanumabbr);
  
 ninjanumabbr[-1+1]= ninjaMP ( ninjaA , v1 ) ; 
  ninjanumabbr[-1+2]= ninjaMP ( ninjaE3 , v2 ) ; 
  ninjanumabbr[-1+3]= ninjaMP ( ninjaE3 , v3 ) ; 
  ninjanumabbr[-1+4]= ninjaMP ( ninjaE3 , v4 ) ; 
  ninjanumabbr[-1+5]= ninjaMP ( ninjaA , v2 ) ; 
  ninjanumabbr[-1+6]= ninjaMP ( ninjaE3 , v1 ) ; 
  ninjanumabbr[-1+7]= ninjaMP ( ninjaA , v3 ) ; 
  ninjanumabbr[-1+8]= ninjaMP ( ninjaA , v4 ) ; 
  ninjanumabbr[-1+9]= ninjanumabbr[-1+5]* ninjanumabbr[-1+3]; 
  ninjanumabbr[-1+10]= ninjanumabbr[-1+7]* ninjanumabbr[-1+2]; 
  ninjanumabbr[-1+9]= ninjanumabbr[-1+9]+ ninjanumabbr[-1+10]; 
  ninjanumabbr[-1+9]= ninjanumabbr[-1+4]* ninjanumabbr[-1+9]; 
  ninjanumabbr[-1+10]= ninjanumabbr[-1+2]* ninjanumabbr[-1+3]; 
  ninjanumabbr[-1+11]= ninjanumabbr[-1+8]* ninjanumabbr[-1+10]; 
  ninjanumabbr[-1+9]= ninjanumabbr[-1+11]+ ninjanumabbr[-1+9]; 
  ninjanumabbr[-1+9]= ninjanumabbr[-1+6]* ninjanumabbr[-1+9]; 
  ninjanumabbr[-1+10]= ninjanumabbr[-1+10]* ninjanumabbr[-1+4]; 
  ninjanumabbr[-1+11]= ninjanumabbr[-1+1]* ninjanumabbr[-1+10]; 
  ninjanumabbr[-1+9]= ninjanumabbr[-1+9]+ ninjanumabbr[-1+11]; 
  ninjanumabbr[-1+10]= ninjanumabbr[-1+6]* ninjanumabbr[-1+10]; 
  
 ninjaC[0+ninjaidxt3mu0]= 
 ninjanumabbr[-1+10]; 
  
 ninjaC[0+ninjaidxt2mu0]= 
 ninjanumabbr[-1+9]; 
      }
    if (ninja_mindeg > 1+QUADNINJA_RANK_MINUS_N) {
NinjaAbbrType ninjanumabbr[22];  (void)(ninjanumabbr);
  
 ninjanumabbr[-1+1]= ninjaMP ( ninjaA , v1 ) ; 
  ninjanumabbr[-1+2]= ninjaMP ( ninjaA , v2 ) ; 
  ninjanumabbr[-1+3]= ninjaMP ( ninjaE3 , v3 ) ; 
  ninjanumabbr[-1+4]= ninjaMP ( ninjaE3 , v4 ) ; 
  ninjanumabbr[-1+5]= ninjaMP ( ninjaA , v3 ) ; 
  ninjanumabbr[-1+6]= ninjaMP ( ninjaE3 , v2 ) ; 
  ninjanumabbr[-1+7]= ninjaMP ( ninjaA , v4 ) ; 
  ninjanumabbr[-1+8]= ninjaMP ( ninjaE3 , v1 ) ; 
  ninjanumabbr[-1+9]= ninjaMP ( ninjaE4 , v4 ) ; 
  ninjanumabbr[-1+10]= ninjaMP ( ninjaE4 , v3 ) ; 
  ninjanumabbr[-1+11]= ninjaMP ( ninjaE4 , v2 ) ; 
  ninjanumabbr[-1+12]= ninjaMP ( ninjaE4 , v1 ) ; 
  ninjanumabbr[-1+13]= ninjanumabbr[-1+1]* ninjanumabbr[-1+4]; 
  ninjanumabbr[-1+14]= ninjanumabbr[-1+8]* ninjanumabbr[-1+7]; 
  ninjanumabbr[-1+13]= ninjanumabbr[-1+13]+ ninjanumabbr[-1+14]; 
  ninjanumabbr[-1+14]= ninjanumabbr[-1+13]* ninjanumabbr[-1+6]; 
  ninjanumabbr[-1+15]= ninjanumabbr[-1+8]* ninjanumabbr[-1+4]; 
  ninjanumabbr[-1+16]= ninjanumabbr[-1+15]* ninjanumabbr[-1+2]; 
  ninjanumabbr[-1+14]= ninjanumabbr[-1+14]+ ninjanumabbr[-1+16]; 
  ninjanumabbr[-1+16]= ninjanumabbr[-1+5]* ninjanumabbr[-1+14]; 
  ninjanumabbr[-1+17]= ninjanumabbr[-1+2]* ninjanumabbr[-1+13]; 
  ninjanumabbr[-1+18]= ninjanumabbr[-1+1]* ninjanumabbr[-1+7]; 
  ninjanumabbr[-1+19]= ninjanumabbr[-1+18]* ninjanumabbr[-1+6]; 
  ninjanumabbr[-1+17]= ninjanumabbr[-1+17]+ ninjanumabbr[-1+19]; 
  ninjanumabbr[-1+19]= ninjanumabbr[-1+3]* ninjanumabbr[-1+17]; 
  ninjanumabbr[-1+20]= ninjanumabbr[-1+4]* ninjanumabbr[-1+12]; 
  ninjanumabbr[-1+21]= ninjanumabbr[-1+9]* ninjanumabbr[-1+8]; 
  ninjanumabbr[-1+20]= ninjanumabbr[-1+20]+ ninjanumabbr[-1+21]; 
  ninjanumabbr[-1+21]= ninjanumabbr[-1+20]* ninjanumabbr[-1+6]; 
  ninjanumabbr[-1+22]= ninjanumabbr[-1+15]* ninjanumabbr[-1+11]; 
  ninjanumabbr[-1+21]= ninjanumabbr[-1+21]+ ninjanumabbr[-1+22]; 
  ninjanumabbr[-1+22]= ninjanumabbr[-1+21]* ninjanumabbr[-1+3]; 
  ninjanumabbr[-1+15]= ninjanumabbr[-1+6]* ninjanumabbr[-1+15]* ninjanumabbr[-1+10]; 
  ninjanumabbr[-1+15]= ninjanumabbr[-1+22]+ ninjanumabbr[-1+15]; 
  ninjanumabbr[-1+22]= ninjaP * ninjanumabbr[-1+15]; 
  ninjanumabbr[-1+16]= ninjanumabbr[-1+22]+ ninjanumabbr[-1+16]+ 
 ninjanumabbr[-1+19]; 
  ninjanumabbr[-1+13]= ninjanumabbr[-1+11]* ninjanumabbr[-1+13]; 
  ninjanumabbr[-1+19]= ninjanumabbr[-1+2]* ninjanumabbr[-1+20]; 
  ninjanumabbr[-1+20]= ninjanumabbr[-1+7]* ninjanumabbr[-1+12]; 
  ninjanumabbr[-1+22]= ninjanumabbr[-1+9]* ninjanumabbr[-1+1]; 
  ninjanumabbr[-1+20]= ninjanumabbr[-1+20]+ ninjanumabbr[-1+22]; 
  ninjanumabbr[-1+20]= ninjanumabbr[-1+20]* ninjanumabbr[-1+6]; 
  ninjanumabbr[-1+13]= ninjanumabbr[-1+20]+ ninjanumabbr[-1+19]+ 
 ninjanumabbr[-1+13]; 
  ninjanumabbr[-1+13]= ninjanumabbr[-1+13]* ninjanumabbr[-1+3]; 
  ninjanumabbr[-1+19]= ninjanumabbr[-1+21]* ninjanumabbr[-1+5]; 
  ninjanumabbr[-1+14]= ninjanumabbr[-1+14]* ninjanumabbr[-1+10]; 
  ninjanumabbr[-1+13]= ninjanumabbr[-1+13]+ ninjanumabbr[-1+19]+ 
 ninjanumabbr[-1+14]; 
  ninjanumabbr[-1+14]= ninjaP * ninjanumabbr[-1+13]; 
  ninjanumabbr[-1+17]= ninjanumabbr[-1+5]* ninjanumabbr[-1+17]; 
  ninjanumabbr[-1+18]= ninjanumabbr[-1+3]* ninjanumabbr[-1+2]* ninjanumabbr[-1+18]; 
  ninjanumabbr[-1+14]= ninjanumabbr[-1+14]+ ninjanumabbr[-1+17]+ 
 ninjanumabbr[-1+18]; 
  
 ninjaC[0+ninjaidxt1mu0]= 
 ninjanumabbr[-1+16]; 
  
 ninjaC[0+ninjaidxt1mu2]= 
 ninjanumabbr[-1+15]; 
  
 ninjaC[0+ninjaidxt0mu0]= 
 ninjanumabbr[-1+14]; 
  
 ninjaC[0+ninjaidxt0mu2]= 
 ninjanumabbr[-1+13]; 
      }
  }

  void QUADNINJA_NUM::t2Expansion(const quadninja::ComplexMomentum & ninjaA0,
                              const quadninja::ComplexMomentum & ninjaA1,
                              const quadninja::ComplexMomentum & ninjaE3,
                              const quadninja::ComplexMomentum & ninjaE4,
                              const quadninja::Complex ninjaP[],
                              int ninja_mindeg, int ninja_cut,
                              const quadninja::PartitionInt ninja_cutidx[],
                              quadninja::Complex ninjaC[])
  {
  const int ninjaidxt2x0mu0 = 0;
  const int ninjaidxt1x0mu0 = 1;
  const int ninjaidxt1x1mu0 = 2;
  const int ninjaidxt0x0mu0 = 3;
  const int ninjaidxt0x0mu2 = 4;
  const int ninjaidxt0x1mu0 = 5;
  const int ninjaidxt0x2mu0 = 6;
    const quadninja::Complex ninjaP0 = ninjaP[0];
    const quadninja::Complex ninjaP1 = ninjaP[1];
    const quadninja::Complex ninjaP2 = ninjaP[2];
    (void)(ninjaA0);
    (void)(ninjaA1);
    (void)(ninjaE3);
    (void)(ninjaE4);
    (void)(ninjaP0);
    (void)(ninjaP1);
    (void)(ninjaP2);
    (void)(ninja_mindeg);
    (void)(ninja_cut);
    (void)(ninja_cutidx);
    (void)(ninjaC);
    {
NinjaAbbrType ninjanumabbr[17];  (void)(ninjanumabbr);
  
 ninjanumabbr[-1+1]= ninjaMP ( ninjaA0 , v1 ) ; 
  ninjanumabbr[-1+2]= ninjaMP ( ninjaE3 , v2 ) ; 
  ninjanumabbr[-1+3]= ninjaMP ( ninjaE3 , v3 ) ; 
  ninjanumabbr[-1+4]= ninjaMP ( ninjaE3 , v4 ) ; 
  ninjanumabbr[-1+5]= ninjaMP ( ninjaA0 , v2 ) ; 
  ninjanumabbr[-1+6]= ninjaMP ( ninjaE3 , v1 ) ; 
  ninjanumabbr[-1+7]= ninjaMP ( ninjaA0 , v3 ) ; 
  ninjanumabbr[-1+8]= ninjaMP ( ninjaA0 , v4 ) ; 
  ninjanumabbr[-1+9]= ninjaMP ( ninjaA1 , v1 ) ; 
  ninjanumabbr[-1+10]= ninjaMP ( ninjaA1 , v2 ) ; 
  ninjanumabbr[-1+11]= ninjaMP ( ninjaA1 , v3 ) ; 
  ninjanumabbr[-1+12]= ninjaMP ( ninjaA1 , v4 ) ; 
  ninjanumabbr[-1+13]= ninjanumabbr[-1+2]* ninjanumabbr[-1+7]; 
  ninjanumabbr[-1+14]= ninjanumabbr[-1+5]* ninjanumabbr[-1+3]; 
  ninjanumabbr[-1+13]= ninjanumabbr[-1+13]+ ninjanumabbr[-1+14]; 
  ninjanumabbr[-1+13]= ninjanumabbr[-1+6]* ninjanumabbr[-1+13]; 
  ninjanumabbr[-1+14]= ninjanumabbr[-1+2]* ninjanumabbr[-1+3]; 
  ninjanumabbr[-1+15]= ninjanumabbr[-1+1]* ninjanumabbr[-1+14]; 
  ninjanumabbr[-1+13]= ninjanumabbr[-1+15]+ ninjanumabbr[-1+13]; 
  ninjanumabbr[-1+13]= ninjanumabbr[-1+4]* ninjanumabbr[-1+13]; 
  ninjanumabbr[-1+15]= ninjanumabbr[-1+14]* ninjanumabbr[-1+6]; 
  ninjanumabbr[-1+16]= ninjanumabbr[-1+8]* ninjanumabbr[-1+15]; 
  ninjanumabbr[-1+13]= ninjanumabbr[-1+16]+ ninjanumabbr[-1+13]; 
  ninjanumabbr[-1+16]= ninjanumabbr[-1+10]* ninjanumabbr[-1+3]; 
  ninjanumabbr[-1+17]= ninjanumabbr[-1+11]* ninjanumabbr[-1+2]; 
  ninjanumabbr[-1+16]= ninjanumabbr[-1+17]+ ninjanumabbr[-1+16]; 
  ninjanumabbr[-1+16]= ninjanumabbr[-1+6]* ninjanumabbr[-1+16]; 
  ninjanumabbr[-1+14]= ninjanumabbr[-1+9]* ninjanumabbr[-1+14]; 
  ninjanumabbr[-1+14]= ninjanumabbr[-1+14]+ ninjanumabbr[-1+16]; 
  ninjanumabbr[-1+14]= ninjanumabbr[-1+4]* ninjanumabbr[-1+14]; 
  ninjanumabbr[-1+16]= ninjanumabbr[-1+12]* ninjanumabbr[-1+15]; 
  ninjanumabbr[-1+14]= ninjanumabbr[-1+16]+ ninjanumabbr[-1+14]; 
  ninjanumabbr[-1+15]= ninjanumabbr[-1+4]* ninjanumabbr[-1+15]; 
  
 ninjaC[0+ninjaidxt2x0mu0]= 
 ninjanumabbr[-1+15]; 
  
 ninjaC[0+ninjaidxt1x0mu0]= 
 ninjanumabbr[-1+13]; 
  
 ninjaC[0+ninjaidxt1x1mu0]= 
 ninjanumabbr[-1+14]; 
      }
    if (ninja_mindeg > 1+QUADNINJA_RANK_MINUS_N) {
NinjaAbbrType ninjanumabbr[32];  (void)(ninjanumabbr);
  
 ninjanumabbr[-1+1]= ninjaMP ( ninjaA0 , v1 ) ; 
  ninjanumabbr[-1+2]= ninjaMP ( ninjaA1 , v2 ) ; 
  ninjanumabbr[-1+3]= ninjaMP ( ninjaE3 , v3 ) ; 
  ninjanumabbr[-1+4]= ninjaMP ( ninjaE3 , v4 ) ; 
  ninjanumabbr[-1+5]= ninjaMP ( ninjaA1 , v3 ) ; 
  ninjanumabbr[-1+6]= ninjaMP ( ninjaE3 , v2 ) ; 
  ninjanumabbr[-1+7]= ninjaMP ( ninjaA1 , v4 ) ; 
  ninjanumabbr[-1+8]= ninjaMP ( ninjaA0 , v2 ) ; 
  ninjanumabbr[-1+9]= ninjaMP ( ninjaA1 , v1 ) ; 
  ninjanumabbr[-1+10]= ninjaMP ( ninjaE3 , v1 ) ; 
  ninjanumabbr[-1+11]= ninjaMP ( ninjaA0 , v3 ) ; 
  ninjanumabbr[-1+12]= ninjaMP ( ninjaA0 , v4 ) ; 
  ninjanumabbr[-1+13]= ninjaMP ( ninjaE4 , v4 ) ; 
  ninjanumabbr[-1+14]= ninjaMP ( ninjaE4 , v3 ) ; 
  ninjanumabbr[-1+15]= ninjaMP ( ninjaE4 , v2 ) ; 
  ninjanumabbr[-1+16]= ninjaMP ( ninjaE4 , v1 ) ; 
  ninjanumabbr[-1+17]= ninjanumabbr[-1+3]* ninjanumabbr[-1+6]; 
  ninjanumabbr[-1+18]= ninjanumabbr[-1+17]* ninjanumabbr[-1+1]; 
  ninjanumabbr[-1+19]= ninjanumabbr[-1+3]* ninjanumabbr[-1+10]; 
  ninjanumabbr[-1+20]= ninjanumabbr[-1+19]* ninjanumabbr[-1+8]; 
  ninjanumabbr[-1+21]= ninjanumabbr[-1+6]* ninjanumabbr[-1+10]; 
  ninjanumabbr[-1+22]= ninjanumabbr[-1+21]* ninjanumabbr[-1+11]; 
  ninjanumabbr[-1+18]= ninjanumabbr[-1+22]+ ninjanumabbr[-1+18]+ 
 ninjanumabbr[-1+20]; 
  ninjanumabbr[-1+20]= ninjanumabbr[-1+7]* ninjanumabbr[-1+18]; 
  ninjanumabbr[-1+22]= ninjanumabbr[-1+17]* ninjanumabbr[-1+13]; 
  ninjanumabbr[-1+23]= ninjanumabbr[-1+6]* ninjanumabbr[-1+4]; 
  ninjanumabbr[-1+24]= ninjanumabbr[-1+23]* ninjanumabbr[-1+14]; 
  ninjanumabbr[-1+25]= ninjanumabbr[-1+3]* ninjanumabbr[-1+4]; 
  ninjanumabbr[-1+26]= ninjanumabbr[-1+25]* ninjanumabbr[-1+15]; 
  ninjanumabbr[-1+22]= ninjanumabbr[-1+26]+ ninjanumabbr[-1+24]+ 
 ninjanumabbr[-1+22]; 
  ninjanumabbr[-1+22]= ninjanumabbr[-1+10]* ninjanumabbr[-1+22]; 
  ninjanumabbr[-1+24]= ninjanumabbr[-1+4]* ninjanumabbr[-1+17]* ninjanumabbr[-1+16]; 
  ninjanumabbr[-1+22]= ninjanumabbr[-1+24]+ ninjanumabbr[-1+22]; 
  ninjanumabbr[-1+24]= ninjaP1 * ninjanumabbr[-1+22]; 
  ninjanumabbr[-1+26]= ninjanumabbr[-1+25]* ninjanumabbr[-1+8]; 
  ninjanumabbr[-1+27]= ninjanumabbr[-1+23]* ninjanumabbr[-1+11]; 
  ninjanumabbr[-1+26]= ninjanumabbr[-1+26]+ ninjanumabbr[-1+27]; 
  ninjanumabbr[-1+27]= ninjanumabbr[-1+9]* ninjanumabbr[-1+26]; 
  ninjanumabbr[-1+28]= ninjanumabbr[-1+4]* ninjanumabbr[-1+10]; 
  ninjanumabbr[-1+29]= ninjanumabbr[-1+28]* ninjanumabbr[-1+11]; 
  ninjanumabbr[-1+30]= ninjanumabbr[-1+1]* ninjanumabbr[-1+25]; 
  ninjanumabbr[-1+30]= ninjanumabbr[-1+29]+ ninjanumabbr[-1+30]; 
  ninjanumabbr[-1+30]= ninjanumabbr[-1+2]* ninjanumabbr[-1+30]; 
  ninjanumabbr[-1+17]= ninjanumabbr[-1+17]* ninjanumabbr[-1+9]; 
  ninjanumabbr[-1+21]= ninjanumabbr[-1+21]* ninjanumabbr[-1+5]; 
  ninjanumabbr[-1+17]= ninjanumabbr[-1+17]+ ninjanumabbr[-1+21]; 
  ninjanumabbr[-1+21]= ninjanumabbr[-1+2]* ninjanumabbr[-1+19]; 
  ninjanumabbr[-1+21]= ninjanumabbr[-1+21]+ ninjanumabbr[-1+17]; 
  ninjanumabbr[-1+21]= ninjanumabbr[-1+12]* ninjanumabbr[-1+21]; 
  ninjanumabbr[-1+28]= ninjanumabbr[-1+28]* ninjanumabbr[-1+5]; 
  ninjanumabbr[-1+31]= ninjanumabbr[-1+8]* ninjanumabbr[-1+28]; 
  ninjanumabbr[-1+23]= ninjanumabbr[-1+23]* ninjanumabbr[-1+5]; 
  ninjanumabbr[-1+32]= ninjanumabbr[-1+1]* ninjanumabbr[-1+23]; 
  ninjanumabbr[-1+20]= ninjanumabbr[-1+24]+ ninjanumabbr[-1+21]+ 
 ninjanumabbr[-1+30]+ ninjanumabbr[-1+20]+ ninjanumabbr[-1+32]+ 
 ninjanumabbr[-1+31]+ ninjanumabbr[-1+27]; 
  ninjanumabbr[-1+21]= ninjanumabbr[-1+9]* ninjanumabbr[-1+25]; 
  ninjanumabbr[-1+19]= ninjanumabbr[-1+7]* ninjanumabbr[-1+19]; 
  ninjanumabbr[-1+19]= ninjanumabbr[-1+19]+ ninjanumabbr[-1+28]+ 
 ninjanumabbr[-1+21]; 
  ninjanumabbr[-1+19]= ninjanumabbr[-1+2]* ninjanumabbr[-1+19]; 
  ninjanumabbr[-1+21]= ninjaP2 * ninjanumabbr[-1+22]; 
  ninjanumabbr[-1+17]= ninjanumabbr[-1+7]* ninjanumabbr[-1+17]; 
  ninjanumabbr[-1+23]= ninjanumabbr[-1+9]* ninjanumabbr[-1+23]; 
  ninjanumabbr[-1+17]= ninjanumabbr[-1+21]+ ninjanumabbr[-1+19]+ 
 ninjanumabbr[-1+23]+ ninjanumabbr[-1+17]; 
  ninjanumabbr[-1+19]= ninjaP0 * ninjanumabbr[-1+22]; 
  ninjanumabbr[-1+18]= ninjanumabbr[-1+12]* ninjanumabbr[-1+18]; 
  ninjanumabbr[-1+21]= ninjanumabbr[-1+1]* ninjanumabbr[-1+26]; 
  ninjanumabbr[-1+23]= ninjanumabbr[-1+8]* ninjanumabbr[-1+29]; 
  ninjanumabbr[-1+18]= ninjanumabbr[-1+18]+ ninjanumabbr[-1+19]+ 
 ninjanumabbr[-1+23]+ ninjanumabbr[-1+21]; 
  
 ninjaC[0+ninjaidxt0x0mu0]= 
 ninjanumabbr[-1+18]; 
  
 ninjaC[0+ninjaidxt0x0mu2]= 
 ninjanumabbr[-1+22]; 
  
 ninjaC[0+ninjaidxt0x1mu0]= 
 ninjanumabbr[-1+20]; 
  
 ninjaC[0+ninjaidxt0x2mu0]= 
 ninjanumabbr[-1+17]; 
      }
  }

#if QUADNINJA_NUM_NAMESPACE
} // namespace QUADNINJA_NUM_NAMESPACE
#endif
