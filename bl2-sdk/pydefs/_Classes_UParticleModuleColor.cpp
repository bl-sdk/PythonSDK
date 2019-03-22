#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UParticleModuleColor(py::module &m)
{
    py::class_< UParticleModuleColor,  UParticleModuleColorBase   >(m, "UParticleModuleColor")
        .def_readwrite("StartColor", &UParticleModuleColor::StartColor)
        .def_readwrite("StartAlpha", &UParticleModuleColor::StartAlpha)
          ;
}