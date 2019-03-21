#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_USearchOrigin()
{
    class_< USearchOrigin, bases< UObject >  , boost::noncopyable>("USearchOrigin", no_init)
        .def("StaticClass", &USearchOrigin::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}