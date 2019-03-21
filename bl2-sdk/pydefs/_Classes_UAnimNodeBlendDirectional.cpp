#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UAnimNodeBlendDirectional(py::object m)
{
    py::class_< UAnimNodeBlendDirectional,  UAnimNodeBlendBase   >(m, "UAnimNodeBlendDirectional")
        .def_readwrite("DirDegreesPerSecond", &UAnimNodeBlendDirectional::DirDegreesPerSecond)
        .def_readwrite("DirAngle", &UAnimNodeBlendDirectional::DirAngle)
        .def_readwrite("SingleAnimAtOrAboveLOD", &UAnimNodeBlendDirectional::SingleAnimAtOrAboveLOD)
        .def_readwrite("RotationOffset", &UAnimNodeBlendDirectional::RotationOffset)
        .def("StaticClass", &UAnimNodeBlendDirectional::StaticClass, py::return_value_policy::reference)
          ;
}