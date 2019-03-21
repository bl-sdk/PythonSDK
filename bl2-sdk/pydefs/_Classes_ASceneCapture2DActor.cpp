#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_ASceneCapture2DActor(py::object m)
{
    py::class_< ASceneCapture2DActor,  ASceneCaptureActor   >(m, "ASceneCapture2DActor")
        .def_readwrite("DrawFrustum", &ASceneCapture2DActor::DrawFrustum)
        .def("StaticClass", &ASceneCapture2DActor::StaticClass, py::return_value_policy::reference)
          ;
}