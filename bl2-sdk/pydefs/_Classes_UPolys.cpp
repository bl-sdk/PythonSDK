#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UPolys()
{
    class_< UPolys, bases< UObject >  , boost::noncopyable>("UPolys", no_init)
        .def_readonly("UnknownData00", &UPolys::UnknownData00)
        .def("StaticClass", &UPolys::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}