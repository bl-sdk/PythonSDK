#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UIFlagProviderGroup()
{
    class_< UIFlagProviderGroup, bases< UInterface >  , boost::noncopyable>("UIFlagProviderGroup", no_init)
        .def("StaticClass", &UIFlagProviderGroup::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}