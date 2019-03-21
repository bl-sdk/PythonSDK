#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWillowSeqEvent_JumpAnimStop()
{
    py::class_< UWillowSeqEvent_JumpAnimStop,  USequenceEvent   >("UWillowSeqEvent_JumpAnimStop")
        .def("StaticClass", &UWillowSeqEvent_JumpAnimStop::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}