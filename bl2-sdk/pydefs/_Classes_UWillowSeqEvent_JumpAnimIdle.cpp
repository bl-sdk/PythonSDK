#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWillowSeqEvent_JumpAnimIdle()
{
    py::class_< UWillowSeqEvent_JumpAnimIdle,  USequenceEvent   >("UWillowSeqEvent_JumpAnimIdle")
        .def("StaticClass", &UWillowSeqEvent_JumpAnimIdle::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}