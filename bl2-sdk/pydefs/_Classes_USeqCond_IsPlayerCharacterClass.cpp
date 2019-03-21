#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_USeqCond_IsPlayerCharacterClass()
{
    py::class_< USeqCond_IsPlayerCharacterClass,  USequenceCondition   >("USeqCond_IsPlayerCharacterClass")
        .def("StaticClass", &USeqCond_IsPlayerCharacterClass::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}