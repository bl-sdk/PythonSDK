#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_USeqAct_AkClearBanks(py::module &m)
{
    py::class_< USeqAct_AkClearBanks,  USequenceAction   >(m, "USeqAct_AkClearBanks")
		.def_static("StaticClass", &USeqAct_AkClearBanks::StaticClass, py::return_value_policy::reference)
          ;
}