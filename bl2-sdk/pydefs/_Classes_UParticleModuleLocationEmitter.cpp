#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UParticleModuleLocationEmitter(py::object m)
{
    py::class_< UParticleModuleLocationEmitter,  UParticleModuleLocationBase   >(m, "UParticleModuleLocationEmitter")
        .def_readwrite("EmitterName", &UParticleModuleLocationEmitter::EmitterName)
        .def_readwrite("SelectionMethod", &UParticleModuleLocationEmitter::SelectionMethod)
        .def_readwrite("InheritSourceVelocityScale", &UParticleModuleLocationEmitter::InheritSourceVelocityScale)
        .def_readwrite("InheritSourceRotationScale", &UParticleModuleLocationEmitter::InheritSourceRotationScale)
        .def("StaticClass", &UParticleModuleLocationEmitter::StaticClass, py::return_value_policy::reference)
          ;
}