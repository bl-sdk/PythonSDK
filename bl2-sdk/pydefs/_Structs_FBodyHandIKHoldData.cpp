#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FBodyHandIKHoldData()
{
    py::class_< FBodyHandIKHoldData >("FBodyHandIKHoldData")
        .def_readwrite("JointLocation", &FBodyHandIKHoldData::JointLocation)
        .def_readwrite("HandLocation", &FBodyHandIKHoldData::HandLocation)
        .def_readwrite("HandRotation", &FBodyHandIKHoldData::HandRotation)
  ;
}