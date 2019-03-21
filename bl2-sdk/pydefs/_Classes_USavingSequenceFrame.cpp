#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_USavingSequenceFrame(py::object m)
{
    py::class_< USavingSequenceFrame,  USequenceFrame   >(m, "USavingSequenceFrame")
        .def("StaticClass", &USavingSequenceFrame::StaticClass, py::return_value_policy::reference)
          ;
}