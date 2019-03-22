#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UParticleModuleSizeScale(py::module &m)
{
    py::class_< UParticleModuleSizeScale,  UParticleModuleSizeBase   >(m, "UParticleModuleSizeScale")
        .def_readwrite("SizeScale", &UParticleModuleSizeScale::SizeScale)
          ;
}