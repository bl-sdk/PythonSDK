#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_USeqAct_SetSkelControlTarget()
{
    py::class_< USeqAct_SetSkelControlTarget,  USequenceAction   >("USeqAct_SetSkelControlTarget")
        .def_readwrite("SkelControlName", &USeqAct_SetSkelControlTarget::SkelControlName)
        .def_readwrite("TargetActors", &USeqAct_SetSkelControlTarget::TargetActors)
        .def("StaticClass", &USeqAct_SetSkelControlTarget::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}