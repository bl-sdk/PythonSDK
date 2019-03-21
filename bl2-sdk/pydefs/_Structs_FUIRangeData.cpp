#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FUIRangeData()
{
    class_< FUIRangeData >("FUIRangeData", no_init)
        .def_readwrite("CurrentValue", &FUIRangeData::CurrentValue)
        .def_readwrite("MinValue", &FUIRangeData::MinValue)
        .def_readwrite("MaxValue", &FUIRangeData::MaxValue)
        .def_readwrite("NudgeValue", &FUIRangeData::NudgeValue)
  ;
}