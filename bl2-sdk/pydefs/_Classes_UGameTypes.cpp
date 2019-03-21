#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UGameTypes()
{
    class_< UGameTypes, bases< UObject >  , boost::noncopyable>("UGameTypes", no_init)
        .def("StaticClass", &UGameTypes::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}