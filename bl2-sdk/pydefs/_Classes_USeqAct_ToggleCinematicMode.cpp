#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_USeqAct_ToggleCinematicMode(py::module &m)
{
    py::class_< USeqAct_ToggleCinematicMode,  USequenceAction   >(m, "USeqAct_ToggleCinematicMode")
		.def_static("StaticClass", &USeqAct_ToggleCinematicMode::StaticClass, py::return_value_policy::reference)
          ;
}