#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UIDamageSurface()
{
    class_< UIDamageSurface, bases< UInterface >  , boost::noncopyable>("UIDamageSurface", no_init)
        .def("StaticClass", &UIDamageSurface::StaticClass, return_value_policy< reference_existing_object >())
        .def("IsFullyArmored", &UIDamageSurface::IsFullyArmored)
        .def("GetDamageSurfaceTypeFromHit", &UIDamageSurface::GetDamageSurfaceTypeFromHit)
        .def("GetDefaultDamageSurfaceType", &UIDamageSurface::GetDefaultDamageSurfaceType)
        .staticmethod("StaticClass")
  ;
}