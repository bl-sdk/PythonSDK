#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UParticleModuleEventReceiverBase(py::module &m)
{
    py::class_< UParticleModuleEventReceiverBase,  UParticleModuleEventBase   >(m, "UParticleModuleEventReceiverBase")
		.def_static("StaticClass", &UParticleModuleEventReceiverBase::StaticClass, py::return_value_policy::reference)
        .def_readwrite("EventGeneratorType", &UParticleModuleEventReceiverBase::EventGeneratorType)
        .def_readwrite("EventName", &UParticleModuleEventReceiverBase::EventName)
          ;
}