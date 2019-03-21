#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UIResourcePoolProvider()
{
    class_< UIResourcePoolProvider, bases< UInterface >  , boost::noncopyable>("UIResourcePoolProvider", no_init)
        .def("StaticClass", &UIResourcePoolProvider::StaticClass, return_value_policy< reference_existing_object >())
        .def("GetResourcePoolForResourceDefinition", &UIResourcePoolProvider::GetResourcePoolForResourceDefinition)
        .staticmethod("StaticClass")
  ;
}