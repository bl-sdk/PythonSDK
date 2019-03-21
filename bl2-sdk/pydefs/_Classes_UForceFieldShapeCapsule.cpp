#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UForceFieldShapeCapsule()
{
    class_< UForceFieldShapeCapsule, bases< UForceFieldShape >  , boost::noncopyable>("UForceFieldShapeCapsule", no_init)
        .def_readwrite("Shape", &UForceFieldShapeCapsule::Shape)
        .def("StaticClass", &UForceFieldShapeCapsule::StaticClass, return_value_policy< reference_existing_object >())
        .def("eventGetDrawComponent", &UForceFieldShapeCapsule::eventGetDrawComponent, return_value_policy< reference_existing_object >())
        .def("eventFillByCylinder", &UForceFieldShapeCapsule::eventFillByCylinder)
        .def("eventFillByCapsule", &UForceFieldShapeCapsule::eventFillByCapsule)
        .def("eventFillByBox", &UForceFieldShapeCapsule::eventFillByBox)
        .def("eventFillBySphere", &UForceFieldShapeCapsule::eventFillBySphere)
        .def("eventGetRadius", &UForceFieldShapeCapsule::eventGetRadius)
        .def("eventGetHeight", &UForceFieldShapeCapsule::eventGetHeight)
        .staticmethod("StaticClass")
  ;
}