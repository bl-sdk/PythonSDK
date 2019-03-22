#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FRagdollDeathImpulseStruct(py::module &m)
{
    py::class_< FRagdollDeathImpulseStruct >(m, "FRagdollDeathImpulseStruct")
        .def_readwrite("Impulse", &FRagdollDeathImpulseStruct::Impulse)
        .def_readwrite("Offset", &FRagdollDeathImpulseStruct::Offset)
        .def_readwrite("BoneName", &FRagdollDeathImpulseStruct::BoneName)
  ;
}