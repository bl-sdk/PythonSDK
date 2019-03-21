#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWillowSeqEvent_JumpAnimStart()
{
    py::class_< UWillowSeqEvent_JumpAnimStart,  USequenceEvent   >("UWillowSeqEvent_JumpAnimStart")
        .def("StaticClass", &UWillowSeqEvent_JumpAnimStart::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}