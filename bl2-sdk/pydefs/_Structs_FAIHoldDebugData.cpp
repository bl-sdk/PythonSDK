#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FAIHoldDebugData()
{
    class_< FAIHoldDebugData >("FAIHoldDebugData", no_init)
        .def_readwrite("HoldName", &FAIHoldDebugData::HoldName)
        .def_readwrite("HoldTag", &FAIHoldDebugData::HoldTag)
  ;
}