#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UHealthResourcePool()
{
    class_< UHealthResourcePool, bases< UResourcePool >  , boost::noncopyable>("UHealthResourcePool", no_init)
        .def("StaticClass", &UHealthResourcePool::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}