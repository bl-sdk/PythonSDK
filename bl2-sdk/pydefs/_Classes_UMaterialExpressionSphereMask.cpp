#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UMaterialExpressionSphereMask()
{
    class_< UMaterialExpressionSphereMask, bases< UMaterialExpression >  , boost::noncopyable>("UMaterialExpressionSphereMask", no_init)
        .def_readwrite("A", &UMaterialExpressionSphereMask::A)
        .def_readwrite("B", &UMaterialExpressionSphereMask::B)
        .def_readwrite("Radius", &UMaterialExpressionSphereMask::Radius)
        .def_readwrite("Hardness", &UMaterialExpressionSphereMask::Hardness)
        .def_readwrite("AttenuationRadius", &UMaterialExpressionSphereMask::AttenuationRadius)
        .def_readwrite("HardnessPercent", &UMaterialExpressionSphereMask::HardnessPercent)
        .def("StaticClass", &UMaterialExpressionSphereMask::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}