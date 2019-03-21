#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UParticleModuleSizeScaleOverDensity()
{
    py::class_< UParticleModuleSizeScaleOverDensity,  UParticleModule   >("UParticleModuleSizeScaleOverDensity")
        .def_readwrite("SizeScaleOverDensity", &UParticleModuleSizeScaleOverDensity::SizeScaleOverDensity)
        .def("StaticClass", &UParticleModuleSizeScaleOverDensity::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}