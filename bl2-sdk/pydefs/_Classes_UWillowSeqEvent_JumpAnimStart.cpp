#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWillowSeqEvent_JumpAnimStart(py::object m)
{
    py::class_< UWillowSeqEvent_JumpAnimStart,  USequenceEvent   >(m, "UWillowSeqEvent_JumpAnimStart")
        .def("StaticClass", &UWillowSeqEvent_JumpAnimStart::StaticClass, py::return_value_policy::reference)
          ;
}