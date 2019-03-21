#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_ALensFlareSource()
{
    py::class_< ALensFlareSource,  AActor   >("ALensFlareSource")
        .def_readwrite("LensFlareComp", &ALensFlareSource::LensFlareComp)
        .def("StaticClass", &ALensFlareSource::StaticClass, py::return_value_policy::reference)
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