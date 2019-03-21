#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UForceFieldShape()
{
    py::class_< UForceFieldShape,  UObject   >("UForceFieldShape")
        .def("StaticClass", &UForceFieldShape::StaticClass, py::return_value_policy::reference)
        .def("eventGetDrawComponent", &UForceFieldShape::eventGetDrawComponent, py::return_value_policy::reference)
        .def("eventFillByCylinder", &UForceFieldShape::eventFillByCylinder)
        .def("eventFillByCapsule", &UForceFieldShape::eventFillByCapsule)
        .def("eventFillByBox", &UForceFieldShape::eventFillByBox)
        .def("eventFillBySphere", &UForceFieldShape::eventFillBySphere)
        .staticmethod("StaticClass")
  ;
}