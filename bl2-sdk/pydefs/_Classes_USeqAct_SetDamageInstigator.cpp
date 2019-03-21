#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_USeqAct_SetDamageInstigator()
{
    py::class_< USeqAct_SetDamageInstigator,  USequenceAction   >("USeqAct_SetDamageInstigator")
        .def_readwrite("DamageInstigator", &USeqAct_SetDamageInstigator::DamageInstigator)
        .def("StaticClass", &USeqAct_SetDamageInstigator::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}