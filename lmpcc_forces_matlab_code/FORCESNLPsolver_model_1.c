/* This function was automatically generated by CasADi */
#ifdef __cplusplus
extern "C" {
#endif

#ifdef CODEGEN_PREFIX
#define NAMESPACE_CONCAT(NS, ID) _NAMESPACE_CONCAT(NS, ID)
#define _NAMESPACE_CONCAT(NS, ID) NS ## ID
#define CASADI_PREFIX(ID) NAMESPACE_CONCAT(CODEGEN_PREFIX, ID)
#else /* CODEGEN_PREFIX */
#define CASADI_PREFIX(ID) FORCESNLPsolver_model_1_ ## ID
#endif /* CODEGEN_PREFIX */

#include <math.h>

#include "FORCESNLPsolver/include/FORCESNLPsolver.h"

#define PRINTF printf
FORCESNLPsolver_float CASADI_PREFIX(sq)(FORCESNLPsolver_float x) { return x*x;}
#define sq(x) CASADI_PREFIX(sq)(x)

FORCESNLPsolver_float CASADI_PREFIX(sign)(FORCESNLPsolver_float x) { return x<0 ? -1 : x>0 ? 1 : x;}
#define sign(x) CASADI_PREFIX(sign)(x)

static const solver_int32_default CASADI_PREFIX(s0)[] = {6, 1, 0, 6, 0, 1, 2, 3, 4, 5};
#define s0 CASADI_PREFIX(s0)
static const solver_int32_default CASADI_PREFIX(s1)[] = {30, 1, 0, 30, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29};
#define s1 CASADI_PREFIX(s1)
static const solver_int32_default CASADI_PREFIX(s2)[] = {1, 1, 0, 1, 0};
#define s2 CASADI_PREFIX(s2)
static const solver_int32_default CASADI_PREFIX(s3)[] = {1, 6, 0, 1, 2, 3, 4, 5, 5, 0, 0, 0, 0, 0};
#define s3 CASADI_PREFIX(s3)
static const solver_int32_default CASADI_PREFIX(s4)[] = {2, 1, 0, 2, 0, 1};
#define s4 CASADI_PREFIX(s4)
static const solver_int32_default CASADI_PREFIX(s5)[] = {2, 6, 0, 0, 0, 2, 4, 6, 8, 0, 1, 0, 1, 0, 1, 0, 1};
#define s5 CASADI_PREFIX(s5)
static const solver_int32_default CASADI_PREFIX(s6)[] = {3, 1, 0, 3, 0, 1, 2};
#define s6 CASADI_PREFIX(s6)
static const solver_int32_default CASADI_PREFIX(s7)[] = {3, 6, 0, 2, 5, 5, 6, 7, 10, 0, 1, 0, 1, 2, 0, 1, 0, 1, 2};
#define s7 CASADI_PREFIX(s7)
/* evaluate_stages */
solver_int32_default FORCESNLPsolver_model_1(const FORCESNLPsolver_float **arg, FORCESNLPsolver_float **res) 
{
    FORCESNLPsolver_float a0,a1,a2,a3,a4,a5,a6,a7,a8,a9,a10,a11,a12,a13,a14,a15,a16,a17,a18,a19,a20,a21,a22,a23,a24,a25,a26,a27,a28,a29,a30;
    a0=arg[0] ? arg[0][3] : 0;
    a1=arg[1] ? arg[1][4] : 0;
    a1=(a0-a1);
    a2=arg[1] ? arg[1][0] : 0;
    a3=(a2*a1);
    a4=(a3*a1);
    a5=arg[0] ? arg[0][4] : 0;
    a6=arg[1] ? arg[1][5] : 0;
    a6=(a5-a6);
    a7=arg[1] ? arg[1][1] : 0;
    a8=(a7*a6);
    a9=(a8*a6);
    a4=(a4+a9);
    a9=arg[1] ? arg[1][3] : 0;
    a10=arg[0] ? arg[0][1] : 0;
    a11=(a9*a10);
    a12=(a11*a10);
    a4=(a4+a12);
    a12=10.;
    a13=arg[0] ? arg[0][2] : 0;
    a14=(a12*a13);
    a15=(a14*a13);
    a4=(a4+a15);
    a15=arg[1] ? arg[1][2] : 0;
    a16=arg[0] ? arg[0][0] : 0;
    a17=(a15*a16);
    a18=(a17*a16);
    a4=(a4+a18);
    if (res[0]!=0) res[0][0]=a4;
    a15=(a15*a16);
    a17=(a17+a15);
    if (res[1]!=0) res[1][0]=a17;
    a9=(a9*a10);
    a11=(a11+a9);
    if (res[1]!=0) res[1][1]=a11;
    a12=(a12*a13);
    a14=(a14+a12);
    if (res[1]!=0) res[1][2]=a14;
    a2=(a2*a1);
    a3=(a3+a2);
    if (res[1]!=0) res[1][3]=a3;
    a7=(a7*a6);
    a8=(a8+a7);
    if (res[1]!=0) res[1][4]=a8;
    a8=arg[0] ? arg[0][5] : 0;
    a7=cos(a8);
    a6=arg[1] ? arg[1][8] : 0;
    a7=(a7*a6);
    a7=(a0+a7);
    a3=arg[1] ? arg[1][9] : 0;
    a3=(a7-a3);
    a2=arg[1] ? arg[1][11] : 0;
    a1=cos(a2);
    a14=(a3*a1);
    a12=sin(a8);
    a12=(a12*a6);
    a12=(a5+a12);
    a11=arg[1] ? arg[1][10] : 0;
    a11=(a12-a11);
    a9=sin(a2);
    a17=(a11*a9);
    a14=(a14-a17);
    a17=arg[1] ? arg[1][12] : 0;
    a15=arg[1] ? arg[1][7] : 0;
    a17=(a17+a15);
    a17=sq(a17);
    a14=(a14/a17);
    a4=(a14*a1);
    a18=sin(a2);
    a19=(a3*a18);
    a2=cos(a2);
    a20=(a11*a2);
    a19=(a19+a20);
    a20=arg[1] ? arg[1][13] : 0;
    a20=(a20+a15);
    a20=sq(a20);
    a19=(a19/a20);
    a21=(a19*a18);
    a4=(a4+a21);
    a21=(a4*a3);
    a19=(a19*a2);
    a14=(a14*a9);
    a19=(a19-a14);
    a14=(a19*a11);
    a21=(a21+a14);
    a21=(a21+a13);
    if (res[2]!=0) res[2][0]=a21;
    a21=arg[1] ? arg[1][14] : 0;
    a7=(a7-a21);
    a21=arg[1] ? arg[1][16] : 0;
    a14=cos(a21);
    a22=(a7*a14);
    a23=arg[1] ? arg[1][15] : 0;
    a12=(a12-a23);
    a23=sin(a21);
    a24=(a12*a23);
    a22=(a22-a24);
    a24=arg[1] ? arg[1][17] : 0;
    a24=(a24+a15);
    a24=sq(a24);
    a22=(a22/a24);
    a25=(a22*a14);
    a26=sin(a21);
    a27=(a7*a26);
    a21=cos(a21);
    a28=(a12*a21);
    a27=(a27+a28);
    a28=arg[1] ? arg[1][18] : 0;
    a28=(a28+a15);
    a28=sq(a28);
    a27=(a27/a28);
    a15=(a27*a26);
    a25=(a25+a15);
    a15=(a25*a7);
    a27=(a27*a21);
    a22=(a22*a23);
    a27=(a27-a22);
    a22=(a27*a12);
    a15=(a15+a22);
    a15=(a15+a13);
    if (res[2]!=0) res[2][1]=a15;
    a15=1.;
    if (res[3]!=0) res[3][0]=a15;
    if (res[3]!=0) res[3][1]=a15;
    a13=(a1/a17);
    a22=(a1*a13);
    a29=(a18/a20);
    a30=(a18*a29);
    a22=(a22+a30);
    a22=(a3*a22);
    a22=(a22+a4);
    a29=(a2*a29);
    a13=(a9*a13);
    a29=(a29-a13);
    a29=(a11*a29);
    a22=(a22+a29);
    if (res[3]!=0) res[3][2]=a22;
    a22=(a14/a24);
    a29=(a14*a22);
    a13=(a26/a28);
    a30=(a26*a13);
    a29=(a29+a30);
    a29=(a7*a29);
    a29=(a29+a25);
    a13=(a21*a13);
    a22=(a23*a22);
    a13=(a13-a22);
    a13=(a12*a13);
    a29=(a29+a13);
    if (res[3]!=0) res[3][3]=a29;
    a29=(a2/a20);
    a13=(a18*a29);
    a22=(a9/a17);
    a30=(a1*a22);
    a13=(a13-a30);
    a13=(a3*a13);
    a29=(a2*a29);
    a22=(a9*a22);
    a29=(a29+a22);
    a29=(a11*a29);
    a29=(a29+a19);
    a13=(a13+a29);
    if (res[3]!=0) res[3][4]=a13;
    a13=(a21/a28);
    a29=(a26*a13);
    a22=(a23/a24);
    a30=(a14*a22);
    a29=(a29-a30);
    a29=(a7*a29);
    a13=(a21*a13);
    a22=(a23*a22);
    a13=(a13+a22);
    a13=(a12*a13);
    a13=(a13+a27);
    a29=(a29+a13);
    if (res[3]!=0) res[3][5]=a29;
    a29=cos(a8);
    a29=(a6*a29);
    a13=(a2*a29);
    a22=sin(a8);
    a6=(a6*a22);
    a22=(a18*a6);
    a13=(a13-a22);
    a13=(a13/a20);
    a18=(a18*a13);
    a20=(a1*a6);
    a22=(a9*a29);
    a20=(a20+a22);
    a20=(a20/a17);
    a1=(a1*a20);
    a18=(a18-a1);
    a3=(a3*a18);
    a4=(a4*a6);
    a3=(a3-a4);
    a2=(a2*a13);
    a9=(a9*a20);
    a2=(a2+a9);
    a11=(a11*a2);
    a19=(a19*a29);
    a11=(a11+a19);
    a3=(a3+a11);
    if (res[3]!=0) res[3][6]=a3;
    a3=(a21*a29);
    a11=(a26*a6);
    a3=(a3-a11);
    a3=(a3/a28);
    a26=(a26*a3);
    a28=(a14*a6);
    a11=(a23*a29);
    a28=(a28+a11);
    a28=(a28/a24);
    a14=(a14*a28);
    a26=(a26-a14);
    a7=(a7*a26);
    a25=(a25*a6);
    a7=(a7-a25);
    a21=(a21*a3);
    a23=(a23*a28);
    a21=(a21+a23);
    a12=(a12*a21);
    a27=(a27*a29);
    a12=(a12+a27);
    a7=(a7+a12);
    if (res[3]!=0) res[3][7]=a7;
    a7=cos(a8);
    a12=(a16*a7);
    a27=2.0000000000000001e-01;
    a29=(a27*a10);
    a29=(a8+a29);
    a21=cos(a29);
    a23=(a16*a21);
    a28=2.;
    a23=(a28*a23);
    a12=(a12+a23);
    a23=(a27*a10);
    a23=(a8+a23);
    a3=cos(a23);
    a25=(a16*a3);
    a25=(a28*a25);
    a12=(a12+a25);
    a25=4.0000000000000002e-01;
    a6=(a25*a10);
    a6=(a8+a6);
    a26=cos(a6);
    a14=(a16*a26);
    a12=(a12+a14);
    a14=6.6666666666666666e-02;
    a12=(a14*a12);
    a0=(a0+a12);
    if (res[4]!=0) res[4][0]=a0;
    a0=sin(a8);
    a12=(a16*a0);
    a24=sin(a29);
    a11=(a16*a24);
    a11=(a28*a11);
    a12=(a12+a11);
    a11=sin(a23);
    a19=(a16*a11);
    a19=(a28*a19);
    a12=(a12+a19);
    a19=sin(a6);
    a2=(a16*a19);
    a12=(a12+a2);
    a12=(a14*a12);
    a5=(a5+a12);
    if (res[4]!=0) res[4][1]=a5;
    a5=(a28*a10);
    a5=(a10+a5);
    a12=(a28*a10);
    a5=(a5+a12);
    a5=(a5+a10);
    a5=(a14*a5);
    a5=(a8+a5);
    if (res[4]!=0) res[4][2]=a5;
    a21=(a28*a21);
    a7=(a7+a21);
    a3=(a28*a3);
    a7=(a7+a3);
    a7=(a7+a26);
    a7=(a14*a7);
    if (res[5]!=0) res[5][0]=a7;
    a24=(a28*a24);
    a0=(a0+a24);
    a11=(a28*a11);
    a0=(a0+a11);
    a0=(a0+a19);
    a0=(a14*a0);
    if (res[5]!=0) res[5][1]=a0;
    a0=sin(a29);
    a19=(a27*a0);
    a19=(a16*a19);
    a19=(a28*a19);
    a11=sin(a23);
    a24=(a27*a11);
    a24=(a16*a24);
    a24=(a28*a24);
    a19=(a19+a24);
    a24=sin(a6);
    a7=(a25*a24);
    a7=(a16*a7);
    a19=(a19+a7);
    a19=(a14*a19);
    a19=(-a19);
    if (res[5]!=0) res[5][2]=a19;
    a29=cos(a29);
    a19=(a27*a29);
    a19=(a16*a19);
    a19=(a28*a19);
    a23=cos(a23);
    a27=(a27*a23);
    a27=(a16*a27);
    a27=(a28*a27);
    a19=(a19+a27);
    a6=cos(a6);
    a27=(a25*a6);
    a27=(a16*a27);
    a19=(a19+a27);
    a19=(a14*a19);
    if (res[5]!=0) res[5][3]=a19;
    if (res[5]!=0) res[5][4]=a25;
    if (res[5]!=0) res[5][5]=a15;
    if (res[5]!=0) res[5][6]=a15;
    a25=sin(a8);
    a25=(a16*a25);
    a0=(a16*a0);
    a0=(a28*a0);
    a25=(a25+a0);
    a11=(a16*a11);
    a11=(a28*a11);
    a25=(a25+a11);
    a24=(a16*a24);
    a25=(a25+a24);
    a25=(a14*a25);
    a25=(-a25);
    if (res[5]!=0) res[5][7]=a25;
    a8=cos(a8);
    a8=(a16*a8);
    a29=(a16*a29);
    a29=(a28*a29);
    a8=(a8+a29);
    a23=(a16*a23);
    a28=(a28*a23);
    a8=(a8+a28);
    a16=(a16*a6);
    a8=(a8+a16);
    a14=(a14*a8);
    if (res[5]!=0) res[5][8]=a14;
    if (res[5]!=0) res[5][9]=a15;
    return 0;
}

solver_int32_default FORCESNLPsolver_model_1_init(solver_int32_default *f_type, solver_int32_default *n_in, solver_int32_default *n_out, solver_int32_default *sz_arg, solver_int32_default *sz_res) 
{
    *f_type = 1;
    *n_in = 2;
    *n_out = 6;
    *sz_arg = 2;
    *sz_res = 6;
    return 0;
}

solver_int32_default FORCESNLPsolver_model_1_sparsity(solver_int32_default i, solver_int32_default *nrow, solver_int32_default *ncol, const solver_int32_default **colind, const solver_int32_default **row) 
{
    const solver_int32_default *s;
    switch (i) 
    {
      case 0:
        s = s0;
        break;
      case 1:
        s = s1;
        break;
      case 2:
        s = s2;
        break;
      case 3:
        s = s3;
        break;
      case 4:
        s = s4;
        break;
      case 5:
        s = s5;
        break;
      case 6:
        s = s6;
        break;
      case 7:
        s = s7;
        break;
      default:
        return 1;
    }
    
    *nrow = s[0];
    *ncol = s[1];
    *colind = s + 2;
    *row = s + 2 + (*ncol + 1);
    return 0;
}

solver_int32_default FORCESNLPsolver_model_1_work(solver_int32_default *sz_iw, solver_int32_default *sz_w) 
{
    if (sz_iw) *sz_iw = 0;
    if (sz_w) *sz_w = 31;
    return 0;
}


#ifdef __cplusplus
} /* extern "C" */
#endif
