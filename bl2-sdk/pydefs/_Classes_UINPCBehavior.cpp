#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UINPCBehavior()
{
    class_< UINPCBehavior, bases< UInterface >  , boost::noncopyable>("UINPCBehavior", no_init)
        .def("StaticClass", &UINPCBehavior::StaticClass, return_value_policy< reference_existing_object >())
        .def("GetCurrentProjectile", &UINPCBehavior::GetCurrentProjectile, return_value_policy< reference_existing_object >())
        .def("GetGrenadeMod", &UINPCBehavior::GetGrenadeMod, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}