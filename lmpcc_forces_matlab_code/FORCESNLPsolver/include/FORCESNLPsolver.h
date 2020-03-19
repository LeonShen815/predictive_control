/*
FORCESNLPsolver : A fast customized optimization solver.

Copyright (C) 2013-2019 EMBOTECH AG [info@embotech.com]. All rights reserved.


This software is intended for simulation and testing purposes only. 
Use of this software for any commercial purpose is prohibited.

This program is distributed in the hope that it will be useful.
EMBOTECH makes NO WARRANTIES with respect to the use of the software 
without even the implied warranty of MERCHANTABILITY or FITNESS FOR A 
PARTICULAR PURPOSE. 

EMBOTECH shall not have any liability for any damage arising from the use
of the software.

This Agreement shall exclusively be governed by and interpreted in 
accordance with the laws of Switzerland, excluding its principles
of conflict of laws. The Courts of Zurich-City shall have exclusive 
jurisdiction in case of any dispute.

*/

/* Generated by FORCES PRO v2.0.0 on Thursday, March 19, 2020 at 12:38:05 PM */

#ifndef SOLVER_STDIO_H
#define SOLVER_STDIO_H
#include <stdio.h>
#endif

#ifndef FORCESNLPsolver_H
#define FORCESNLPsolver_H

/* DATA TYPE ------------------------------------------------------------*/
typedef double FORCESNLPsolver_float;

typedef double FORCESNLPsolverinterface_float;

#ifndef SOLVER_STANDARD_TYPES
#define SOLVER_STANDARD_TYPES

typedef signed char solver_int8_signed;
typedef unsigned char solver_int8_unsigned;
typedef char solver_int8_default;
typedef signed short int solver_int16_signed;
typedef unsigned short int solver_int16_unsigned;
typedef short int solver_int16_default;
typedef signed int solver_int32_signed;
typedef unsigned int solver_int32_unsigned;
typedef int solver_int32_default;
typedef signed long long int solver_int64_signed;
typedef unsigned long long int solver_int64_unsigned;
typedef long long int solver_int64_default;

#endif

/* SOLVER SETTINGS ------------------------------------------------------*/

/* MISRA-C compliance */
#ifndef MISRA_C_FORCESNLPsolver
#define MISRA_C_FORCESNLPsolver (0)
#endif

/* restrict code */
#ifndef RESTRICT_CODE_FORCESNLPsolver
#define RESTRICT_CODE_FORCESNLPsolver (0)
#endif

/* print level */
#ifndef SET_PRINTLEVEL_FORCESNLPsolver
#define SET_PRINTLEVEL_FORCESNLPsolver    (1)
#endif

/* timing */
#ifndef SET_TIMING_FORCESNLPsolver
#define SET_TIMING_FORCESNLPsolver    (1)
#endif

/* Numeric Warnings */
/* #define PRINTNUMERICALWARNINGS */

/* maximum number of iterations  */
#define SET_MAXIT_FORCESNLPsolver			(250)	

/* scaling factor of line search (FTB rule) */
#define SET_FLS_SCALE_FORCESNLPsolver		(FORCESNLPsolver_float)(0.99)      

/* maximum number of supported elements in the filter */
#define MAX_FILTER_SIZE_FORCESNLPsolver	(250) 

/* maximum number of supported elements in the filter */
#define MAX_SOC_IT_FORCESNLPsolver			(4) 

/* desired relative duality gap */
#define SET_ACC_RDGAP_FORCESNLPsolver		(FORCESNLPsolver_float)(0.0001)

/* desired maximum residual on equality constraints */
#define SET_ACC_RESEQ_FORCESNLPsolver		(FORCESNLPsolver_float)(1E-06)

/* desired maximum residual on inequality constraints */
#define SET_ACC_RESINEQ_FORCESNLPsolver	(FORCESNLPsolver_float)(1E-06)

/* desired maximum violation of complementarity */
#define SET_ACC_KKTCOMPL_FORCESNLPsolver	(FORCESNLPsolver_float)(1E-06)


/* RETURN CODES----------------------------------------------------------*/
/* solver has converged within desired accuracy */
#define OPTIMAL_FORCESNLPsolver      (1)

/* maximum number of iterations has been reached */
#define MAXITREACHED_FORCESNLPsolver (0)

/* wrong number of inequalities error */
#define INVALID_NUM_INEQ_ERROR_FORCESNLPsolver  (-4)

/* factorization error */
#define FACTORIZATION_ERROR_FORCESNLPsolver   (-5)

/* NaN encountered in function evaluations */
#define BADFUNCEVAL_FORCESNLPsolver  (-6)

/* no progress in method possible */
#define NOPROGRESS_FORCESNLPsolver   (-7)

/* invalid values in parameters */
#define PARAM_VALUE_ERROR_FORCESNLPsolver   (-11)

