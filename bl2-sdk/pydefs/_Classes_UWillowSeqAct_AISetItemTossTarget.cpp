#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWillowSeqAct_AISetItemTossTarget(py::module &m)
{
    py::class_< UWillowSeqAct_AISetItemTossTarget,  USequenceAction   >(m, "UWillowSeqAct_AISetItemTossTarget")
		.def_static("StaticClass", &UWillowSeqAct_AISetItemTossTarget::StaticClass, py::return_value_policy::reference)
        .def_readwrite("TossTargets", &UWillowSeqAct_AISetItemTossTarget::TossTargets)
          ;
}