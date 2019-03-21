#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FAIHoldData()
{
    class_< FAIHoldData >("FAIHoldData", no_init)
        .def_readwrite("HoldName", &FAIHoldData::HoldName)
        .def_readwrite("HoldTag", &FAIHoldData::HoldTag)
  ;
}