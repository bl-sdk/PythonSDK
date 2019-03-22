#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UAkEvent(py::module &m)
{
    py::class_< UAkEvent,  UObject   >(m, "UAkEvent")
        .def_readwrite("RequiredBank", &UAkEvent::RequiredBank)
        .def_readwrite("FaceFXAnimSet", &UAkEvent::FaceFXAnimSet)
        .def_readwrite("EnvironmentalEffectUpdateFrequency", &UAkEvent::EnvironmentalEffectUpdateFrequency)
        .def_readwrite("MaxAttenuationRadius", &UAkEvent::MaxAttenuationRadius)
        .def_readwrite("ShortId", &UAkObject::ShortId)
          ;
}