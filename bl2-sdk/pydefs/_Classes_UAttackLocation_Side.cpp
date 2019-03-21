#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UAttackLocation_Side()
{
    class_< UAttackLocation_Side, bases< UAttackLocation >  , boost::noncopyable>("UAttackLocation_Side", no_init)
        .def("StaticClass", &UAttackLocation_Side::StaticClass, return_value_policy< reference_existing_object >())
        .def("ValidLocation", &UAttackLocation_Side::ValidLocation)
        .staticmethod("StaticClass")
  ;
}