#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UForceFieldShapeCapsule(py::module &m)
{
    py::class_< UForceFieldShapeCapsule,  UForceFieldShape   >(m, "UForceFieldShapeCapsule")
        .def_readwrite("Shape", &UForceFieldShapeCapsule::Shape)
        .def("StaticClass", &UForceFieldShapeCapsule::StaticClass, py::return_value_policy::reference)
        .def("eventGetDrawComponent", &UForceFieldShapeCapsule::eventGetDrawComponent, py::return_value_policy::reference)
        .def("eventFillByCylinder", &UForceFieldShapeCapsule::eventFillByCylinder)
        .def("eventFillByCapsule", &UForceFieldShapeCapsule::eventFillByCapsule)
        .def("eventFillByBox", &UForceFieldShapeCapsule::eventFillByBox)
        .def("eventFillBySphere", &UForceFieldShapeCapsule::eventFillBySphere)
        .def("eventGetRadius", &UForceFieldShapeCapsule::eventGetRadius)
        .def("eventGetHeight", &UForceFieldShapeCapsule::eventGetHeight)
          ;
}