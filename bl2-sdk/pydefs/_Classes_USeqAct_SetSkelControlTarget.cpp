#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_USeqAct_SetSkelControlTarget(py::module &m)
{
    py::class_< USeqAct_SetSkelControlTarget,  USequenceAction   >(m, "USeqAct_SetSkelControlTarget")
		.def_static("StaticClass", &USeqAct_SetSkelControlTarget::StaticClass, py::return_value_policy::reference)
        .def_readwrite("SkelControlName", &USeqAct_SetSkelControlTarget::SkelControlName)
        .def_readwrite("TargetActors", &USeqAct_SetSkelControlTarget::TargetActors)
          ;
}