#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UShadowMap2D()
{
    py::class_< UShadowMap2D,  UObject   >("UShadowMap2D")
        .def_readwrite("Texture", &UShadowMap2D::Texture)
        .def_readwrite("CoordinateScale", &UShadowMap2D::CoordinateScale)
        .def_readwrite("CoordinateBias", &UShadowMap2D::CoordinateBias)
        .def_readwrite("LightGuid", &UShadowMap2D::LightGuid)
        .def_readwrite("Component", &UShadowMap2D::Component)
        .def_readwrite("InstanceIndex", &UShadowMap2D::InstanceIndex)
        .def("StaticClass", &UShadowMap2D::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}