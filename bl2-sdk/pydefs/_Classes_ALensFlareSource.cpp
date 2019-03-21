#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_ALensFlareSource()
{
    class_< ALensFlareSource, bases< AActor >  , boost::noncopyable>("ALensFlareSource", no_init)
        .def_readwrite("LensFlareComp", &ALensFlareSource::LensFlareComp)
        .def("StaticClass", &ALensFlareSource::StaticClass, return_value_policy< reference_existing_object >())
        .def("SetActorParameter", &ALensFlareSource::SetActorParameter)
        .def("SetExtColorParameter", &ALensFlareSource::SetExtColorParameter)
        .def("SetColorParameter", &ALensFlareSource::SetColorParameter)
        .def("SetVectorParameter", &ALensFlareSource::SetVectorParameter)
        .def("SetFloatParameter", &ALensFlareSource::SetFloatParameter)
        .def("eventReplicatedEvent", &ALensFlareSource::eventReplicatedEvent)
        .def("OnToggle", &ALensFlareSource::OnToggle)
        .def("eventPostBeginPlay", &ALensFlareSource::eventPostBeginPlay)
        .def("SetTemplate", &ALensFlareSource::SetTemplate)
        .staticmethod("StaticClass")
  ;
}