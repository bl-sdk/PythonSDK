#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWillowSeqEvent_JumpAnimIdle(py::object m)
{
    py::class_< UWillowSeqEvent_JumpAnimIdle,  USequenceEvent   >(m, "UWillowSeqEvent_JumpAnimIdle")
        .def("StaticClass", &UWillowSeqEvent_JumpAnimIdle::StaticClass, py::return_value_policy::reference)
          ;
}