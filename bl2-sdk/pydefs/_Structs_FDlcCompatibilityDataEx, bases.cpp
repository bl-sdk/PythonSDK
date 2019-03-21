#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FDlcCompatibilityDataEx()
{
    class_< FDlcCompatibilityDataEx, bases< FDlcCompatibilityData >  >("FDlcCompatibilityDataEx", no_init)
  ;
}