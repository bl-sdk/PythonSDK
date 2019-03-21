#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_ADebugCameraHUD()
{
    py::class_< ADebugCameraHUD,  AHUD   >("ADebugCameraHUD")
        .def("StaticClass", &ADebugCameraHUD::StaticClass, py::return_value_policy::reference)
        .def("eventPostRender", &ADebugCameraHUD::eventPostRender)
        .def("DisplayMaterials", &ADebugCameraHUD::DisplayMaterials)
        .def("eventPostBeginPlay", &ADebugCameraHUD::eventPostBeginPlay)
        .staticmethod("StaticClass")
  ;
}