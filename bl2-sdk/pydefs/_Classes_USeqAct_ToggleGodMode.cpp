#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_USeqAct_ToggleGodMode()
{
    py::class_< USeqAct_ToggleGodMode,  USequenceAction   >("USeqAct_ToggleGodMode")
        .def("StaticClass", &USeqAct_ToggleGodMode::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}