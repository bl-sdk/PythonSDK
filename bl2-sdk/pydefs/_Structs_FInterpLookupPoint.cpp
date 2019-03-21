#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FInterpLookupPoint()
{
    class_< FInterpLookupPoint >("FInterpLookupPoint", no_init)
        .def_readwrite("GroupName", &FInterpLookupPoint::GroupName)
        .def_readwrite("Time", &FInterpLookupPoint::Time)
  ;
}