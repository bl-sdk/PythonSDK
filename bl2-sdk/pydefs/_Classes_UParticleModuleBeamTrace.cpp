#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UParticleModuleBeamTrace()
{
    class_< UParticleModuleBeamTrace, bases< UParticleModuleBeamTarget >  , boost::noncopyable>("UParticleModuleBeamTrace", no_init)
        .def_readwrite("TraceExtent", &UParticleModuleBeamTrace::TraceExtent)
        .def_readwrite("TraceRotation", &UParticleModuleBeamTrace::TraceRotation)
        .def_readwrite("TraceMaxDistance", &UParticleModuleBeamTrace::TraceMaxDistance)
        .def_readwrite("UpdateDelay", &UParticleModuleBeamTrace::UpdateDelay)
        .def_readwrite("MaxTraceEvents", &UParticleModuleBeamTrace::MaxTraceEvents)
        .def_readwrite("LastDistance", &UParticleModuleBeamTrace::LastDistance)
        .def_readwrite("LastUpdateTime", &UParticleModuleBeamTrace::LastUpdateTime)
        .def("StaticClass", &UParticleModuleBeamTrace::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}