#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UAttackLocation_ParentDistance()
{
    class_< UAttackLocation_ParentDistance, bases< UAttackLocation >  , boost::noncopyable>("UAttackLocation_ParentDistance", no_init)
        .def_readwrite("Restriction", &UAttackLocation_ParentDistance::Restriction)
        .def_readwrite("Distance", &UAttackLocation_ParentDistance::Distance)
        .def("StaticClass", &UAttackLocation_ParentDistance::StaticClass, return_value_policy< reference_existing_object >())
        .def("ValidLocation", &UAttackLocation_ParentDistance::ValidLocation)
        .staticmethod("StaticClass")
  ;
}