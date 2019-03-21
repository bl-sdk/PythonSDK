#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UWillowDmgSource_MeleeWithBlade()
{
    class_< UWillowDmgSource_MeleeWithBlade, bases< UWillowDamageSource >  , boost::noncopyable>("UWillowDmgSource_MeleeWithBlade", no_init)
        .def("StaticClass", &UWillowDmgSource_MeleeWithBlade::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}