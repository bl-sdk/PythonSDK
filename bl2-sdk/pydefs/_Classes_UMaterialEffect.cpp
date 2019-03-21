#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UMaterialEffect()
{
    class_< UMaterialEffect, bases< UPostProcessEffect >  , boost::noncopyable>("UMaterialEffect", no_init)
        .def_readwrite("Material", &UMaterialEffect::Material)
        .def("StaticClass", &UMaterialEffect::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}