#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWillowSeqEvent_FastTravel()
{
    py::class_< UWillowSeqEvent_FastTravel,  USequenceEvent   >("UWillowSeqEvent_FastTravel")
        .def("StaticClass", &UWillowSeqEvent_FastTravel::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}