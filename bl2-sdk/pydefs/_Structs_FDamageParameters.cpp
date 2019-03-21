#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FDamageParameters(py::object m)
{
    py::class_< FDamageParameters >(m, "FDamageParameters")
        .def_readwrite("OverrideMode", &FDamageParameters::OverrideMode)
        .def_readwrite("BaseDamage", &FDamageParameters::BaseDamage)
        .def_readwrite("Radius", &FDamageParameters::Radius)
        .def_readwrite("Momentum", &FDamageParameters::Momentum)
  ;
}