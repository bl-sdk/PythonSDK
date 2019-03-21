#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UAttackLocation_Direct()
{
    class_< UAttackLocation_Direct, bases< UAttackLocation >  , boost::noncopyable>("UAttackLocation_Direct", no_init)
        .def("StaticClass", &UAttackLocation_Direct::StaticClass, return_value_policy< reference_existing_object >())
        .def("ValidLocation", &UAttackLocation_Direct::ValidLocation)
        .staticmethod("StaticClass")
  ;
}