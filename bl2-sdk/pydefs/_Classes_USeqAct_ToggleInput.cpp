#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_USeqAct_ToggleInput(py::object m)
{
    py::class_< USeqAct_ToggleInput,  USeqAct_Toggle   >(m, "USeqAct_ToggleInput")
        .def("StaticClass", &USeqAct_ToggleInput::StaticClass, py::return_value_policy::reference)
          ;
}