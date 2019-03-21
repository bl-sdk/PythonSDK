#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_USeqCond_MatureLanguage(py::object m)
{
    py::class_< USeqCond_MatureLanguage,  USequenceCondition   >(m, "USeqCond_MatureLanguage")
        .def("StaticClass", &USeqCond_MatureLanguage::StaticClass, py::return_value_policy::reference)
          ;
}