#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_USeqAct_ToggleGodMode(py::object m)
{
    py::class_< USeqAct_ToggleGodMode,  USequenceAction   >(m, "USeqAct_ToggleGodMode")
        .def("StaticClass", &USeqAct_ToggleGodMode::StaticClass, py::return_value_policy::reference)
          ;
}