#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UForceFieldShapeSphere()
{
    py::class_< UForceFieldShapeSphere,  UForceFieldShape   >("UForceFieldShapeSphere")
        .def_readwrite("Shape", &UForceFieldShapeSphere::Shape)
        .def("StaticClass", &UForceFieldShapeSphere::StaticClass, py::return_value_policy::reference)
        .def("eventGetDrawComponent", &UForceFieldShapeSphere::eventGetDrawComponent, py::return_value_policy::reference)
        .def("eventFillByCylinder", &UForceFieldShapeSphere::eventFillByCylinder)
        .def("eventFillByCapsule", &UForceFieldShapeSphere::eventFillByCapsule)
        .def("eventFillByBox", &UForceFieldShapeSphere::eventFillByBox)
        .def("eventFillBySphere", &UForceFieldShapeSphere::eventFillBySphere)
        .def("eventGetRadius", &UForceFieldShapeSphere::eventGetRadius)
        .staticmethod("StaticClass")
  ;
}