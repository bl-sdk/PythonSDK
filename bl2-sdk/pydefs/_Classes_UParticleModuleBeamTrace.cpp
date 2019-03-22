#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UParticleModuleBeamTrace(py::module &m)
{
    py::class_< UParticleModuleBeamTrace,  UParticleModuleBeamTarget   >(m, "UParticleModuleBeamTrace")
        .def_readwrite("TraceExtent", &UParticleModuleBeamTrace::TraceExtent)
        .def_readwrite("TraceRotation", &UParticleModuleBeamTrace::TraceRotation)
        .def_readwrite("TraceMaxDistance", &UParticleModuleBeamTrace::TraceMaxDistance)
        .def_readwrite("UpdateDelay", &UParticleModuleBeamTrace::UpdateDelay)
        .def_readwrite("MaxTraceEvents", &UParticleModuleBeamTrace::MaxTraceEvents)
        .def_readwrite("LastDistance", &UParticleModuleBeamTrace::LastDistance)
        .def_readwrite("LastUpdateTime", &UParticleModuleBeamTrace::LastUpdateTime)
        .def("StaticClass", &UParticleModuleBeamTrace::StaticClass, py::return_value_policy::reference)
          ;
}