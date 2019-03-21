#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_AWillowLocalOnlyProjectile()
{
    class_< AWillowLocalOnlyProjectile, bases< AWillowProjectile >  , boost::noncopyable>("AWillowLocalOnlyProjectile", no_init)
        .def("StaticClass", &AWillowLocalOnlyProjectile::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}