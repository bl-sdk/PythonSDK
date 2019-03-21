#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FBodyHandIKHoldData()
{
    class_< FBodyHandIKHoldData >("FBodyHandIKHoldData", no_init)
        .def_readwrite("JointLocation", &FBodyHandIKHoldData::JointLocation)
        .def_readwrite("HandLocation", &FBodyHandIKHoldData::HandLocation)
        .def_readwrite("HandRotation", &FBodyHandIKHoldData::HandRotation)
  ;
}