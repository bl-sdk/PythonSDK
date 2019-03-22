#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_ALensFlareSource(py::module &m)
{
    py::class_< ALensFlareSource,  AActor   >(m, "ALensFlareSource")
        .def_readwrite("LensFlareComp", &ALensFlareSource::LensFlareComp)
        .def("SetActorParameter", &ALensFlareSource::SetActorParameter)
        .def("SetExtColorParameter", &ALensFlareSource::SetExtColorParameter)
        .def("SetColorParameter", &ALensFlareSource::SetColorParameter)
        .def("SetVectorParameter", &ALensFlareSource::SetVectorParameter)
        .def("SetFloatParameter", &ALensFlareSource::SetFloatParameter)
        .def("eventReplicatedEvent", &ALensFlareSource::eventReplicatedEvent)
        .def("OnToggle", &ALensFlareSource::OnToggle)
        .def("eventPostBeginPlay", &ALensFlareSource::eventPostBeginPlay)
        .def("SetTemplate", &ALensFlareSource::SetTemplate)
          ;
}