/* licensing error - solver not valid on this machine */
#define LICENSE_ERROR_FORCESNLPsolver  (-100)



/* PARAMETERS -----------------------------------------------------------*/
/* fill this with data before calling the solver! */
typedef struct
{
    /* vector of size 84 */
    FORCESNLPsolver_float x0[84];

    /* vector of size 4 */
    FORCESNLPsolver_float xinit[4];

    /* vector of size 480 */
    FORCESNLPsolver_float all_parameters[480];


} FORCESNLPsolver_params;


/* OUTPUTS --------------------------------------------------------------*/
/* the desired variables are put here by the solver */
typedef struct
{
    /* vector of size 7 */
    FORCESNLPsolver_float x01[7];

    /* vector of size 7 */
    FORCESNLPsolver_float x02[7];

    /* vector of size 7 */
    FORCESNLPsolver_float x03[7];

    /* vector of size 7 */
    FORCESNLPsolver_float x04[7];

    /* vector of size 7 */
    FORCESNLPsolver_float x05[7];

    /* vector of size 7 */
    FORCESNLPsolver_float x06[7];

    /* vector of size 7 */
    FORCESNLPsolver_float x07[7];

    /* vector of size 7 */
    FORCESNLPsolver_float x08[7];

    /* vector of size 7 */
    FORCESNLPsolver_float x09[7];

    /* vector of size 7 */
    FORCESNLPsolver_float x10[7];

    /* vector of size 7 */
    FORCESNLPsolver_float x11[7];

    /* vector of size 7 */
    FORCESNLPsolver_float x12[7];


} FORCESNLPsolver_output;


/* SOLVER INFO ----------------------------------------------------------*/
/* diagnostic data from last interior point step */
typedef struct
{
    /* iteration number */
    solver_int32_default it;

	/* number of iterations needed to optimality (branch-and-bound) */
	solver_int32_default it2opt;
	
    /* inf-norm of equality constraint residuals */
    FORCESNLPsolver_float res_eq;
	
    /* inf-norm of inequality constraint residuals */
    FORCESNLPsolver_float res_ineq;

	/* norm of stationarity condition */
    FORCESNLPsolver_float rsnorm;

	/* max of all complementarity violations */
    FORCESNLPsolver_float rcompnorm;

    /* primal objective */
    FORCESNLPsolver_float pobj;	
	
    /* dual objective */
    FORCESNLPsolver_float dobj;	

    /* duality gap := pobj - dobj */
    FORCESNLPsolver_float dgap;		
	
    /* relative duality gap := |dgap / pobj | */
    FORCESNLPsolver_float rdgap;		

    /* duality measure */
    FORCESNLPsolver_float mu;

	/* duality measure (after affine step) */
    FORCESNLPsolver_float mu_aff;
	
    /* centering parameter */
    FORCESNLPsolver_float sigma;
	
    /* number of backtracking line search steps (affine direction) */
    solver_int32_default lsit_aff;
    
    /* number of backtracking line search steps (combined direction) */
    solver_int32_default lsit_cc;
    
    /* step size (affine direction) */
    FORCESNLPsolver_float step_aff;
    
    /* step size (combined direction) */
    FORCESNLPsolver_float step_cc;    

	/* solvertime */
	FORCESNLPsolver_float solvetime;   

	/* time spent in function evaluations */
	FORCESNLPsolver_float fevalstime;  

} FORCESNLPsolver_info;







/* SOLVER FUNCTION DEFINITION -------------------------------------------*/
/* User License expires on: (UTC) Tuesday, April 14, 2020 9:00:00 PM (approx.) */
/* Solver License expires on: (UTC) Tuesday, April 14, 2020 9:00:00 PM (approx.) */
/* Solver Generation Request Id: 0db7bec2-bade-46df-acd4-b8e975f5e277 */
/* examine exitflag before using the result! */
#ifdef __cplusplus
extern "C" {
#endif		

typedef void (*FORCESNLPsolver_extfunc)(FORCESNLPsolver_float* x, FORCESNLPsolver_float* y, FORCESNLPsolver_float* lambda, FORCESNLPsolver_float* params, FORCESNLPsolver_float* pobj, FORCESNLPsolver_float* g, FORCESNLPsolver_float* c, FORCESNLPsolver_float* Jeq, FORCESNLPsolver_float* h, FORCESNLPsolver_float* Jineq, FORCESNLPsolver_float* H, solver_int32_default stage, solver_int32_default iterations);

extern solver_int32_default FORCESNLPsolver_solve(FORCESNLPsolver_params *params, FORCESNLPsolver_output *output, FORCESNLPsolver_info *info, FILE *fs, FORCESNLPsolver_extfunc evalextfunctions_FORCESNLPsolver);	





#ifdef __cplusplus
}
#endif

#endif
