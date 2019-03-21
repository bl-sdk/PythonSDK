#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UPackage()
{
    class_< UPackage, bases< UObject >  , boost::noncopyable>("UPackage", no_init)
        .def_readonly("UnknownData00", &UPackage::UnknownData00)
        .def("StaticClass", &UPackage::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}