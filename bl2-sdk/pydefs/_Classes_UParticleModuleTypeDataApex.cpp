#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UParticleModuleTypeDataApex(py::module &m)
{
    py::class_< UParticleModuleTypeDataApex,  UParticleModuleTypeDataBase   >(m, "UParticleModuleTypeDataApex")
        .def_readwrite("ApexIOFX", &UParticleModuleTypeDataApex::ApexIOFX)
        .def_readwrite("ApexEmitter", &UParticleModuleTypeDataApex::ApexEmitter)
          ;
}