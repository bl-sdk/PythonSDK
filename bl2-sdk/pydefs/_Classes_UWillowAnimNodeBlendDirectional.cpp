#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWillowAnimNodeBlendDirectional(py::object m)
{
    py::class_< UWillowAnimNodeBlendDirectional,  UAnimNodeBlendBase   >(m, "UWillowAnimNodeBlendDirectional")
        .def_readwrite("DirDegreesPerSecond", &UWillowAnimNodeBlendDirectional::DirDegreesPerSecond)
        .def_readwrite("SingleAnimAtOrAboveLOD", &UWillowAnimNodeBlendDirectional::SingleAnimAtOrAboveLOD)
        .def_readwrite("BlendTime", &UWillowAnimNodeBlendDirectional::BlendTime)
        .def_readwrite("DirAngle", &UWillowAnimNodeBlendDirectional::DirAngle)
        .def("StaticClass", &UWillowAnimNodeBlendDirectional::StaticClass, py::return_value_policy::reference)
          ;
}