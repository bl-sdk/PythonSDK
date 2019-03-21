#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_ULightFunction()
{
    class_< ULightFunction, bases< UObject >  , boost::noncopyable>("ULightFunction", no_init)
        .def_readwrite("SourceMaterial", &ULightFunction::SourceMaterial)
        .def_readwrite("Scale", &ULightFunction::Scale)
        .def_readwrite("DisabledBrightness", &ULightFunction::DisabledBrightness)
        .def("StaticClass", &ULightFunction::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}