#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_USavingSequenceFrame()
{
    py::class_< USavingSequenceFrame,  USequenceFrame   >("USavingSequenceFrame")
        .def("StaticClass", &USavingSequenceFrame::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}