#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UIDrunkenProjectile()
{
    class_< UIDrunkenProjectile, bases< UInterface >  , boost::noncopyable>("UIDrunkenProjectile", no_init)
        .def("StaticClass", &UIDrunkenProjectile::StaticClass, return_value_policy< reference_existing_object >())
        .def("SetDrunkenRandomNumberSeed", &UIDrunkenProjectile::SetDrunkenRandomNumberSeed)
        .staticmethod("StaticClass")
  ;
}