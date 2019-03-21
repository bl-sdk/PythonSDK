#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UForceFieldShapeSphere()
{
    class_< UForceFieldShapeSphere, bases< UForceFieldShape >  , boost::noncopyable>("UForceFieldShapeSphere", no_init)
        .def_readwrite("Shape", &UForceFieldShapeSphere::Shape)
        .def("StaticClass", &UForceFieldShapeSphere::StaticClass, return_value_policy< reference_existing_object >())
        .def("eventGetDrawComponent", &UForceFieldShapeSphere::eventGetDrawComponent, return_value_policy< reference_existing_object >())
        .def("eventFillByCylinder", &UForceFieldShapeSphere::eventFillByCylinder)
        .def("eventFillByCapsule", &UForceFieldShapeSphere::eventFillByCapsule)
        .def("eventFillByBox", &UForceFieldShapeSphere::eventFillByBox)
        .def("eventFillBySphere", &UForceFieldShapeSphere::eventFillBySphere)
        .def("eventGetRadius", &UForceFieldShapeSphere::eventGetRadius)
        .staticmethod("StaticClass")
  ;
}