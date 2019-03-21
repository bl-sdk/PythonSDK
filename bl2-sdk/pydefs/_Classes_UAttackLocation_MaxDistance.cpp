#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UAttackLocation_MaxDistance()
{
    class_< UAttackLocation_MaxDistance, bases< UAttackLocation >  , boost::noncopyable>("UAttackLocation_MaxDistance", no_init)
        .def_readwrite("MaxDistance", &UAttackLocation_MaxDistance::MaxDistance)
        .def("StaticClass", &UAttackLocation_MaxDistance::StaticClass, return_value_policy< reference_existing_object >())
        .def("ValidLocation", &UAttackLocation_MaxDistance::ValidLocation)
        .staticmethod("StaticClass")
  ;
}