#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_USeqEvent_Destroyed()
{
    py::class_< USeqEvent_Destroyed,  USequenceEvent   >("USeqEvent_Destroyed")
        .def("StaticClass", &USeqEvent_Destroyed::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}