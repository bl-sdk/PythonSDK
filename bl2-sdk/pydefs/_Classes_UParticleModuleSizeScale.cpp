#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UParticleModuleSizeScale()
{
    py::class_< UParticleModuleSizeScale,  UParticleModuleSizeBase   >("UParticleModuleSizeScale")
        .def_readwrite("SizeScale", &UParticleModuleSizeScale::SizeScale)
        .def("StaticClass", &UParticleModuleSizeScale::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}