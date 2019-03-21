#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_USeqAct_MathBase()
{
    py::class_< USeqAct_MathBase,  USequenceAction   >("USeqAct_MathBase")
        .def_readwrite("Operation", &USeqAct_MathBase::Operation)
        .def("StaticClass", &USeqAct_MathBase::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}