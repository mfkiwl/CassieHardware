/*
 * Automatically Generated from Mathematica.
 * Thu 26 Aug 2021 14:19:29 GMT-07:00
 */

#ifdef MATLAB_MEX_FILE
// No need to include header
#else
#include "p_rightHeel_constraint.hh"
#endif

#ifdef MATLAB_MEX_FILE
#include <stdexcept>
#include <cmath>
#include<math.h>
/**
 * Copied from Wolfram Mathematica C Definitions file mdefs.hpp
 * Changed marcos to inline functions (Eric Cousineau)
 */
inline double Power(double x, double y) { return pow(x, y); }
inline double Sqrt(double x) { return sqrt(x); }

inline double Abs(double x) { return fabs(x); }

inline double Exp(double x) { return exp(x); }
inline double Log(double x) { return log(x); }

inline double Sin(double x) { return sin(x); }
inline double Cos(double x) { return cos(x); }
inline double Tan(double x) { return tan(x); }

inline double ArcSin(double x) { return asin(x); }
inline double ArcCos(double x) { return acos(x); }
inline double ArcTan(double x) { return atan(x); }

/* update ArcTan function to use atan2 instead. */
inline double ArcTan(double x, double y) { return atan2(y,x); }

inline double Sinh(double x) { return sinh(x); }
inline double Cosh(double x) { return cosh(x); }
inline double Tanh(double x) { return tanh(x); }

const double E	= 2.71828182845904523536029;
const double Pi = 3.14159265358979323846264;
const double Degree = 0.01745329251994329576924;

inline double Sec(double x) { return 1/cos(x); }
inline double Csc(double x) { return 1/sin(x); }

#endif

/*
 * Sub functions
 */
