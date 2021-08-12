/*
 * Automatically Generated from Mathematica.
 * Tue 2 Feb 2021 13:46:12 GMT-08:00
 */

#ifdef MATLAB_MEX_FILE
// No need to include header
#else
#include "p_leftPoint_constraint.hh"
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
  double t103;
  double t110;
  double t181;
  double t210;
  double t264;
  double t494;
  double t531;
  double t567;
  double t652;
  double t361;
  double t381;
  double t479;
  double t718;
  double t799;
  double t806;
  double t819;
  double t823;
  double t758;
  double t773;
  double t777;
  double t855;
  double t872;
  double t874;
  double t922;
  double t924;
  double t932;
  double t957;
  double t975;
  double t980;
  double t1004;
  double t1029;
  double t1032;
  double t1034;
  double t1040;
  double t1042;
  double t1046;
  double t1058;
  double t1063;
  double t1064;
  double t1069;
  double t1103;
  double t1113;
  double t1130;
  double t1136;
  double t1142;
  double t1149;
  double t1158;
  double t1169;
  double t1172;
  double t1184;
  double t1205;
  double t1223;
  double t1227;
  double t167;
  double t180;
  double t1302;
  double t1295;
  double t1300;
  double t1335;
  double t1337;
  double t635;
  double t654;
  double t681;
  double t719;
  double t725;
  double t727;
  double t1350;
  double t1361;
  double t1363;
  double t1380;
  double t1388;
  double t1391;
  double t820;
  double t826;
  double t843;
  double t890;
  double t902;
  double t909;
  double t952;
  double t963;
  double t971;
  double t1423;
  double t1440;
  double t1467;
  double t1477;
  double t1479;
  double t1485;
  double t1019;
  double t1022;
  double t1028;
  double t1052;
  double t1059;
  double t1062;
  double t1500;
  double t1505;
  double t1507;
  double t1513;
  double t1517;
  double t1520;
  double t1084;
  double t1093;
  double t1099;
  double t1150;
  double t1162;
  double t1166;
  double t1539;
  double t1543;
  double t1545;
  double t1552;
  double t1557;
  double t1560;
  double t1197;
  double t1203;
  double t1204;
  double t1566;
  double t1568;
  double t1570;
  double t1576;
  double t1592;
  double t1593;
  double t1733;
  double t1736;
  double t1738;
  double t1757;
  double t1761;
  double t1764;
  double t1776;
  double t1780;
  double t1804;
  double t1844;
  double t1848;
  double t1861;
  double t1870;
  double t1878;
  double t1881;
  double t1885;
  double t1899;
  double t1903;
  double t1907;
  double t1909;
  double t1910;
  double t1916;
  double t1923;
  double t1924;
  double t1928;
  double t1932;
  double t1938;
  double t1950;
  double t1955;
  double t1961;
  double t1973;
  double t1978;
  double t1981;
  double t2077;
  double t2080;
  double t2081;
  double t2108;
  double t2112;
  double t2113;
  double t1672;
  double t1716;
  double t1717;
  double t2129;
  double t2138;
  double t2149;
  double t2154;
  double t1284;
  double t1290;
  double t1291;
  t103 = Cos(var1[4]);
  t110 = Cos(var1[6]);
  t181 = Sin(var1[5]);
  t210 = Sin(var1[4]);
  t264 = Sin(var1[6]);
  t494 = Cos(var1[7]);
  t531 = -1.*t494;
  t567 = 1. + t531;
  t652 = Sin(var1[7]);
  t361 = -1.*t103*t110*t181;
  t381 = t210*t264;
  t479 = t361 + t381;
  t718 = Cos(var1[5]);
  t799 = Cos(var1[8]);
  t806 = -1.*t799;
  t819 = 1. + t806;
  t823 = Sin(var1[8]);
  t758 = t103*t718*t494;
  t773 = t479*t652;
  t777 = t758 + t773;
  t855 = t110*t210;
  t872 = t103*t181*t264;
  t874 = t855 + t872;
  t922 = Cos(var1[9]);
  t924 = -1.*t922;
  t932 = 1. + t924;
  t957 = Sin(var1[9]);
  t975 = t799*t777;
  t980 = t874*t823;
  t1004 = t975 + t980;
  t1029 = t799*t874;
  t1032 = -1.*t777*t823;
  t1034 = t1029 + t1032;
  t1040 = Cos(var1[10]);
  t1042 = -1.*t1040;
  t1046 = 1. + t1042;
  t1058 = Sin(var1[10]);
  t1063 = -1.*t957*t1004;
  t1064 = t922*t1034;
  t1069 = t1063 + t1064;
  t1103 = t922*t1004;
  t1113 = t957*t1034;
  t1130 = t1103 + t1113;
  t1136 = Cos(var1[11]);
  t1142 = -1.*t1136;
  t1149 = 1. + t1142;
  t1158 = Sin(var1[11]);
  t1169 = t1058*t1069;
  t1172 = t1040*t1130;
  t1184 = t1169 + t1172;
  t1205 = t1040*t1069;
  t1223 = -1.*t1058*t1130;
  t1227 = t1205 + t1223;
  t167 = -1.*t110;
  t180 = 1. + t167;
  t1302 = Sin(var1[3]);
  t1295 = Cos(var1[3]);
  t1300 = t1295*t718;
  t1335 = -1.*t1302*t210*t181;
  t1337 = t1300 + t1335;
  t635 = 0.135*t567;
  t654 = 0.049*t652;
  t681 = t635 + t654;
  t719 = -0.049*t567;
  t725 = 0.135*t652;
  t727 = t719 + t725;
  t1350 = t110*t1337;
  t1361 = -1.*t103*t1302*t264;
  t1363 = t1350 + t1361;
  t1380 = t718*t1302*t210;
  t1388 = t1295*t181;
  t1391 = t1380 + t1388;
  t820 = -0.049*t819;
  t826 = -0.09*t823;
  t843 = t820 + t826;
  t890 = -0.09*t819;
  t902 = 0.049*t823;
  t909 = t890 + t902;
  t952 = -0.049*t932;
  t963 = -0.21*t957;
  t971 = t952 + t963;
  t1423 = t494*t1391;
  t1440 = t1363*t652;
  t1467 = t1423 + t1440;
  t1477 = -1.*t103*t110*t1302;
  t1479 = -1.*t1337*t264;
  t1485 = t1477 + t1479;
  t1019 = -0.21*t932;
  t1022 = 0.049*t957;
  t1028 = t1019 + t1022;
  t1052 = -0.27068*t1046;
  t1059 = 0.00159*t1058;
  t1062 = t1052 + t1059;
  t1500 = t799*t1467;
  t1505 = t1485*t823;
  t1507 = t1500 + t1505;
  t1513 = t799*t1485;
  t1517 = -1.*t1467*t823;
  t1520 = t1513 + t1517;
  t1084 = -0.00159*t1046;
  t1093 = -0.27068*t1058;
  t1099 = t1084 + t1093;
  t1150 = 0.01841*t1149;
  t1162 = -0.70544*t1158;
  t1166 = t1150 + t1162;
  t1539 = -1.*t957*t1507;
  t1543 = t922*t1520;
  t1545 = t1539 + t1543;
  t1552 = t922*t1507;
  t1557 = t957*t1520;
  t1560 = t1552 + t1557;
  t1197 = -0.70544*t1149;
  t1203 = -0.01841*t1158;
  t1204 = t1197 + t1203;
  t1566 = t1058*t1545;
  t1568 = t1040*t1560;
  t1570 = t1566 + t1568;
  t1576 = t1040*t1545;
  t1592 = -1.*t1058*t1560;
  t1593 = t1576 + t1592;
  t1733 = t718*t1302;
  t1736 = t1295*t210*t181;
  t1738 = t1733 + t1736;
  t1757 = t110*t1738;
  t1761 = t1295*t103*t264;
  t1764 = t1757 + t1761;
  t1776 = -1.*t1295*t718*t210;
  t1780 = t1302*t181;
  t1804 = t1776 + t1780;
  t1844 = t494*t1804;
  t1848 = t1764*t652;
  t1861 = t1844 + t1848;
  t1870 = t1295*t103*t110;
  t1878 = -1.*t1738*t264;
  t1881 = t1870 + t1878;
  t1885 = t799*t1861;
  t1899 = t1881*t823;
  t1903 = t1885 + t1899;
  t1907 = t799*t1881;
  t1909 = -1.*t1861*t823;
  t1910 = t1907 + t1909;
  t1916 = -1.*t957*t1903;
  t1923 = t922*t1910;
  t1924 = t1916 + t1923;
  t1928 = t922*t1903;
  t1932 = t957*t1910;
  t1938 = t1928 + t1932;
  t1950 = t1058*t1924;
  t1955 = t1040*t1938;
  t1961 = t1950 + t1955;
  t1973 = t1040*t1924;
  t1978 = -1.*t1058*t1938;
  t1981 = t1973 + t1978;
  t2077 = t1136*t1961;
  t2080 = t1158*t1981;
  t2081 = t2077 + t2080;
  t2108 = -1.*t494*t1764;
  t2112 = t1804*t652;
  t2113 = t2108 + t2112;
  t1672 = t1136*t1570;
  t1716 = t1158*t1593;
  t1717 = t1672 + t1716;
  t2129 = Power(t2113,2);
  t2138 = Power(t2081,2);
  t2149 = t2129 + t2138;
  t2154 = 1/Sqrt(t2149);
  t1284 = t1136*t1184;
  t1290 = t1158*t1227;
  t1291 = t1284 + t1290;
  p_output1[0]=t1028*t1034 + t1062*t1069 + t1099*t1130 + t1166*t1184 + t1204*t1227 - 1.11344*(-1.*t1158*t1184 + t1136*t1227) - 0.02159*t1291 - 0.135*t103*t180*t181 - 0.135*t210*t264 + t479*t681 + 0.1305*(t479*t494 - 1.*t103*t652*t718) + t103*t718*t727 + t777*t843 + t874*t909 + t1004*t971 + var1[0];
  p_output1[1]=t1028*t1520 + t1062*t1545 + t1099*t1560 + t1166*t1570 + t1204*t1593 - 1.11344*(-1.*t1158*t1570 + t1136*t1593) - 0.02159*t1717 + 0.135*t1337*t180 + 0.135*t103*t1302*t264 + 0.1305*(t1363*t494 - 1.*t1391*t652) + t1363*t681 + t1391*t727 + t1467*t843 + t1485*t909 + t1507*t971 + var1[1];
  p_output1[2]=0.135*t1738*t180 + t1028*t1910 + t1062*t1924 + t1099*t1938 + t1166*t1961 + t1204*t1981 - 1.11344*(-1.*t1158*t1961 + t1136*t1981) - 0.02159*t2081 - 0.135*t103*t1295*t264 + 0.1305*(t1764*t494 - 1.*t1804*t652) + t1764*t681 + t1804*t727 + t1861*t843 + t1881*t909 + t1903*t971 + var1[2];
  p_output1[3]=ArcTan(t1717*t2113*t2154 - 1.*t2081*t2154*(-1.*t1363*t494 + t1391*t652),-1.*t1291*t2113*t2154 + t2081*t2154*(-1.*t479*t494 + t103*t652*t718));
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 4, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#endif // MATLAB_MEX_FILE

namespace SymFunction
{

void p_leftPoint_constraint_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}




