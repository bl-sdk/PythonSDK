#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_USeqAct_AkPostTrigger(py::object m)
{
    py::class_< USeqAct_AkPostTrigger,  USequenceAction   >(m, "USeqAct_AkPostTrigger")
        .def_readwrite("AkTrigger", &USeqAct_AkPostTrigger::AkTrigger)
        .def("StaticClass", &USeqAct_AkPostTrigger::StaticClass, py::return_value_policy::reference)
          ;
}