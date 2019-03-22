#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_USeqAct_SetSkelControlTarget(py::module &m)
{
    py::class_< USeqAct_SetSkelControlTarget,  USequenceAction   >(m, "USeqAct_SetSkelControlTarget")
        .def_readwrite("SkelControlName", &USeqAct_SetSkelControlTarget::SkelControlName)
        .def_readwrite("TargetActors", &USeqAct_SetSkelControlTarget::TargetActors)
          ;
}