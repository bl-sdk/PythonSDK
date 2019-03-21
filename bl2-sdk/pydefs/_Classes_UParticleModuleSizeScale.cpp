#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UParticleModuleSizeScale(py::object m)
{
    py::class_< UParticleModuleSizeScale,  UParticleModuleSizeBase   >(m, "UParticleModuleSizeScale")
        .def_readwrite("SizeScale", &UParticleModuleSizeScale::SizeScale)
        .def("StaticClass", &UParticleModuleSizeScale::StaticClass, py::return_value_policy::reference)
          ;
}