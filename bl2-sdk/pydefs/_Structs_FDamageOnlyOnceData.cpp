#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FDamageOnlyOnceData(py::module &m)
{
    py::class_< FDamageOnlyOnceData >(m, "FDamageOnlyOnceData")
        .def_readwrite("UniqueId", &FDamageOnlyOnceData::UniqueId)
        .def_readwrite("HurtActor", &FDamageOnlyOnceData::HurtActor)
  ;
}