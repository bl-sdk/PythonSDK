#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UGearboxSeqAct_TargetPriority(py::module &m)
{
    py::class_< UGearboxSeqAct_TargetPriority,  USequenceAction   >(m, "UGearboxSeqAct_TargetPriority")
		.def_static("StaticClass", &UGearboxSeqAct_TargetPriority::StaticClass, py::return_value_policy::reference)
        .def_readwrite("AITargets", &UGearboxSeqAct_TargetPriority::AITargets)
        .def_readwrite("PriorityModifier", &UGearboxSeqAct_TargetPriority::PriorityModifier)
          ;
}