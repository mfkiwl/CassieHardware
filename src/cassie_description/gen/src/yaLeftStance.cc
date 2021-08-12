/*
 * Automatically Generated from Mathematica.
 * Tue 2 Feb 2021 13:46:52 GMT-08:00
 */

#ifdef MATLAB_MEX_FILE
// No need to include header
#else
#include "yaLeftStance.hh"
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
  double t36;
  double t54;
  double t58;
  double t61;
  double t119;
  double t253;
  double t366;
  double t370;
  double t378;
  double t430;
  double t444;
  double t454;
  double t501;
  double t516;
  double t526;
  double t564;
  double t572;
  double t585;
  double t599;
  double t600;
  double t604;
  double t616;
  double t669;
  double t673;
  double t682;
  double t736;
  double t744;
  double t747;
  double t297;
  double t316;
  double t321;
  double t117;
  double t143;
  double t162;
  double t545;
  double t555;
  double t557;
  double t447;
  double t463;
  double t467;
  double t703;
  double t710;
  double t731;
  double t848;
  double t853;
  double t857;
  double t608;
  double t631;
  double t646;
  double t877;
  double t878;
  double t894;
  double t898;
  double t900;
  double t973;
  double t976;
  double t979;
  double t982;
  double t983;
  double t988;
  double t1013;
  double t1015;
  double t1016;
  double t1017;
  double t1024;
  double t1048;
  double t1061;
  double t1065;
  double t1068;
  double t1105;
  double t1116;
  double t1134;
  double t1164;
  double t1175;
  double t1178;
  double t1187;
  double t1198;
  double t1202;
  double t1206;
  double t1148;
  double t1154;
  double t1160;
  double t984;
  double t993;
  double t997;
  double t1000;
  double t1005;
  double t1008;
  double t1080;
  double t1086;
  double t1094;
  double t1031;
  double t1050;
  double t1060;
  double t1282;
  double t1285;
  double t1286;
  double t1180;
  double t1191;
  double t1195;
  double t1208;
  double t1214;
  double t1216;
  double t1301;
  double t1307;
  double t1309;
  double t1316;
  double t1321;
  double t1324;
  double t1332;
  double t1333;
  double t1343;
  double t1351;
  double t1360;
  double t1221;
  double t1222;
  double t1230;
  double t1242;
  double t1245;
  double t1252;
  double t1527;
  double t1528;
  double t1519;
  double t1540;
  double t1542;
  double t1547;
  double t1524;
  double t1532;
  double t1533;
  double t1537;
  double t1549;
  double t1551;
  double t1554;
  double t1563;
  double t1565;
  double t1584;
  double t1585;
  double t1601;
  double t1553;
  double t1569;
  double t1577;
  double t1632;
  double t1642;
  double t1645;
  double t1646;
  double t1647;
  double t1655;
  double t1636;
  double t1656;
  double t1660;
  double t1666;
  double t1669;
  double t1671;
  double t1664;
  double t1675;
  double t1680;
  double t1688;
  double t1690;
  double t1693;
  double t1683;
  double t1694;
  double t1695;
  double t1701;
  double t1702;
  double t1703;
  double t1739;
  double t1740;
  double t1744;
  double t1737;
  double t1749;
  double t1754;
  double t1766;
  double t1767;
  double t1774;
  double t1755;
  double t1777;
  double t1786;
  double t1789;
  double t1790;
  double t1794;
  double t1788;
  double t1795;
  double t1800;
  double t1805;
  double t1806;
  double t1809;
  t36 = Cos(var1[8]);
  t54 = Cos(var1[9]);
  t58 = -1.*t54;
  t61 = 1. + t58;
  t119 = Sin(var1[9]);
  t253 = Sin(var1[8]);
  t366 = -1.*var1[9];
  t370 = 0.226893 + t366;
  t378 = Cos(t370);
  t430 = -1.*t378;
  t444 = 1. + t430;
  t454 = Sin(t370);
  t501 = -1.*t36*t119;
  t516 = -1.*t54*t253;
  t526 = t501 + t516;
  t564 = t54*t36;
  t572 = -1.*t119*t253;
  t585 = t564 + t572;
  t599 = Cos(var1[13]);
  t600 = -1.*t599;
  t604 = 1. + t600;
  t616 = Sin(var1[13]);
  t669 = t454*t526;
  t673 = t378*t585;
  t682 = t669 + t673;
  t736 = t378*t526;
  t744 = -1.*t454*t585;
  t747 = t736 + t744;
  t297 = -0.21*t61;
  t316 = 0.049*t119;
  t321 = t297 + t316;
  t117 = -0.049*t61;
  t143 = -0.21*t119;
  t162 = t117 + t143;
  t545 = 0.01841*t444;
  t555 = -0.70544*t454;
  t557 = t545 + t555;
  t447 = -0.70544*t444;
  t463 = -0.01841*t454;
  t467 = t447 + t463;
  t703 = -1.11344*t604;
  t710 = 0.02159*t616;
  t731 = t703 + t710;
  t848 = t36*t119;
  t853 = t54*t253;
  t857 = t848 + t853;
  t608 = -0.02159*t604;
  t631 = -1.11344*t616;
  t646 = t608 + t631;
  t877 = -1.*t454*t857;
  t878 = t877 + t673;
  t894 = t378*t857;
  t898 = t454*t585;
  t900 = t894 + t898;
  t973 = Cos(var1[16]);
  t976 = Sin(var1[16]);
  t979 = Cos(var1[17]);
  t982 = -1.*t979;
  t983 = 1. + t982;
  t988 = Sin(var1[17]);
  t1013 = -1.*var1[17];
  t1015 = 0.226893 + t1013;
  t1016 = Cos(t1015);
  t1017 = -1.*t1016;
  t1024 = 1. + t1017;
  t1048 = Sin(t1015);
  t1061 = -1.*t979*t976;
  t1065 = -1.*t973*t988;
  t1068 = t1061 + t1065;
  t1105 = t973*t979;
  t1116 = -1.*t976*t988;
  t1134 = t1105 + t1116;
  t1164 = Cos(var1[21]);
  t1175 = -1.*t1164;
  t1178 = 1. + t1175;
  t1187 = Sin(var1[21]);
  t1198 = t1016*t1068;
  t1202 = -1.*t1048*t1134;
  t1206 = t1198 + t1202;
  t1148 = t1048*t1068;
  t1154 = t1016*t1134;
  t1160 = t1148 + t1154;
  t984 = -0.049*t983;
  t993 = -0.21*t988;
  t997 = t984 + t993;
  t1000 = -0.21*t983;
  t1005 = 0.049*t988;
  t1008 = t1000 + t1005;
  t1080 = 0.01841*t1024;
  t1086 = -0.70544*t1048;
  t1094 = t1080 + t1086;
  t1031 = -0.70544*t1024;
  t1050 = -0.01841*t1048;
  t1060 = t1031 + t1050;
  t1282 = t979*t976;
  t1285 = t973*t988;
  t1286 = t1282 + t1285;
  t1180 = -0.02159*t1178;
  t1191 = -1.11344*t1187;
  t1195 = t1180 + t1191;
  t1208 = -1.11344*t1178;
  t1214 = 0.02159*t1187;
  t1216 = t1208 + t1214;
  t1301 = t1016*t1286;
  t1307 = t1048*t1134;
  t1309 = t1301 + t1307;
  t1316 = -1.*t1048*t1286;
  t1321 = t1316 + t1154;
  t1324 = t1164*t1309;
  t1332 = t1321*t1187;
  t1333 = t1324 + t1332;
  t1343 = t1164*t1321;
  t1351 = -1.*t1309*t1187;
  t1360 = t1343 + t1351;
  t1221 = t1164*t1206;
  t1222 = -1.*t1160*t1187;
  t1230 = t1221 + t1222;
  t1242 = t1164*t1160;
  t1245 = t1206*t1187;
  t1252 = t1242 + t1245;
  t1527 = Cos(var1[14]);
  t1528 = Sin(var1[15]);
  t1519 = Sin(var1[14]);
  t1540 = t1527*t973*t1528;
  t1542 = -1.*t1519*t976;
  t1547 = t1540 + t1542;
  t1524 = -1.*t973*t1519;
  t1532 = -1.*t1527*t1528*t976;
  t1533 = t1524 + t1532;
  t1537 = t979*t1533;
  t1549 = -1.*t1547*t988;
  t1551 = t1537 + t1549;
  t1554 = t979*t1547;
  t1563 = t1533*t988;
  t1565 = t1554 + t1563;
  t1584 = t1048*t1551;
  t1585 = t1016*t1565;
  t1601 = t1584 + t1585;
  t1553 = t1016*t1551;
  t1569 = -1.*t1048*t1565;
  t1577 = t1553 + t1569;
  t1632 = Sin(var1[4]);
  t1642 = Cos(var1[15]);
  t1645 = Cos(var1[4]);
  t1646 = t1642*t1645;
  t1647 = t1519*t1528*t1632;
  t1655 = t1646 + t1647;
  t1636 = t1527*t976*t1632;
  t1656 = t973*t1655;
  t1660 = t1636 + t1656;
  t1666 = t1527*t973*t1632;
  t1669 = -1.*t976*t1655;
  t1671 = t1666 + t1669;
  t1664 = -1.*t988*t1660;
  t1675 = t979*t1671;
  t1680 = t1664 + t1675;
  t1688 = t979*t1660;
  t1690 = t988*t1671;
  t1693 = t1688 + t1690;
  t1683 = t1048*t1680;
  t1694 = t1016*t1693;
  t1695 = t1683 + t1694;
  t1701 = t1016*t1680;
  t1702 = -1.*t1048*t1693;
  t1703 = t1701 + t1702;
  t1739 = t1645*t1519*t1528;
  t1740 = -1.*t1642*t1632;
  t1744 = t1739 + t1740;
  t1737 = t1527*t1645*t976;
  t1749 = t973*t1744;
  t1754 = t1737 + t1749;
  t1766 = t1527*t973*t1645;
  t1767 = -1.*t976*t1744;
  t1774 = t1766 + t1767;
  t1755 = -1.*t988*t1754;
  t1777 = t979*t1774;
  t1786 = t1755 + t1777;
  t1789 = t979*t1754;
  t1790 = t988*t1774;
  t1794 = t1789 + t1790;
  t1788 = t1048*t1786;
  t1795 = t1016*t1794;
  t1800 = t1788 + t1795;
  t1805 = t1016*t1786;
  t1806 = -1.*t1048*t1794;
  t1809 = t1805 + t1806;
  p_output1[0]=var1[3];
  p_output1[1]=var1[4];
  p_output1[2]=var1[7];
  p_output1[3]=Sqrt(0.00002025 + Power(-0.09*t253 - 1.*t253*t321 + 0.049*t36 + t162*t36 + t467*t526 + t557*t585 + t646*t682 + t731*t747 - 1.11344*(-1.*t616*t682 + t599*t747) - 0.02159*(t599*t682 + t616*t747),2) + Power(0.049*t253 + t162*t253 + 0.09*t36 + t321*t36 + t467*t585 + t557*t857 + t731*t878 + t646*t900 - 0.02159*(t616*t878 + t599*t900) - 1.11344*(t599*t878 - 1.*t616*t900),2));
  p_output1[4]=Sqrt(0.00002025 + Power(t1060*t1068 + t1094*t1134 + t1160*t1195 + t1206*t1216 - 1.11344*t1230 - 0.02159*t1252 + 0.049*t973 - 0.09*t976 - 1.*t1008*t976 + t973*t997,2) + Power(t1060*t1134 + t1094*t1286 + t1195*t1309 + t1216*t1321 - 0.02159*t1333 - 1.11344*t1360 + 0.09*t973 + t1008*t973 + 0.049*t976 + t976*t997,2));
  p_output1[5]=ArcTan(-1.*t1060*t1134 - 1.*t1094*t1286 - 1.*t1195*t1309 - 1.*t1216*t1321 + 0.02159*t1333 + 1.11344*t1360 - 0.09*t973 - 1.*t1008*t973 - 0.049*t976 - 1.*t976*t997,-1.*t1060*t1068 - 1.*t1094*t1134 - 1.*t1160*t1195 - 1.*t1206*t1216 + 1.11344*t1230 + 0.02159*t1252 - 0.049*t973 + 0.09*t976 + t1008*t976 - 1.*t973*t997);
  p_output1[6]=var1[14];
  p_output1[7]=var1[15];
  p_output1[8]=ArcTan(Sqrt(Power(0.642788*(t1187*t1577 + t1164*t1601) + 0.766044*(t1164*t1577 - 1.*t1187*t1601),2) + Power(0.766044*(-1.*t1187*t1695 + t1164*t1703) + 0.642788*(t1164*t1695 + t1187*t1703),2)),-0.766044*(-1.*t1187*t1800 + t1164*t1809) - 0.642788*(t1164*t1800 + t1187*t1809));
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 9, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#endif // MATLAB_MEX_FILE

namespace SymFunction
{

void yaLeftStance_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}




