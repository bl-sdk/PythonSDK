#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_USeqAct_SetVector()
{
    py::class_< USeqAct_SetVector,  USeqAct_SetSequenceVariable   >("USeqAct_SetVector")
        .def_readwrite("DefaultValue", &USeqAct_SetVector::DefaultValue)
        .def("StaticClass", &USeqAct_SetVector::StaticClass, py::return_value_policy::reference)
        .def("eventActivated", &USeqAct_SetVector::eventActivated)
        .staticmethod("StaticClass")
  ;
}