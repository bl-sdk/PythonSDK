#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FManualCoverTypeInfo()
{
    class_< FManualCoverTypeInfo >("FManualCoverTypeInfo", no_init)
        .def_readwrite("SlotIndex", &FManualCoverTypeInfo::SlotIndex)
        .def_readwrite("ManualCoverType", &FManualCoverTypeInfo::ManualCoverType)
  ;
}