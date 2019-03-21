#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_USurface()
{
    class_< USurface, bases< UObject >  , boost::noncopyable>("USurface", no_init)
        .def("StaticClass", &USurface::StaticClass, return_value_policy< reference_existing_object >())
        .def("GetSurfaceHeight", &USurface::GetSurfaceHeight)
        .def("GetSurfaceWidth", &USurface::GetSurfaceWidth)
        .staticmethod("StaticClass")
  ;
}