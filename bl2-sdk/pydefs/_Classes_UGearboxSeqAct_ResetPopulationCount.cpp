#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UGearboxSeqAct_ResetPopulationCount(py::module &m)
{
    py::class_< UGearboxSeqAct_ResetPopulationCount,  USequenceAction   >(m, "UGearboxSeqAct_ResetPopulationCount")
		.def_static("StaticClass", &UGearboxSeqAct_ResetPopulationCount::StaticClass, py::return_value_policy::reference)
          ;
}