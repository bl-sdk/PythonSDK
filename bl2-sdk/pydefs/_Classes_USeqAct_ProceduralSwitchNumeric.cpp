#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_USeqAct_ProceduralSwitchNumeric(py::module &m)
{
    py::class_< USeqAct_ProceduralSwitchNumeric,  USequenceAction   >(m, "USeqAct_ProceduralSwitchNumeric")
		.def_static("StaticClass", &USeqAct_ProceduralSwitchNumeric::StaticClass, py::return_value_policy::reference)
        .def_readwrite("Possibilities", &USeqAct_ProceduralSwitchNumeric::Possibilities)
          ;
}