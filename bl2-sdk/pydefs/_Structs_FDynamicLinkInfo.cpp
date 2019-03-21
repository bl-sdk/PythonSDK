#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FDynamicLinkInfo()
{
    class_< FDynamicLinkInfo >("FDynamicLinkInfo", no_init)
        .def_readwrite("LastTargetLocation", &FDynamicLinkInfo::LastTargetLocation)
        .def_readwrite("LastSrcLocation", &FDynamicLinkInfo::LastSrcLocation)
  ;
}