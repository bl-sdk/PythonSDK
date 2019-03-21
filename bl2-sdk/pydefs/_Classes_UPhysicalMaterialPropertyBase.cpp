#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UPhysicalMaterialPropertyBase()
{
    class_< UPhysicalMaterialPropertyBase, bases< UObject >  , boost::noncopyable>("UPhysicalMaterialPropertyBase", no_init)
        .def("StaticClass", &UPhysicalMaterialPropertyBase::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}