#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_USceneCapturePortalComponent(py::object m)
{
    py::class_< USceneCapturePortalComponent,  USceneCaptureComponent   >(m, "USceneCapturePortalComponent")
        .def_readwrite("TextureTarget", &USceneCapturePortalComponent::TextureTarget)
        .def_readwrite("ScaleFOV", &USceneCapturePortalComponent::ScaleFOV)
        .def_readwrite("ViewDestination", &USceneCapturePortalComponent::ViewDestination)
        .def("StaticClass", &USceneCapturePortalComponent::StaticClass, py::return_value_policy::reference)
        .def("SetCaptureParameters", &USceneCapturePortalComponent::SetCaptureParameters)
          ;
}