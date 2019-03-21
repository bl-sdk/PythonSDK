#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FImpactResponseData()
{
    py::class_< FImpactResponseData >("FImpactResponseData")
        .def_readwrite("ImpactType", &FImpactResponseData::ImpactType)
        .def_readwrite("ResponseEffect", &FImpactResponseData::ResponseEffect)
  ;
}