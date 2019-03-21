#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UShieldResourcePool()
{
    class_< UShieldResourcePool, bases< UResourcePool >  , boost::noncopyable>("UShieldResourcePool", no_init)
        .def("StaticClass", &UShieldResourcePool::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}