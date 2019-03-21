#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UIBodyInfoProvider()
{
    class_< UIBodyInfoProvider, bases< UInterface >  , boost::noncopyable>("UIBodyInfoProvider", no_init)
        .def("StaticClass", &UIBodyInfoProvider::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}