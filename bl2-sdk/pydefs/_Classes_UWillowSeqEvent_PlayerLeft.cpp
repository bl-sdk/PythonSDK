#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWillowSeqEvent_PlayerLeft()
{
    py::class_< UWillowSeqEvent_PlayerLeft,  USequenceEvent   >("UWillowSeqEvent_PlayerLeft")
        .def("StaticClass", &UWillowSeqEvent_PlayerLeft::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}