#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_USeqAct_ModifyCover()
{
    py::class_< USeqAct_ModifyCover,  USequenceAction   >("USeqAct_ModifyCover")
        .def_readwrite("Slots", &USeqAct_ModifyCover::Slots)
        .def_readwrite("ManualCoverType", &USeqAct_ModifyCover::ManualCoverType)
        .def("StaticClass", &USeqAct_ModifyCover::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}