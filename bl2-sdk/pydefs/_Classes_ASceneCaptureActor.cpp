#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_ASceneCaptureActor(py::module &m)
{
    py::class_< ASceneCaptureActor,  AActor   >(m, "ASceneCaptureActor")
		.def_static("StaticClass", &ASceneCaptureActor::StaticClass, py::return_value_policy::reference)
        .def_readwrite("SceneCapture", &ASceneCaptureActor::SceneCapture)
        .def("OnToggle", &ASceneCaptureActor::OnToggle)
          ;
}