static void output1(double *p_output1,const double *var1)
{
  double t14;
  double t27;
  double t35;
  double t38;
  double t53;
  double t72;
  double t99;
  double t113;
  double t130;
  double t23;
  double t155;
  double t156;
  double t159;
  double t167;
  double t171;
  double t175;
  double t179;
  double t213;
  double t227;
  double t229;
  double t275;
  double t278;
  double t281;
  double t284;
  double t286;
  double t287;
  double t301;
  double t317;
  double t320;
  double t322;
  double t342;
  double t343;
  double t348;
  double t352;
  double t355;
  double t358;
  double t361;
  double t365;
  double t368;
  double t373;
  double t395;
  double t404;
  double t405;
  double t417;
  double t420;
  double t422;
  double t430;
  double t451;
  double t454;
  double t455;
  double t463;
  double t466;
  double t467;
  double t470;
  double t471;
  double t472;
  double t476;
  double t483;
  double t487;
  double t489;
  double t512;
  double t516;
  double t517;
  double t74;
  double t76;
  double t42;
  double t56;
  double t63;
  double t545;
  double t114;
  double t117;
  double t125;
  double t129;
  double t554;
  double t133;
  double t144;
  double t152;
  double t560;
  double t567;
  double t570;
  double t177;
  double t180;
  double t209;
  double t551;
  double t555;
  double t558;
  double t581;
  double t582;
  double t583;
  double t266;
  double t271;
  double t274;
  double t294;
  double t307;
  double t314;
  double t602;
  double t603;
  double t605;
  double t617;
  double t620;
  double t622;
  double t331;
  double t333;
  double t339;
  double t360;
  double t363;
  double t364;
  double t625;
  double t626;
  double t629;
  double t634;
  double t635;
  double t637;
  double t390;
  double t391;
  double t393;
  double t424;
  double t446;
  double t448;
  double t640;
  double t641;
  double t645;
  double t653;
  double t654;
  double t657;
  double t458;
  double t459;
  double t460;
  double t475;
  double t481;
  double t482;
  double t661;
  double t662;
  double t666;
  double t670;
  double t672;
  double t674;
  double t498;
  double t507;
  double t509;
  double t679;
  double t680;
  double t681;
  double t686;
  double t688;
  double t690;
  double t722;
  double t726;
  double t729;
  double t711;
  double t713;
  double t714;
  double t735;
  double t736;
  double t739;
  double t744;
  double t750;
  double t751;
  double t768;
  double t769;
  double t775;
  double t777;
  double t779;
  double t780;
  double t783;
  double t784;
  double t785;
  double t788;
  double t795;
  double t796;
  double t798;
  double t799;
  double t800;
  double t805;
  double t807;
  double t809;
  double t818;
  double t819;
  double t821;
  double t825;
  double t826;
  double t827;
  double t833;
  double t835;
  double t838;
  t14 = Cos(var1[4]);
  t27 = Cos(var1[15]);
  t35 = -1.*t27;
  t38 = 1. + t35;
  t53 = Sin(var1[15]);
  t72 = Sin(var1[14]);
  t99 = Sin(var1[4]);
  t113 = Cos(var1[14]);
  t130 = Sin(var1[5]);
  t23 = Cos(var1[5]);
  t155 = t72*t99;
  t156 = -1.*t113*t14*t130;
  t159 = t155 + t156;
  t167 = Cos(var1[16]);
  t171 = -1.*t167;
  t175 = 1. + t171;
  t179 = Sin(var1[16]);
  t213 = t113*t99;
  t227 = t14*t72*t130;
  t229 = t213 + t227;
  t275 = t27*t14*t23;
  t278 = t53*t159;
  t281 = t275 + t278;
  t284 = Cos(var1[17]);
  t286 = -1.*t284;
  t287 = 1. + t286;
  t301 = Sin(var1[17]);
  t317 = t179*t229;
  t320 = t167*t281;
  t322 = t317 + t320;
  t342 = t167*t229;
  t343 = -1.*t179*t281;
  t348 = t342 + t343;
  t352 = Cos(var1[18]);
  t355 = -1.*t352;
  t358 = 1. + t355;
  t361 = Sin(var1[18]);
  t365 = -1.*t301*t322;
  t368 = t284*t348;
  t373 = t365 + t368;
  t395 = t284*t322;
  t404 = t301*t348;
  t405 = t395 + t404;
  t417 = Cos(var1[19]);
  t420 = -1.*t417;
  t422 = 1. + t420;
  t430 = Sin(var1[19]);
  t451 = t361*t373;
  t454 = t352*t405;
  t455 = t451 + t454;
  t463 = t352*t373;
  t466 = -1.*t361*t405;
  t467 = t463 + t466;
  t470 = Cos(var1[21]);
  t471 = -1.*t470;
  t472 = 1. + t471;
  t476 = Sin(var1[21]);
  t483 = -1.*t430*t455;
  t487 = t417*t467;
  t489 = t483 + t487;
  t512 = t417*t455;
  t516 = t430*t467;
  t517 = t512 + t516;
  t74 = 0.135*t72;
  t76 = 0. + t74;
  t42 = -0.049*t38;
  t56 = -0.135*t53;
  t63 = 0. + t42 + t56;
  t545 = Sin(var1[3]);
  t114 = -1.*t113;
  t117 = 1. + t114;
  t125 = -0.135*t117;
  t129 = 0. + t125;
  t554 = Cos(var1[3]);
  t133 = -0.135*t38;
  t144 = 0.049*t53;
  t152 = 0. + t133 + t144;
  t560 = t554*t23;
  t567 = -1.*t545*t99*t130;
  t570 = t560 + t567;
  t177 = -0.09*t175;
  t180 = 0.049*t179;
  t209 = 0. + t177 + t180;
  t551 = t23*t545*t99;
  t555 = t554*t130;
  t558 = t551 + t555;
  t581 = -1.*t14*t72*t545;
  t582 = t113*t570;
  t583 = t581 + t582;
  t266 = -0.049*t175;
  t271 = -0.09*t179;
  t274 = 0. + t266 + t271;
  t294 = -0.049*t287;
  t307 = -0.21*t301;
  t314 = 0. + t294 + t307;
  t602 = -1.*t113*t14*t545;
  t603 = -1.*t72*t570;
  t605 = t602 + t603;
  t617 = t27*t558;
  t620 = t53*t583;
  t622 = t617 + t620;
  t331 = -0.21*t287;
  t333 = 0.049*t301;
  t339 = 0. + t331 + t333;
  t360 = -0.27068*t358;
  t363 = 0.00159*t361;
  t364 = 0. + t360 + t363;
  t625 = t179*t605;
  t626 = t167*t622;
  t629 = t625 + t626;
  t634 = t167*t605;
  t635 = -1.*t179*t622;
  t637 = t634 + t635;
  t390 = -0.00159*t358;
  t391 = -0.27068*t361;
  t393 = 0. + t390 + t391;
  t424 = 0.01841*t422;
  t446 = -0.70544*t430;
  t448 = 0. + t424 + t446;
  t640 = -1.*t301*t629;
  t641 = t284*t637;
  t645 = t640 + t641;
  t653 = t284*t629;
  t654 = t301*t637;
  t657 = t653 + t654;
  t458 = -0.70544*t422;
  t459 = -0.01841*t430;
  t460 = 0. + t458 + t459;
  t475 = -1.11344*t472;
  t481 = 0.02159*t476;
  t482 = 0. + t475 + t481;
  t661 = t361*t645;
  t662 = t352*t657;
  t666 = t661 + t662;
  t670 = t352*t645;
  t672 = -1.*t361*t657;
  t674 = t670 + t672;
  t498 = -0.02159*t472;
  t507 = -1.11344*t476;
  t509 = 0. + t498 + t507;
  t679 = -1.*t430*t666;
  t680 = t417*t674;
  t681 = t679 + t680;
  t686 = t417*t666;
  t688 = t430*t674;
  t690 = t686 + t688;
  t722 = t23*t545;
  t726 = t554*t99*t130;
  t729 = t722 + t726;
  t711 = -1.*t554*t23*t99;
  t713 = t545*t130;
  t714 = t711 + t713;
  t735 = t554*t14*t72;
  t736 = t113*t729;
  t739 = t735 + t736;
  t744 = t113*t554*t14;
  t750 = -1.*t72*t729;
  t751 = t744 + t750;
  t768 = t27*t714;
  t769 = t53*t739;
  t775 = t768 + t769;
  t777 = t179*t751;
  t779 = t167*t775;
  t780 = t777 + t779;
  t783 = t167*t751;
  t784 = -1.*t179*t775;
  t785 = t783 + t784;
  t788 = -1.*t301*t780;
  t795 = t284*t785;
  t796 = t788 + t795;
  t798 = t284*t780;
  t799 = t301*t785;
  t800 = t798 + t799;
  t805 = t361*t796;
  t807 = t352*t800;
  t809 = t805 + t807;
  t818 = t352*t796;
  t819 = -1.*t361*t800;
  t821 = t818 + t819;
  t825 = -1.*t430*t809;
  t826 = t417*t821;
  t827 = t825 + t826;
  t833 = t417*t809;
  t835 = t430*t821;
  t838 = t833 + t835;
  p_output1[0]=0. - 1.*t129*t130*t14 + t152*t159 + t209*t229 + t274*t281 + t314*t322 + t339*t348 + t364*t373 + t393*t405 + t448*t455 + t460*t467 + t482*t489 + t509*t517 - 0.014395*(t476*t489 + t470*t517) - 1.184683*(t470*t489 - 1.*t476*t517) - 0.1305*(t159*t27 - 1.*t14*t23*t53) + t14*t23*t63 + t76*t99 + var1[0];
  p_output1[1]=0. + t129*t570 + t152*t583 - 0.1305*(-1.*t53*t558 + t27*t583) + t209*t605 + t274*t622 + t314*t629 + t558*t63 + t339*t637 + t364*t645 + t393*t657 + t448*t666 + t460*t674 + t482*t681 + t509*t690 - 0.014395*(t476*t681 + t470*t690) - 1.184683*(t470*t681 - 1.*t476*t690) - 1.*t14*t545*t76 + var1[1];
  p_output1[2]=0. + t63*t714 + t129*t729 + t152*t739 - 0.1305*(-1.*t53*t714 + t27*t739) + t209*t751 + t14*t554*t76 + t274*t775 + t314*t780 + t339*t785 + t364*t796 + t393*t800 + t448*t809 + t460*t821 + t482*t827 + t509*t838 - 0.014395*(t476*t827 + t470*t838) - 1.184683*(t470*t827 - 1.*t476*t838) + var1[2];
}



#ifdef MATLAB_MEX_FILE

#include "mex.h"
/*
 * Main function
 */
void mexFunction( int nlhs, mxArray *plhs[],
                  int nrhs, const mxArray *prhs[] )
{
  size_t mrows, ncols;

  double *var1;
  double *p_output1;

  /*  Check for proper number of arguments.  */ 
  if( nrhs != 1)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:invalidNumInputs", "One input(s) required (var1).");
    }
  else if( nlhs > 1)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:maxlhs", "Too many output arguments.");
    }

  /*  The input must be a noncomplex double vector or scaler.  */
  mrows = mxGetM(prhs[0]);
  ncols = mxGetN(prhs[0]);
  if( !mxIsDouble(prhs[0]) || mxIsComplex(prhs[0]) ||
    ( !(mrows == 22 && ncols == 1) && 
      !(mrows == 1 && ncols == 22))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var1 is wrong.");
    }

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 3, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#endif // MATLAB_MEX_FILE

namespace SymFunction
{

void p_rightHeel_constraint_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}




