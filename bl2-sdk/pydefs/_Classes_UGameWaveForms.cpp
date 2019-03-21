#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UGameWaveForms(py::object m)
{
    py::class_< UGameWaveForms,  UObject   >(m, "UGameWaveForms")
        .def_readwrite("CameraShakeMediumShort", &UGameWaveForms::CameraShakeMediumShort)
        .def_readwrite("CameraShakeMediumLong", &UGameWaveForms::CameraShakeMediumLong)
        .def_readwrite("CameraShakeBigShort", &UGameWaveForms::CameraShakeBigShort)
        .def_readwrite("CameraShakeBigLong", &UGameWaveForms::CameraShakeBigLong)
        .def("StaticClass", &UGameWaveForms::StaticClass, py::return_value_policy::reference)
          ;
}