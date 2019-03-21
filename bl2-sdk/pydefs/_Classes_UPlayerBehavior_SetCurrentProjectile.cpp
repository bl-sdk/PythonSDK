#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UPlayerBehavior_SetCurrentProjectile()
{
    class_< UPlayerBehavior_SetCurrentProjectile, bases< UPlayerBehaviorBase >  , boost::noncopyable>("UPlayerBehavior_SetCurrentProjectile", no_init)
        .def_readwrite("CurrentProjectile", &UPlayerBehavior_SetCurrentProjectile::CurrentProjectile)
        .def("StaticClass", &UPlayerBehavior_SetCurrentProjectile::StaticClass, return_value_policy< reference_existing_object >())
        .def("ApplyBehaviorToContext", &UPlayerBehavior_SetCurrentProjectile::ApplyBehaviorToContext)
        .staticmethod("StaticClass")
  ;
}