#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_ULocationFilter()
{
    class_< ULocationFilter, bases< UObject >  , boost::noncopyable>("ULocationFilter", no_init)
        .def("StaticClass", &ULocationFilter::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}