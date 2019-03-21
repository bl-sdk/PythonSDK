#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UGearboxSeqAct_TargetPriority()
{
    py::class_< UGearboxSeqAct_TargetPriority,  USequenceAction   >("UGearboxSeqAct_TargetPriority")
        .def_readwrite("AITargets", &UGearboxSeqAct_TargetPriority::AITargets)
        .def_readwrite("PriorityModifier", &UGearboxSeqAct_TargetPriority::PriorityModifier)
        .def("StaticClass", &UGearboxSeqAct_TargetPriority::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}