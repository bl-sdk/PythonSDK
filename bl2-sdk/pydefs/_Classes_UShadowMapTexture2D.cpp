#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UShadowMapTexture2D()
{
    class_< UShadowMapTexture2D, bases< UTexture2D >  , boost::noncopyable>("UShadowMapTexture2D", no_init)
        .def_readwrite("ShadowmapFlags", &UShadowMapTexture2D::ShadowmapFlags)
        .def("StaticClass", &UShadowMapTexture2D::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}