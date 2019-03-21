#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_USeqAct_SetSequenceVariable()
{
    py::class_< USeqAct_SetSequenceVariable,  USequenceAction   >("USeqAct_SetSequenceVariable")
        .def("StaticClass", &USeqAct_SetSequenceVariable::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}