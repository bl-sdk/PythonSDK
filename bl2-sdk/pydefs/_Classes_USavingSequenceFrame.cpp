#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_USavingSequenceFrame(py::module &m)
{
    py::class_< USavingSequenceFrame,  USequenceFrame   >(m, "USavingSequenceFrame")
		.def_static("StaticClass", &USavingSequenceFrame::StaticClass, py::return_value_policy::reference)
          ;
}