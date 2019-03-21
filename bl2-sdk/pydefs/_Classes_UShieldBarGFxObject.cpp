#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UShieldBarGFxObject()
{
    class_< UShieldBarGFxObject, bases< UGFxObject >  , boost::noncopyable>("UShieldBarGFxObject", no_init)
        .def_readwrite("CachedCurrentShield", &UShieldBarGFxObject::CachedCurrentShield)
        .def("StaticClass", &UShieldBarGFxObject::StaticClass, return_value_policy< reference_existing_object >())
        .def("SetShield", &UShieldBarGFxObject::SetShield)
        .staticmethod("StaticClass")
  ;
}