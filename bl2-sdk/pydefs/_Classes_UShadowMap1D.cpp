#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UShadowMap1D()
{
    class_< UShadowMap1D, bases< UObject >  , boost::noncopyable>("UShadowMap1D", no_init)
        .def_readonly("UnknownData00", &UShadowMap1D::UnknownData00)
        .def("StaticClass", &UShadowMap1D::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}