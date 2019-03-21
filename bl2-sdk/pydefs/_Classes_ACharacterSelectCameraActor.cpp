#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_ACharacterSelectCameraActor()
{
    py::class_< ACharacterSelectCameraActor,  ACameraActor   >("ACharacterSelectCameraActor")
        .def("StaticClass", &ACharacterSelectCameraActor::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}