#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FImpactResponseData(py::object m)
{
    py::class_< FImpactResponseData >(m, "FImpactResponseData")
        .def_readwrite("ImpactType", &FImpactResponseData::ImpactType)
        .def_readwrite("ResponseEffect", &FImpactResponseData::ResponseEffect)
  ;
}