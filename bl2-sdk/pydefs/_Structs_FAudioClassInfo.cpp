#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FAudioClassInfo()
{
    class_< FAudioClassInfo >("FAudioClassInfo", no_init)
        .def_readwrite("NumResident", &FAudioClassInfo::NumResident)
        .def_readwrite("SizeResident", &FAudioClassInfo::SizeResident)
        .def_readwrite("NumRealTime", &FAudioClassInfo::NumRealTime)
        .def_readwrite("SizeRealTime", &FAudioClassInfo::SizeRealTime)
  ;
}