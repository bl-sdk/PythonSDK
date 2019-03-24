#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UParticleModuleSizeScale(py::module &m)
{
    py::class_< UParticleModuleSizeScale,  UParticleModuleSizeBase   >(m, "UParticleModuleSizeScale")
		.def_static("StaticClass", &UParticleModuleSizeScale::StaticClass, py::return_value_policy::reference)
        .def_readwrite("SizeScale", &UParticleModuleSizeScale::SizeScale)
          ;
}