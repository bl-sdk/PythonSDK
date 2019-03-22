#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_ACharacterSelectCameraActor(py::module &m)
{
    py::class_< ACharacterSelectCameraActor,  ACameraActor   >(m, "ACharacterSelectCameraActor")
        .def("StaticClass", &ACharacterSelectCameraActor::StaticClass, py::return_value_policy::reference)
          ;
}