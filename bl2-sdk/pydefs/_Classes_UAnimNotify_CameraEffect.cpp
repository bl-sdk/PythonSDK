#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UAnimNotify_CameraEffect(py::object m)
{
    py::class_< UAnimNotify_CameraEffect,  UAnimNotify   >(m, "UAnimNotify_CameraEffect")
        .def_readwrite("CameraLensEffect", &UAnimNotify_CameraEffect::CameraLensEffect)
        .def("StaticClass", &UAnimNotify_CameraEffect::StaticClass, py::return_value_policy::reference)
          ;
}