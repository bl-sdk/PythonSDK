#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_USceneCapturePortalComponent(py::module &m)
{
    py::class_< USceneCapturePortalComponent,  USceneCaptureComponent   >(m, "USceneCapturePortalComponent")
		.def_static("StaticClass", &USceneCapturePortalComponent::StaticClass, py::return_value_policy::reference)
        .def_readwrite("TextureTarget", &USceneCapturePortalComponent::TextureTarget)
        .def_readwrite("ScaleFOV", &USceneCapturePortalComponent::ScaleFOV)
        .def_readwrite("ViewDestination", &USceneCapturePortalComponent::ViewDestination)
        .def("SetCaptureParameters", &USceneCapturePortalComponent::SetCaptureParameters)
          ;
}