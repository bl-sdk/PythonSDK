#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_F_ModifyHealthParams(py::object m)
{
    py::class_< F_ModifyHealthParams >(m, "F_ModifyHealthParams")
        .def_readwrite("DamageAmount", &F_ModifyHealthParams::DamageAmount)
        .def_readwrite("EventInstigator", &F_ModifyHealthParams::EventInstigator)
        .def_readwrite("HitLocation", &F_ModifyHealthParams::HitLocation)
        .def_readwrite("Momentum", &F_ModifyHealthParams::Momentum)
        .def_readwrite("DamageType", &F_ModifyHealthParams::DamageType)
        .def_readwrite("DamageTypeDefinition", &F_ModifyHealthParams::DamageTypeDefinition)
        .def_readwrite("ImpactDefinition", &F_ModifyHealthParams::ImpactDefinition)
  ;
}