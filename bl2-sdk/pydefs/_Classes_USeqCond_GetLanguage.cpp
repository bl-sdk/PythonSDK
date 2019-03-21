#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_USeqCond_GetLanguage()
{
    py::class_< USeqCond_GetLanguage,  USequenceCondition   >("USeqCond_GetLanguage")
        .def_readwrite("LangList", &USeqCond_GetLanguage::LangList)
        .def("StaticClass", &USeqCond_GetLanguage::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}