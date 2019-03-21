#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FRejectedContentInfo()
{
    class_< FRejectedContentInfo, bases< FInstalledContentInfo >  >("FRejectedContentInfo", no_init)
        .def_readwrite("Result", &FRejectedContentInfo::Result)
  ;
}