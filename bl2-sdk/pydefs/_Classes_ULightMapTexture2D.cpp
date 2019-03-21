#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_ULightMapTexture2D()
{
    class_< ULightMapTexture2D, bases< UTexture2D >  , boost::noncopyable>("ULightMapTexture2D", no_init)
        .def_readonly("UnknownData00", &ULightMapTexture2D::UnknownData00)
        .def("StaticClass", &ULightMapTexture2D::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}