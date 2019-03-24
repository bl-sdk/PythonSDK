#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UParticleModuleSizeScaleByTime(py::module &m)
{
    py::class_< UParticleModuleSizeScaleByTime,  UParticleModuleSizeBase   >(m, "UParticleModuleSizeScaleByTime")
		.def_static("StaticClass", &UParticleModuleSizeScaleByTime::StaticClass, py::return_value_policy::reference)
        .def_readwrite("SizeScaleByTime", &UParticleModuleSizeScaleByTime::SizeScaleByTime)
          ;
}