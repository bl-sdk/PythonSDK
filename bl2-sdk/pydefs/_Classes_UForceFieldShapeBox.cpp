#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UForceFieldShapeBox()
{
    class_< UForceFieldShapeBox, bases< UForceFieldShape >  , boost::noncopyable>("UForceFieldShapeBox", no_init)
        .def_readwrite("Shape", &UForceFieldShapeBox::Shape)
        .def("StaticClass", &UForceFieldShapeBox::StaticClass, return_value_policy< reference_existing_object >())
        .def("eventGetDrawComponent", &UForceFieldShapeBox::eventGetDrawComponent, return_value_policy< reference_existing_object >())
        .def("eventFillByCylinder", &UForceFieldShapeBox::eventFillByCylinder)
        .def("eventFillByCapsule", &UForceFieldShapeBox::eventFillByCapsule)
        .def("eventFillByBox", &UForceFieldShapeBox::eventFillByBox)
        .def("eventFillBySphere", &UForceFieldShapeBox::eventFillBySphere)
        .def("eventGetRadii", &UForceFieldShapeBox::eventGetRadii)
        .staticmethod("StaticClass")
  ;
}