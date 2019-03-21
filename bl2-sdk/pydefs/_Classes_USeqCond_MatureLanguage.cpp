#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_USeqCond_MatureLanguage()
{
    py::class_< USeqCond_MatureLanguage,  USequenceCondition   >("USeqCond_MatureLanguage")
        .def("StaticClass", &USeqCond_MatureLanguage::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}