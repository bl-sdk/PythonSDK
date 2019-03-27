#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_USeqCond_MatureLanguage(py::module &m)
{
    py::class_< USeqCond_MatureLanguage,  USequenceCondition   >(m, "USeqCond_MatureLanguage")
		.def_static("StaticClass", &USeqCond_MatureLanguage::StaticClass, py::return_value_policy::reference)
          ;
}