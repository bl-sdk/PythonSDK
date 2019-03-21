#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_USeqAct_AkSetState()
{
    py::class_< USeqAct_AkSetState,  USequenceAction   >("USeqAct_AkSetState")
        .def_readwrite("State", &USeqAct_AkSetState::State)
        .def("StaticClass", &USeqAct_AkSetState::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}