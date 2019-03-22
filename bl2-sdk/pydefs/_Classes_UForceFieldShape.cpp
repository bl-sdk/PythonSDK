#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UForceFieldShape(py::module &m)
{
    py::class_< UForceFieldShape,  UObject   >(m, "UForceFieldShape")
        .def("StaticClass", &UForceFieldShape::StaticClass, py::return_value_policy::reference)
        .def("eventGetDrawComponent", &UForceFieldShape::eventGetDrawComponent, py::return_value_policy::reference)
        .def("eventFillByCylinder", &UForceFieldShape::eventFillByCylinder)
        .def("eventFillByCapsule", &UForceFieldShape::eventFillByCapsule)
        .def("eventFillByBox", &UForceFieldShape::eventFillByBox)
        .def("eventFillBySphere", &UForceFieldShape::eventFillBySphere)
          ;
}