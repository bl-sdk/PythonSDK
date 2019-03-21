#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_USeqAct_SetSequenceVariable(py::object m)
{
    py::class_< USeqAct_SetSequenceVariable,  USequenceAction   >(m, "USeqAct_SetSequenceVariable")
        .def("StaticClass", &USeqAct_SetSequenceVariable::StaticClass, py::return_value_policy::reference)
          ;
}