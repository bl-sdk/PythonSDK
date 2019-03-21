#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UForceFieldShapeBox()
{
    py::class_< UForceFieldShapeBox,  UForceFieldShape   >("UForceFieldShapeBox")
        .def_readwrite("Shape", &UForceFieldShapeBox::Shape)
        .def("StaticClass", &UForceFieldShapeBox::StaticClass, py::return_value_policy::reference)
        .def("eventGetDrawComponent", &UForceFieldShapeBox::eventGetDrawComponent, py::return_value_policy::reference)
        .def("eventFillByCylinder", &UForceFieldShapeBox::eventFillByCylinder)
        .def("eventFillByCapsule", &UForceFieldShapeBox::eventFillByCapsule)
        .def("eventFillByBox", &UForceFieldShapeBox::eventFillByBox)
        .def("eventFillBySphere", &UForceFieldShapeBox::eventFillBySphere)
        .def("eventGetRadii", &UForceFieldShapeBox::eventGetRadii)
        .staticmethod("StaticClass")
  ;
}