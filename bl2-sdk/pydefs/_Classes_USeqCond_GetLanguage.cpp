#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_USeqCond_GetLanguage(py::module &m)
{
    py::class_< USeqCond_GetLanguage,  USequenceCondition   >(m, "USeqCond_GetLanguage")
		.def_static("StaticClass", &USeqCond_GetLanguage::StaticClass, py::return_value_policy::reference)
        .def_readwrite("LangList", &USeqCond_GetLanguage::LangList)
          ;
}