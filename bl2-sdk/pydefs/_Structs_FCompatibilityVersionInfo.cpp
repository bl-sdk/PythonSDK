#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FCompatibilityVersionInfo()
{
    class_< FCompatibilityVersionInfo >("FCompatibilityVersionInfo", no_init)
        .def_readwrite("CurrentCompatPackVersion", &FCompatibilityVersionInfo::CurrentCompatPackVersion)
        .def_readwrite("CurrentCompatibilityMask", &FCompatibilityVersionInfo::CurrentCompatibilityMask)
  ;
}