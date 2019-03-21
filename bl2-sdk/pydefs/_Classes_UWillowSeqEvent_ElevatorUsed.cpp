#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWillowSeqEvent_ElevatorUsed()
{
    py::class_< UWillowSeqEvent_ElevatorUsed,  USequenceEvent   >("UWillowSeqEvent_ElevatorUsed")
        .def("StaticClass", &UWillowSeqEvent_ElevatorUsed::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}