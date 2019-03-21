#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UIResourcePoolOwner()
{
    class_< UIResourcePoolOwner, bases< UInterface >  , boost::noncopyable>("UIResourcePoolOwner", no_init)
        .def("StaticClass", &UIResourcePoolOwner::StaticClass, return_value_policy< reference_existing_object >())
        .def("CanSetResourcePoolValues", &UIResourcePoolOwner::CanSetResourcePoolValues)
        .staticmethod("StaticClass")
  ;
}