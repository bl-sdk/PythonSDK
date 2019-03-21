#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UParticleModuleParameterDynamic(py::object m)
{
    py::class_< UParticleModuleParameterDynamic,  UParticleModule   >(m, "UParticleModuleParameterDynamic")
        .def_readwrite("DynamicParams", &UParticleModuleParameterDynamic::DynamicParams)
        .def_readwrite("UpdateFlags", &UParticleModuleParameterDynamic::UpdateFlags)
        .def("StaticClass", &UParticleModuleParameterDynamic::StaticClass, py::return_value_policy::reference)
          ;
}