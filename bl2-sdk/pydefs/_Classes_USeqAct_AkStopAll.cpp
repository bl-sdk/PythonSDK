#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_USeqAct_AkStopAll(py::module &m)
{
    py::class_< USeqAct_AkStopAll,  USequenceAction   >(m, "USeqAct_AkStopAll")
		.def_static("StaticClass", &USeqAct_AkStopAll::StaticClass, py::return_value_policy::reference)
          ;
}