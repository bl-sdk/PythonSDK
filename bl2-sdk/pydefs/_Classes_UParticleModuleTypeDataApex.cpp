#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UParticleModuleTypeDataApex(py::object m)
{
    py::class_< UParticleModuleTypeDataApex,  UParticleModuleTypeDataBase   >(m, "UParticleModuleTypeDataApex")
        .def_readwrite("ApexIOFX", &UParticleModuleTypeDataApex::ApexIOFX)
        .def_readwrite("ApexEmitter", &UParticleModuleTypeDataApex::ApexEmitter)
        .def("StaticClass", &UParticleModuleTypeDataApex::StaticClass, py::return_value_policy::reference)
          ;
}