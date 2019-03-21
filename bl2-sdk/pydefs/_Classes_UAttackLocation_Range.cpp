#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UAttackLocation_Range()
{
    class_< UAttackLocation_Range, bases< UAttackLocation >  , boost::noncopyable>("UAttackLocation_Range", no_init)
        .def_readwrite("Range", &UAttackLocation_Range::Range)
        .def("StaticClass", &UAttackLocation_Range::StaticClass, return_value_policy< reference_existing_object >())
        .def("ValidLocation", &UAttackLocation_Range::ValidLocation)
        .def("CanPath", &UAttackLocation_Range::CanPath)
        .staticmethod("StaticClass")
  ;
}