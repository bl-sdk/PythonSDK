#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWillowSeqEvent_ElevatorUsed(py::object m)
{
    py::class_< UWillowSeqEvent_ElevatorUsed,  USequenceEvent   >(m, "UWillowSeqEvent_ElevatorUsed")
        .def("StaticClass", &UWillowSeqEvent_ElevatorUsed::StaticClass, py::return_value_policy::reference)
          ;
}