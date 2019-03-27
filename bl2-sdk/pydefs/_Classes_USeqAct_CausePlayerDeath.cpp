#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_USeqAct_CausePlayerDeath(py::module &m)
{
    py::class_< USeqAct_CausePlayerDeath,  USequenceAction   >(m, "USeqAct_CausePlayerDeath")
		.def_static("StaticClass", &USeqAct_CausePlayerDeath::StaticClass, py::return_value_policy::reference)
          ;
}