#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UISpecialOcclusionProvider()
{
    class_< UISpecialOcclusionProvider, bases< UInterface >  , boost::noncopyable>("UISpecialOcclusionProvider", no_init)
        .def("StaticClass", &UISpecialOcclusionProvider::StaticClass, return_value_policy< reference_existing_object >())
        .def("GetOcclusionAmount", &UISpecialOcclusionProvider::GetOcclusionAmount)
        .staticmethod("StaticClass")
  ;
}