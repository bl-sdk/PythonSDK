#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_ANxRadialCustomForceField()
{
    class_< ANxRadialCustomForceField, bases< ANxRadialForceField >  , boost::noncopyable>("ANxRadialCustomForceField", no_init)
        .def_readwrite("SelfRotationStrength", &ANxRadialCustomForceField::SelfRotationStrength)
        .def_readwrite("Kernel", &ANxRadialCustomForceField::Kernel)
        .def("StaticClass", &ANxRadialCustomForceField::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}