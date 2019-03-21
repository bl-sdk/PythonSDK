#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UForceFieldShape()
{
    class_< UForceFieldShape, bases< UObject >  , boost::noncopyable>("UForceFieldShape", no_init)
        .def("StaticClass", &UForceFieldShape::StaticClass, return_value_policy< reference_existing_object >())
        .def("eventGetDrawComponent", &UForceFieldShape::eventGetDrawComponent, return_value_policy< reference_existing_object >())
        .def("eventFillByCylinder", &UForceFieldShape::eventFillByCylinder)
        .def("eventFillByCapsule", &UForceFieldShape::eventFillByCapsule)
        .def("eventFillByBox", &UForceFieldShape::eventFillByBox)
        .def("eventFillBySphere", &UForceFieldShape::eventFillBySphere)
        .staticmethod("StaticClass")
  ;
}