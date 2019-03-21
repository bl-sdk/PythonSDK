#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UIAnimProvider()
{
    class_< UIAnimProvider, bases< UInterface >  , boost::noncopyable>("UIAnimProvider", no_init)
        .def("StaticClass", &UIAnimProvider::StaticClass, return_value_policy< reference_existing_object >())
        .def("GetAnims", &UIAnimProvider::GetAnims)
        .staticmethod("StaticClass")
  ;
}