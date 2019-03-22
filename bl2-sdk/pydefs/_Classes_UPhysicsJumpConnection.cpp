#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UPhysicsJumpConnection(py::module &m)
{
    py::class_< UPhysicsJumpConnection,  UObject   >(m, "UPhysicsJumpConnection")
        .def_readwrite("Source", &UPhysicsJumpConnection::Source)
        .def_readwrite("Destination", &UPhysicsJumpConnection::Destination)
        .def_readwrite("Speed", &UPhysicsJumpConnection::Speed)
        .def_readwrite("Angle", &UPhysicsJumpConnection::Angle)
        .def_readwrite("Velocity", &UPhysicsJumpConnection::Velocity)
        .def("StaticClass", &UPhysicsJumpConnection::StaticClass, py::return_value_policy::reference)
          ;
}