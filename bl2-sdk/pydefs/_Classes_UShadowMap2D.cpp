#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UShadowMap2D()
{
    class_< UShadowMap2D, bases< UObject >  , boost::noncopyable>("UShadowMap2D", no_init)
        .def_readwrite("Texture", &UShadowMap2D::Texture)
        .def_readwrite("CoordinateScale", &UShadowMap2D::CoordinateScale)
        .def_readwrite("CoordinateBias", &UShadowMap2D::CoordinateBias)
        .def_readwrite("LightGuid", &UShadowMap2D::LightGuid)
        .def_readwrite("Component", &UShadowMap2D::Component)
        .def_readwrite("InstanceIndex", &UShadowMap2D::InstanceIndex)
        .def("StaticClass", &UShadowMap2D::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}