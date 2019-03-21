#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UHealthBarGFxObject()
{
    class_< UHealthBarGFxObject, bases< UGFxObject >  , boost::noncopyable>("UHealthBarGFxObject", no_init)
        .def_readwrite("CachedCurrentHealth", &UHealthBarGFxObject::CachedCurrentHealth)
        .def("StaticClass", &UHealthBarGFxObject::StaticClass, return_value_policy< reference_existing_object >())
        .def("SetHealth", &UHealthBarGFxObject::SetHealth)
        .staticmethod("StaticClass")
  ;
}