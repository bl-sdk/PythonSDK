#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FAudioClassInfo(py::object m)
{
    py::class_< FAudioClassInfo >(m, "FAudioClassInfo")
        .def_readwrite("NumResident", &FAudioClassInfo::NumResident)
        .def_readwrite("SizeResident", &FAudioClassInfo::SizeResident)
        .def_readwrite("NumRealTime", &FAudioClassInfo::NumRealTime)
        .def_readwrite("SizeRealTime", &FAudioClassInfo::SizeRealTime)
  ;
}