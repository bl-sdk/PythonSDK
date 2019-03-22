#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_USeqAct_AkSetState(py::module &m)
{
    py::class_< USeqAct_AkSetState,  USequenceAction   >(m, "USeqAct_AkSetState")
        .def_readwrite("State", &USeqAct_AkSetState::State)
        .def("StaticClass", &USeqAct_AkSetState::StaticClass, py::return_value_policy::reference)
          ;
}